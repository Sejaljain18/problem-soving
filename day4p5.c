#include<stdio.h>
int prime(int n)
{
    int i,c=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
        c++;
        }
    }
    if(c==2)
    return 1;
    else
    return 0;
}

void main(){
int s,e,i;

    printf("Enter the range start value: ");
    scanf("%d", &s);
    printf("Enter the range end value: ");
    scanf("%d", &e);
    printf("Prime numbers are: \n");
    for (i=s; i <e; i++)
    {
        if (prime(i) == 1){
            printf("%d ",i);
        }
    }
}