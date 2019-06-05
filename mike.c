#include<stdio.h>
int main()
{
	int n,f1=0,f2=0;
	char s[15];
	scanf("%s",&s);
	n=strlen(s);
	for(int i=0;i<n/2;i++)
	  {
		  if(s[i]!=s[n-1-i])
		    {
				s[n-1-i]=s[i];
				f2=1;
				break;
			}
	  }
	if(f2==0&&n%2!=0)
	   f2=1;
	for(int i=0;i<n/2;i++)
	  {
		  if(s[i]!=s[n-1-i])
		     {
				 f1=1;
				 break;
			 }
	  }
	if(f1==0&&f2==1)
	  printf("YES");
	else
	  printf("NO");
	
	return 0;
}