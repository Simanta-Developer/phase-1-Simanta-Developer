#include<stdio.h>
int main()
{
	int n,i,fact;
	fact = i = 1;
	printf("Enter the number : ");
	scanf("%d",&n);
	while (i<=n)
	{
		fact *= i;
		i++;
	}
	printf("factorial of number %d is : %d ",n,fact);
	return 0;
}
	
