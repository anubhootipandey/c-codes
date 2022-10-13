#include<stdio.h>
int main()
{
    int n=12345, sum=0, a;
    while(n>0)
    {
        a = n%10;
        sum+=a;
        n/=10;
    }
    printf("Sum is=%d", sum);
    return 0;

}