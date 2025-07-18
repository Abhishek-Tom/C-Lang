#include<stdio.h>
int main(){
    int n;
    printf("Enter the number ");
    scanf("%d",&n);
    // GP 1 2 4 8 16 32
    int a=1;
    for(int i=1; i<=n;i++){ 
        printf("%d \n",a);
        a = a * 2 ;
    }
    // HW 3 12 48
    int b=3;
    for(int i=1; i<=n;i++){ 
        printf(" %d \n",b);
        b = b * 4 ;
    }
    return 0;
}