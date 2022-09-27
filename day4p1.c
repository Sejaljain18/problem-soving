#include<stdio.h>
int palindrome(int n){
    int num,a,rev;
    num=n;
    while(num>0){
        a=num%10;
        rev=rev*10+a;
        num/=10;
    }
    if(rev==n)
    return 1;
    else 
    return 0;
}
void main(){
int n;
printf("enter a number\n");
scanf("%d",&n);
if(palindrome(n)==0)
printf("%d is not a palindrome number\n",n);
else
printf("%d is a palindrome number\n",n);
}