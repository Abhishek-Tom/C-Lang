#include<stdio.h>
int main(){
    int n;
    printf("Enter a digit:");
    scanf("%d",&n);

    // For Even Number 
    int sum =0;
    int lastDigit =0;
    while(n!=0){
        lastDigit=n%10;
        if (n%2==0)
        {
            sum=sum+lastDigit;
        }
        
        n=n/10;
    }
    // Hw for Odd number 
    //  while(n!=0){
    //     lastDigit=n%10;
    //     if (n%2!=0)
    //     {
    //         sum=sum+lastDigit;
    //     }
    //     n=n/10;
    // }

    printf("The sum of digits are %d",sum);
    return 0;
}
