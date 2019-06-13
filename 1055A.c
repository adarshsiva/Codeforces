#include<stdio.h>

int main()

{
    int n,i,j=0,p,count=0,sum=0,count1=0,b[1000],a[1000];


    scanf("%d",&n);

    for(i=0;i<n;i++)
       {
          scanf("%d",&a[i]);
       }

    for(i=0;i<n;i++)
      {
         if(a[i]==1)
            count1++;

      }

 for(i=1;i<n;i++)
      {

         if(a[i]==1)
         {
             b[j]=a[i-1];
            j++;

         }

}
  b[j]=a[n-1];

  printf("%d\n",count1);

   for(j=0;j<count1;j++)
       printf("%d\n",b[j]);

       return 0;
}