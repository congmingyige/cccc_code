#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;

const int maxn=1e4+10;

double s[maxn]; ///no need to initialize
int a[11];

int main()
{
	int n,m,q,i,j;
	/**
	我的建议是k改成q，避免有时变量i,j,k...的使用，导致重复
	**/
	scanf("%d%d%d",&n,&m,&q);
	for (i=1;i<=n;i++)
	{
        for (j=0;j<m;j++)
            scanf("%d",&a[j]);
		sort(a,a+m);  ///这是因为k小，所以才这样做，代码量较小
		for (j=1;j<m-1;j++)
			s[i]+=a[j];
		s[i]/=(m-2);
	}
	sort(s+1,s+n+1);
	for (i=n-q+1;i<=n;i++)
	{
		printf("%.3f",s[i]);
		if (i!=n)
			printf(" ");
	}
	return 0;
}
