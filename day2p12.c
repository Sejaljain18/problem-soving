#include<stdio.h>
void main(){
int i,j,k;
for(i=6;i>=1;i--)
{k=i;
    for(j=1;j<=11;j++){
if(j>i&&j<=11-i)
printf(" ");
else if(j<=i)
printf("%d",j);
else if(k==6){
printf("%d",(k-1));
k--;
}
else {
printf("%d",(k));
k--;
}}
printf("\n");
}}