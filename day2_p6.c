#include<stdio.h>
void main(){
int n;
printf("enter the no of rows:\n");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
    for(int j=0;j<n-i;j++)
    {
        printf(" ");
    }
    for(int k=1;k<=i;k++)
    {
        printf("%d",i+k-1);
    }
    for(int k=i;k>=2;k--)
    {
        printf("%d",i+k-2);
    }
    printf("\n");
}

}