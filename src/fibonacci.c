#include<stdio.h>
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);

    int a=1;
    int b=1;
    int sum=1;
        printf("The fibonacci number of 1 is %d\n", a);
    if(n > 1)
        printf("The fibonacci number of 2 is %d\n", b);
    for(int i=3;i<=n;i++){ // n-2 i=1
        sum=a+b;
        a=b;
        b=sum;
        printf("The fibonacci number of %d is %d\n",i,sum);
    }
    
    // printf("The fibonacci number of is %d",sum);
    
    
    return 0;
}