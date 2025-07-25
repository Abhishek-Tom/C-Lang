#include<stdio.h>
int main(){
    int n;
    printf("Enter a digit:");
    scanf("%d",&n);
    int product = 1;
    for (int i =1; i <=n; i++)
    {
       product=product*i;
        printf("The factorial of %d number is  %d\n",i ,product);
    }
    

    

    

    return 0;
}
