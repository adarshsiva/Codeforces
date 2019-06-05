#include <stdio.h>

int main()
{
	long long int x,y,n,w,b;
	scanf("%I64d",&n);
	scanf("%I64d",&x);
	scanf("%I64d",&y);
	w=(x-1)+(y-1);
	b=(n-x)+(n-y);
	if(w<=b)
	   printf("white");
	   else
	   printf("black");
	
	return 0;
}