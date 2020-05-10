#include <stdio.h>



int addTwoNumbers(int x,int y)
{
	return x+y;
}

int main()
{
	int a,b,sum;
	
	//function pointer declaration
	int (*ptr_sum)(int,int);
	//function initialisation
	ptr_sum=&addTwoNumbers;
	
	a=10;
	b=20;
	
	//function calling
	sum=(*ptr_sum)(a,b);
	
	printf("Sum is: %d\n",sum);
	
	return 0;
}
