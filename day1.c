#include<stdio.h>
void main()
{
    int basic,final;
    float totalsalary,hra,da,allow,pf;
    char grade;
    printf("enter basic salary and grade");
    scanf("%d%c",&basic,&grade);
        hra=0.2*basic;
        da=0.5*basic;
        if(grade='A')
        allow=1700;
        if(grade='B')
        allow=1500;
        if(grade>='C')
        allow=1300;
        pf=0.11*basic;
        totalsalary=basic+hra+da+allow-pf;
        final=(int)totalsalary;
     printf("totalsalary=%d",final);

}