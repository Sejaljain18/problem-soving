#include<stdio.h>
void main()
{
    char ch;
    printf("enter a alphabet");
    scanf("%c",&ch);
    if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
        printf("%c is vowel",ch);
    else
    printf("%ch is consonant",ch);
    
}