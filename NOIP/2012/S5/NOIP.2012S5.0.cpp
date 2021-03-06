#include<cstdio>
using namespace std;
int left[4000000],right[4000000],min[4000000],lazytag[4000000],a[1000000];
void init(int l,int r,int p)// Initialize the segment tree
{
	left[p]=l;
	right[p]=r;
	lazytag[p]=0;
	if(l==r)
	{
		min[p]=a[l];
		return;
	}
	init(l,(l+r)/2,2*p+1);
	init((l+r)/2+1,r,2*p+2);
	min[p]=(min[2*p+1]<min[2*p+2])?min[2*p+1]:min[2*p+2];
}
void subtract(int d,int l,int r,int p)
{
	if(l==left[p] && r==right[p])// If the range is covered, set the lazytag
	{
		min[p]-=d;
		lazytag[p]+=d;
		return;
	}
	int mid=(left[p]+right[p])/2;
	if(lazytag[p]!=0)// Pass down the lazytag
	{
		subtract(lazytag[p],left[p],mid,2*p+1);
		subtract(lazytag[p],mid+1,right[p],2*p+2);
		lazytag[p]=0;
	}
	if(r<=mid)
		subtract(d,l,r,2*p+1);
	if(l>mid)
		subtract(d,l,r,2*p+2);
	if(l<=mid && r>mid)
	{
		subtract(d,l,mid,2*p+1);
		subtract(d,mid+1,r,2*p+2);
	}
	min[p]=(min[2*p+1]<min[2*p+2])?min[2*p+1]:min[2*p+2];
}
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;++i)
		scanf("%d",&a[i]);
	init(0,n-1,0);
	for(int i=0,d,s,t;i<m;++i)
	{
		scanf("%d%d%d",&d,&s,&t);
		subtract(d,s-1,t-1,0);
		if(min[0]<0)// if the classroom is not enough
		{
			printf("-1\n%d",i+1);
			return 0;
		}
	}
	putchar('0');
	return 0;
}
