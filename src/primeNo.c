#include<stdio.h>
int main (){
    int n ;
    printf("Enter a number for prime no: ");
    scanf("%d",&n);
    int a=0;
    for (int i = 2; i <=n-1; i++)
    if (n%i==0)
    {
        a=1;
        break;
    }
    if (n==1)
    {
        printf("The number is niether prime not composite");
    }
    else if (a==0)
    {
         printf("The number is prime number");
    }
    else
    {
         printf("The number is composite number ");
    }
    
    
    
    return 0;
}