#include<stdio.h>
int main(){
    // for(int i=1;i<=5;i++){
    //     printf("Hello world\n");
    // }
    int n;
    printf("Enter the number to print Hello world: ");
    scanf("%d",&n);
    for(int i=1 ; i<=n; i++){
        printf("Hello world\n");      
    }
    return 0;
}