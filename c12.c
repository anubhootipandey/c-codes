#include<stdio.h>
int main(){
    int n, r, sum=0, temp;
    printf("Enter the number:");
    scanf("%d", &n);
    temp = n;

    while(n!=0){
        r = n%10;
        sum = sum + r*r*r;
        n/=10;
    }
    if(temp==sum){
        printf("armstrong");
    } else{
        printf("not armstrong");
    }
    return 0;
}