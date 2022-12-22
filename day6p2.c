#include<stdio.h>
void rotate90DegAntiClockwise(int a[100][100],int n,int m)
{
    int b[100][100],temp,i,j;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        b[i][j]=a[j][i];
    }
    for(int i=0;i<m/2;i++)
    {
        for(int j=0;j<n;j++)
        {  temp=b[i][j];
        b[i][j]=b[m-i-1][j];
        b[m-i-1][j]=temp;
    }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        printf("%d ",b[i][j]);
        printf("\n");
    }
}
void main(){
    int n,m,a[100][100];
    printf("enter size of matrix\n");
    scanf("%d%d",&m,&n);
    printf("enter matrix element\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        scanf("%d",&a[i][j]);
        printf("\n");
    }
    rotate90DegAntiClockwise(a,m,n);
}