#include<stdio.h>
void main(){
char str[20];
printf("enter a string");
scanf("%s",str);
int l=strlen(str);
int i,temp;
for(i=0;i<l/2;i++){
    temp=str[i];
    str[i]=str[l-i-1];
    str[l-i-1]=temp;
}
printf("%s",str);

}