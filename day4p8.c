#include<stdio.h>
int gcd(int x,int y){
    int i,gcd;
    for(i=1;i<=x&&i<=y;i++){
        if(x%i==0&&y%i==0)
        gcd=i;
    }
    printf("gcd of %d and %d is %d:\n",x,y,gcd);
}
void main(){
int x,y;
printf("enter two numbers\n");
scanf("%d%d",&x,&y);
gcd(x,y);
}