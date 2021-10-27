#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number : ");
	scanf("%d",n);
	while (n>=1)
	{
		n *= n;
		n--;
	}
	printf("factorial of number is : %d ",n);
	return 0;
	  
}
	
