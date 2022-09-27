#include<stdio.h>
int multiplyRL(int a[],int n){
    int s1=0,s2=0;
    for(int i=0;i<n;i++){
        if(i<n/2)
        s1+=a[i];
        else
        s2+=a[i]; 
    }
    return s1*s2;
}
void main(){
int n,a[100],ans;
printf("enter size of array\n");
scanf("%d",&n);
printf("enter array element\n");
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
ans=multiplyRL(a,n);
printf("%d",ans);
}