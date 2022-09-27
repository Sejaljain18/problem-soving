#include<stdio.h>
int perfect(int n)
{
    int i,sum;
    sum=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
        sum+=i;
        }
    }
    if(sum==n)
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
    printf("Perfect numbers are: \n");
    for (i=s; i <e; i++)
    {
        if (perfect(i) == 1){
            printf("%d ",i);
        }
    }
}