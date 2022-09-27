#include<stdio.h>
#include<math.h>
void armstrong(int l,int h)
{double sum;
    int num,temp,a,c,i;
    while(l<=h){
    temp=l;
    c=0;
    sum=0;
    while (temp!= 0) 
{
    c++;
    temp=temp/10;
}
num=l;
while(num>0)
{
    a=num%10;
    sum=sum+pow(a,c);
    num=num/10;
}
    if(l==sum)
    printf("%d ",l);
    l++;
}
}

void main(){
    int l,h;
    printf("enter the limits\n");
    scanf("%d%d",&l,&h);
        armstrong(l,h);
    }
