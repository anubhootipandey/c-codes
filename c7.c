#include<stdio.h>
int main(){
    int i, start, end, sum = 0;
    printf("enter lower limit:");
    scanf("%d", &start);
    printf("enter upper limit:");
    scanf("%d", &end);

    if(start%2 != 0){
        start ++;
    }
    for(i=start; i<=end; i+=2){
        sum += i;
    }
    printf("Sum of all even no. between %d to %d= %d", start, end, sum);
    return 0;
}