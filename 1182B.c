#include<stdio.h>
#include<math.h>

int main()
{
    int w, h, i, j, a=0, cnt=0, c=0, d=0;
    scanf("%d %d", &h, &w);
    getchar();
    char str[h+1][w+1];
    for (i=0; i<h; i++)
        gets(str[i]);
    for (i=0; i<h; i++)
        for (j=0; j<w; j++)
            if ( str[i][j]=='*' )
                cnt++;
    if ( cnt==0 )
        a++;
    for (i=0; i<h; i++)
        for (j=0; j<w; j++)
            if ( str[i][j]=='*' && str[i+1][j]=='*' && str[i-1][j]=='*' && str[i][j+1]=='*' && str[i][j-1]=='*' )
                goto A;
    A:
        for ( c=i; c<h; c++)
        {
            if ( str[c][j]=='*')
                str[c][j]='.';
            else
                break;
        }
        for ( c=i-1; c>=0; c--)
        {
            if ( str[c][j]=='*')
                str[c][j]='.';
            else
                break;
        }
        for ( d=j+1; d<w; d++)
        {
            if ( str[i][d]=='*')
                str[i][d]='.';
            else
                break;
        }
        for ( d=j-1; d>=0; d--)
        {
            if ( str[i][d]=='*')
                str[i][d]='.';
            else
                break;
        }
    for (i=0; i<h; i++)
        for (j=0; j<w; j++)
            if ( str[i][j]=='*' )
                a++;
    if ( a==0 )
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}