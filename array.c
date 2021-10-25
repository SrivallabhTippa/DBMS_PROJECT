#include <stdio.h>
int hello(int, int, int *);
int main()
{
	int n;
	scanf("%d",&n);
	int q;
	scanf("%d",&q);
	int queries[q][3];
	for(int i=0; i<q; i++)
		for(int j=0; j<3; j++)
			scanf("%d", &queries[i][j]);
	printf("%d", hello(n, q, (int *)queries));
	return 0;
}
int hello(int n, int q, int *a)
{
	int queries[q][3];
	int new[n+1];
	for(int i=1; i<=n; i++)
	{
		new[i] = 0;
	}
	for(int i=0; i<q; i++)
	{
		for(int j = queries[i][0]; j <= queries[i][1]; j++)
		{
			new[j] = new[j] + queries[i][2];
		}
	}
	int t = new[1];
	for(int i=1; i<=n; i++)
	{
		if(t<new[i])
		{
			t=new[i];
		}
	}
	return t;
}