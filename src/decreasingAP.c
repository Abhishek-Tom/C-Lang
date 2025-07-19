#include<stdio.h>
int main(){
    // 100 97 94 
    int n;
    printf("Enter the number ");
    scanf("%d",&n);

    // int a= 100;
    // for(int i=1; a>0;i++){       //NO User input required
    //     printf("%d ",a);
    // a = a- 3;    
    // }

    //hw
    float a =100;
    for(int i=1;i<=n;i++){
        printf("%f ", a);
        a = a * .5;
    }
    return 0;
}