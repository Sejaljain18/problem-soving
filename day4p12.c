#include<stdio.h>
#include<stdlib.h>
void catsMouse(int q,int x,int y,int z){
    int i,d1,d2,a,b;
    for(i=0;i<q;i++)
    {
        a=z-x;
        b=z-y;
    d1=abs(a);
    d2=abs(b);
    }
    if(d1>d2)
    printf("CAT B");
    else if(d1==d2)
    printf("MOUSE C");
    else
    printf("CAT A");

}
void main(){
int q,x,y,z;
printf("enter no of trials\n");
scanf("%d",&q);
scanf("%d%d%d",&x,&y,&z);
catsMouse(q,x,y,z);
}