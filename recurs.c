#include <stdio.h>
#include <string.h>
int main()
{
    char A[100];
 
    printf("Enter a word \n");
    scanf("%s", A);
    rec(A, 0);
 
    return 0;
}
 
void rec(char A[], int x)
{
    int len = strlen(A) - (x + 1);
    if (A[x] == A[len])
    {
        if (x + 1 == len || x == len)
        {
            printf("The entered word is a palindrome\n");
            return;
        }
        rec(A, x + 1);
    }
    else
    {
        printf("The entered word is not a palindrome\n");
    }
}

