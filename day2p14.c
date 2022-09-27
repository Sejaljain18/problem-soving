#include<stdio.h>
void main(){
int num;
    printf("enter no of rows\n", num);
	scanf("%d", &num); 
    int i,j;
	for(i=0;i<num;i++)
	{
		for(j=0;j<num;j++)
		{
			if(i==0||i+j==num-1||i==num-1)
			printf("*");
			else
			printf(" ");
		}
	printf("\n");
	}
}

