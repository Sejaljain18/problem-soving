#include<stdio.h>
void main()
{
    int x,y;
    printf("enter the x and y coordinate of a point");
    scanf("%d%d",&x,&y);
    if(x>0&&y>0)
    printf("point lies in first quadrant");
    else if(x>0&&y<0)
    printf("point lies in second quadrant");
    else if(x<0&&y<0)
    printf("point lies in third quadrant");
    else if(x<0&&y>0)
    printf("point lies in fourth quadrant");
    else
    printf("wrong input");
}