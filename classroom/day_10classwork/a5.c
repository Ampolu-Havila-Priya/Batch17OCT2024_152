/*5.)Write a c program to print alphabet triangle.
Input: 5
Output:
     A
    ABA
   ABCBA
  ABCDCBA
 ABCDEDCBA
Code:*/
#include <stdio.h>
int ATriangle(int n)
 {
    for (int i = 0; i < n; i++) 
{
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            printf("%c", 'A' + j);
        }
        for (int j = i - 1; j >= 0; j--) {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }
}
int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("\nAlphabet Triangle:\n");
    ATriangle(n);
   return 0;
}

   /* 
     A
    ABA
   ABCBA
  ABCDCBA
 ABCDEDCBA
*/

/*Code to print numbers 
Number triangle*/

#include<stdio.h>
int BTriangle(int n) {
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
    
        for (int j = 1; j <= i + 1; j++) {
            printf("%d", j);
        }
        for (int j = i; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("\nNumber Triangle:\n");
    BTriangle(n);
    return 0;
}
/*

     1
    121
   12321
  1234321
 123454321
           */