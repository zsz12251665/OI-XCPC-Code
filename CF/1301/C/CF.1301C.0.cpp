#include<cstdio>
using namespace std;
int main()
{
	int t;
	for(scanf("%d",&t);t>0;--t)
	{
		int n,m;
		scanf("%d%d",&n,&m);
		long long ans=(long long)(n+1)*n/2;
		ans-=(long long)((n-m)/(m+1)+1)*((n-m)/(m+1)+2)/2*((n-m)%(m+1));// Subtract the 0s with the length ((n-m)/(m+1)+1)
		ans-=(long long)((n-m)/(m+1))*((n-m)/(m+1)+1)/2*(m+1-(n-m)%(m+1));// Subtract the 0s with the length (n-m)/(m+1)
		printf("%lld\n",ans);
	}
	return 0;
}
