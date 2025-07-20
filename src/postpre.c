#include<stdio.h>
int main (){
    // int x=5;
    // printf("%d ",x);
    // printf("%d ",x++);  //baad me plus hoga
    // printf("%d ",++x);  //pehle plus hoga

    // int x=4,y,z;
    // y=--x;
    // z=x--;
    // printf("\n %d %d %d ",x,y,z);

    // while('a'<'b'){
    //     printf("\n MALAYALAM is a palindrome"); //loop
    // }

    // int i=10;
    // while(i=20){
    //     printf("\n My computer is buff");
    // }
    int x=4,y=0,z;
        while (x>=0)
        {
            if (x==y)
            {
                break;
            }
            else{
                printf("\n %d %d",x,y);
                x--;
                y++;
            }
            
        }
        
    return 0;
}