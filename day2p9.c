#include<stdio.h>
void main(){
int i,s,n,k,m;
printf("enter no of rows");
scanf("%d",&n);
m=n;
for(i=0;i<n;i++)
{k=0;
    for(s=1;s<=m-1;s++)
    printf(" ");

for(k=1;k<=2*i-1;k++)
{
    printf("*");
    
}
m--;
printf("\n");
}
m=n;
for(i=n-1;i>=1;i--)
{k=0;
    for(s=n-i;s>=1;s--)
    printf(" ");

for(k=2*i-2;k>1;k--)
{
    printf("*");
    
}
m--;
printf("\n");
}

}