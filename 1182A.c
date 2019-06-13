#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d", &n);
	
	if (n % 2 == 0)
	{
		printf("%d", (int)(pow(2, n/2)));
	}
	else
	{
		printf("0");
	}
}