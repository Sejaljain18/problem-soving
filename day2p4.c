#include<stdio.h>
void main()
{
    int i,j,n,k;
    printf("enter no of rows");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    { k=i;
        for(j=1;j<=i;j++,k++)
        printf("%c",(char)(64+k));

    printf("\n");
}
}
