#include<stdio.h>
int main()
{
int i,x,pos=0,l=0;
 scanf("%d",&x);
 char a[x],ch1[x];
 scanf("%s",&a);
 for(i=0;i<x;i++)
 {if(a[i]>a[i+1])
    {pos=i;break;}
 }

 for(i=0;i<x;i++)
 {if(i!=pos&&l==0)
     ch1[i]=a[i];
     else
     if(i==pos)
      l=1;
      else
      if(i!=pos&&l==1)
       ch1[i-1]=a[i];
 }
 for(i=0;i<x-1;i++)
  printf("%c",ch1[i]);
 return 0;
}