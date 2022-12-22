#include<stdio.h>
void populate(int n){
    int a[100],m;
    int i=0;
    while(i<=n){
        m=n-1;
        for(int j=1;j<=n;j++){
            if(j%2==0){
            a[m]=j;
            m--;}
            else
            {
                a[i]=j;
                i++;
            }
        }
    }
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
}
void main(){
int n;
printf("enter a number\n");
scanf("%d",&n);
populate(n);
}