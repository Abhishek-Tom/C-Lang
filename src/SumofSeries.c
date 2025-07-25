#include<stdio.h>
int main(){
    int n;
    printf("Enter a digit:");
    scanf("%d",&n);
    // 1+2+3+4+5...

    int sum=0;
    // for (int i = 1; i <=n; i++)
    // {
    //     // sum=sum +i;

    //     if (i%2!=0)
    //     {
    //         sum=sum +i;
    //     }
    //     else{
    //     sum=sum -i;
    //     }
    // }
    // For 1-2+3-4+5-6 ......
    if (n%2==0)
    {
        sum=-n/2;
    }
    else
    {
        sum=-n/2+n;
    }
    

    printf("The Sum of series are %d",sum);

    return 0;
}
