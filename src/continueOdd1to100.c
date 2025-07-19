#include<stdio.h>
int main(){
    for(int i=1;i<=100;i++){
        if (i%2==0)
        {
            continue; //skip the current step 
        }
        printf("%d ",i); // -> print all the odd number 

        // if(i%2!=0)
        // {
        //     continue;  
        // }
        // printf("%d ",i); // -> print all the Even number 
    }
    return 0;
}