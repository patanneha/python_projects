#include<stdio.h>
void main()
{
    int a,b;
    int max;
    printf("enter a and b:");
    scanf("%d %d",&a,&b);
   // a=11;
   //b=9;
    max=(a>b)*a+(b>a)*b;
    printf("\n %d",max);
}