#include<stdio.h>
int mean(int a,int b,int c,int d,int e){
    int sum,m;
    sum=a+b+c+d+e;
    m=sum/5;
    return m;
}
int median(int a,int b,int c,int d,int e){
    int arr[5];
    arr[0]=a,arr[1]=b,arr[2]=c,arr[3]=d,arr[4]=e;
    int i,j,temp,med;
    for(i=0;i<4;i++)
    {
    for(j=0;j<5;j++){
        if(arr[j]>arr[j+1])
        {
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
        }
    }
    med=arr[3];
    }
    return med;
}
void main(){
int a,b,c,d,e;
printf("enter 5 digits\n");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
int mea,med;
mea=mean(a,b,c,d,e);
med=median(a,b,c,d,e);
printf("mean of %d,%d,%d,%d,%d is: %d ",a,b,c,d,e,mea);
printf("median of %d,%d,%d,%d,%d is: %d ",a,b,c,d,e,med);
}