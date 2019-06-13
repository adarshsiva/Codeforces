#include<stdio.h>
  #include<math.h>
  int k[1005];
int main ()
{
	 int x,y,z,i,j,p,q,a,b,c,s,r,t,d,l;
     	scanf("%d %d",&x,&y);
     	t=0;
     	d=1;
     	p=0;
     	for(i=1;i<=x;i++){
     		scanf("%d",&k[i]);
     	}
     		if(y==1) {
     			for(i=1;i<=x;i++){
     				if(k[i]==1)
     				t++;
     			}
     			if(t==x)
     		printf("%d\n",x);
     		else
     		printf("-1\n");
     		}
     		else {
     		y--;
     		i=y+1;
     		while(k[i]!=1&&i>=1)
     	  i--;
     	  j=x-y;
     	  while(k[j]!=1&&j<=x)
     	  j++;
     	  if(i==j)
     	  printf("1\n");
     	  else if(i==0||j>x)
     	  printf("-1\n");
     	  else
     	  {
     	  	for(l=i;l<=x;l++){
     	  		if(k[l]==0)
     	  		t++;
     	  		else
     	  		{
     	  			if(t>(y*2))
     	  			break;
     	  			t=0; 
     	  		}
     	  	}
     	  	if(l!=x+1)
     	  	printf("-1\n");
     	  	else {
     	  		p++;
     		while(i<j)
     		{
                 i+=y*2+1;
                 p++;
                 if(i>=j)
                 break;
                 while(k[i]!=1)
                 i--;
     		}
     		printf("%d\n",p);
     	  }
     		}
     		}
     return 0;
}