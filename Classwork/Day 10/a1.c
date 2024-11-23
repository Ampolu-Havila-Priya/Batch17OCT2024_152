/*A1. Check whether a given number can be expressed as the sum of two prime number
     i/p
  Enter a positive integer: 34
     Output
34 = 3 + 31
34 = 5 + 29
34 = 11 + 23
34 = 17 + 17
NoofWays = 4

NoofWays=-1


Code:*/
#include <stdio.h>
int Prime(int n)
{
    if (n <= 1) 
    return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0) return 0; 
    }
    return 1; 
}
int Sum(int n) {
    int count = 0;  
    for (int i = 2; i <= n / 2; i++) {
        if (Prime(i) && Prime(n - i)) {
            printf("%d = %d + %d\n", n, i, n - i);
            count++;
        }
    }
    if (count == 0)
    {
        printf("NoofWays = -1\n");
    } else
    {
        printf("NoofWays = %d\n", count);
    }
}
int main() 
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num < 2) 
{
      printf("Input must be a positive integer greater than or equal to 2.\n");
        return 0;
  }
    Sum(num);
    return 0;
}
