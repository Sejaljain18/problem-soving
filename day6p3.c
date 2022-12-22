#include<stdio.h>
void main(){
    int m,a[100][100],sum=0,sum1=0,c,sum2=0;
    printf("enter size of square matrix in odd number\n");
    scanf("%d",&m);
    printf("enter matrix element\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        scanf("%d",&a[i][j]);
        printf("\n");
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        if(i==j)
        sum+=a[i][j];
    }
    for(int i=0;i<m;i++)
    { sum1=0;
        for(int j=0;j<m;j++)
        sum1+=a[i][j];
        if(sum1==sum)
        c=1;
        else{
        c=0;
        break;
    }
    }
    for(int i=0;i<m;i++)
    { sum2=0;
        for(int j=0;j<m;j++)
        sum2+=a[j][i];
        if(sum2==sum)
        c=1;
        else{
        c=0;
        break;
    }
    }
    if(c==1)
    printf("magic matrix");
    else
    printf("not a magix matrix");
}