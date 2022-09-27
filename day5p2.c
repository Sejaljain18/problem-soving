#include<stdio.h>
int maxDays(int a[],int n){
    int max=0;
    for(int i=0;i<n;i++){
        if(max<a[i])
        {
            max=a[i];
        }
    }
    return max;
}
void main(){
int a[100],n;
printf("enter the size of array\n");
scanf("%d",&n);
printf("enter array element\n");
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
int ans=maxDays(a,n);
printf("maximum days is %d",ans);
}