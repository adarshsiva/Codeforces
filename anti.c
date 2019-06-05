#include <stdio.h>
#include <string.h>
int palin(char *s,int len){
    for (int i = 0; i < len/2; ++i)
    {
        if(s[i]!=s[len-1-i])
            return len;
    }
    return 0;
}
int main() {
    char s[50];
    scanf("%s",s);
    int len = strlen(s),ans=0;
    while(len>=ans){
        ans = palin(s,len);
        len--;
    }
    printf("%d\n",ans );
    return 0;
}