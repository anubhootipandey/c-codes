#include<stdio.h>
int main()
{
    int x, a, res=1;
    while(a !=0)
    {
        res*=x;
        --a;
    }
    printf("%d^%d", res);
    return 0;
    
}