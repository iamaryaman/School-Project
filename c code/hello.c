#include <stdio.h>

void main(){
	int i,num;
	int f=1;
	printf("Enter the number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		f*=i;
	}
	printf("The factorial of %d is %d\n",num,f);
}

