#include<stdio.h>
int boxes(int n){
    int box,nos;
    box=(n/2)-1;
    nos=((n/2-1)*(n/2))/2;
    return nos;
    
}
void main(){
int n,length;
printf("enter length of triangle\n");
scanf("%d",&length);
n=boxes(length);
printf("maximum no of boxes are%d",n);
}
