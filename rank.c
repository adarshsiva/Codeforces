#include<stdio.h>
int main()
{int m1,m2,m3,m4,i,n,t1,total,r=1;
scanf("%d",&n);
 for(i=0;i<n;i++)
  {scanf("%d%d%d%d",&m1,&m2,&m3,&m4);
   total=m1+m2+m3+m4;
   if(i==0)
    t1=total;
    if(total>t1)
     r++;
     
  }
  printf("%d",r);
  return 0;
}