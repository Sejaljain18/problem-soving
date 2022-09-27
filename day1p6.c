#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the sides of triangle");
    scanf("%d%d%d",&a,&b,&c);
    if((a==b)&&(b==c)&&(c==a))
    printf("triangle is equilateral");
    else if((a==b)||(b==c)||(c==a))
    printf("triangle is isoceles");
    else if((a!=b)&&(b!=c))
    printf("triangle is scalene");
    else
    printf("another triangle");
}