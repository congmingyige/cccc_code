#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;

///���װ�

const int maxn=1e3+10;
const int inf=1e9;
const double eps=1e-8;

char str[maxn],p[maxn][maxn];   ///ע���ڴ�����

int main()
{
    int n,m,i,j,g=0,len;
    scanf("%d",&n);
    fgets(str,maxn,stdin);
    fgets(str,maxn,stdin);

    len=strlen(str);
    len--;

    m=len/n+(len%n!=0);

    for (j=m;j>=1;j--)
        for (i=1;i<=n;i++)
        {
            if (g<len)
                p[i][j]=str[g];
            else
                p[i][j]=' ';
            g++;
        }
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=m;j++)
            printf("%c",p[i][j]);
        printf("\n");
    }
    return 0;
}
