#include<stdio.h>
void main()
{
    int a,i,b;
    printf("enter a number for reverse:");
    scanf("%d",&a);
    

    while(a==0){
        b=a%10;
        printf("reverse of the number is :%d",b);
        a=a/10;
    }
    printf("you enter the number is %d",a);


}
