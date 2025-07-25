#include<stdio.h>
int main (){
    int x;
    printf("Enter a number x: ");
    scanf("%d", &x);
    int y;
    printf("Enter a power for x ");
    scanf("%d", &y);
    int power =1;
    for (int i = 1; i <= y; i++)
    {
        power=power*x;
    }
    printf("The power of %d is %d",x,power);
    return 0;
}