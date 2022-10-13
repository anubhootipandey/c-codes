#include<stdio.h>
int getSum(int n)
{
    int s = 0;
    while(n!=0){
        s+=n%10;
        n/=10;

    }
    return s;
}
int main()
{
    int n=12345;
    printf("%d", getSum(n));
    return 0;
}


