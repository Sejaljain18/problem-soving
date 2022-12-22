#include<stdio.h>
void rotate90DegClockwise(int a[100][100],int n,int m) {
    for (int i=0;i<n/2; i++) {
        for (int j=i;j<n-i-1;j++) {
            int temp=a[i][j];
            a[i][j]=a[n-1-j][i];
            a[n-1-j][i]=a[n-1-i][n-1-j];
            a[n-1-i][n-1-j]=a[j][n-1-i];
            a[j][n-1-i]=temp;
        }
    }
    for(int i=0;i<n/2;i++){
        for(int j=i;j<n-i-1;j++){
            printf("%d ",a[i][j]);
        }
    }
}

void main(){
int a[10][10],n,m;
printf("enter matrix size\n");
scanf("%d%d",&n,&m);
printf("enter matrix elements\n");
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    scanf("%d",&a[i][j]);
}
rotate90DegClockwise(*a,n,m);
}