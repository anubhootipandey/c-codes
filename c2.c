#include<stdio.h>
int main()
{
    int x, a, c=1;
    printf("Enter the value of x");
    scanf("%d", &x);
    printf("Enter the value of a");
    scanf("%d", &a);
    for(int i = 1; i<=a; i++)
    {
        c*=x;

    }
    printf("The result of x^a = %d^%d", x, a, c);

}


