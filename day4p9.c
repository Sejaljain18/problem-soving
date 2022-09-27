#include<stdio.h>
int lcm(int x,int y){
    int i,max;
    max=(x>y)?x:y;
    while(1){
        if(max%x==0&&max%y==0){
    printf("lcm of %d and %d is: %d\n",x,y,max);
    break;
}
max++;
}
}
void main(){
int x,y;
printf("enter two numbers\n");
scanf("%d%d",&x,&y);
lcm(x,y);
}