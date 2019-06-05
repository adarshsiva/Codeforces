#include<stdio.h>
int main(){
int h,w,s=0,n;
scanf("%d%d%d",&h,&w,&n);
while(n>0){
h--;
w--;
s=s+2*(h+w);
h-=3;w-=3;
n--;
}
printf("%d",s);
return 0;
}