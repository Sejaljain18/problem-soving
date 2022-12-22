#include<stdio.h>
void reverse(int a[],int n){
int m,l;
l=0;
for(int i=n-1;i>1;i--){
    m=a[i];
    a[i]=a[l];
    a[l]=m;
    l++;
}
for(int i=0;i<n;i++)
printf("%d ",a[i]);
}
void main(){
int a[100],n;
printf("enter size of array\n");
scanf("%d",&n);
printf("enter array element\n");
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
reverse(a,n);
}