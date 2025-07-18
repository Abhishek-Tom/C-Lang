#include<stdio.h>
int main(){
    int n;   // kahan tk no print krna hai
    printf("Enter the value of n: ");
    scanf("%d", &n);
    // for(int i=1; i<=2*n-1; i=i+2){    /// Odd numbers ke liye loop
    //     printf("%d ",i);
    // }
     
    for(int i=4; i<=n; i=i+3){    /// Odd numbers ke liye loop
        printf("%d ",i);
    }
    return 0;
}