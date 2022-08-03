#include<stdio.h>

float gridTraver(int n,int m,float *memo)
{
	int key ;
	if(m < 10)
		key = n * 10 + m;
	else 
		key = n * 100 + m; 
	if(memo[key] != 0) 
		return memo[key];
	if(n == 1 && m == 1)
	       return 1;
	if(n == 0 || m == 0)
	       return 0;
	memo[key] =  (gridTraver(n - 1,m,memo) + gridTraver(n,m - 1,memo));
	return memo[key];
		
}

int main()
{
	float m[1000000] = {0};
	float x = gridTraver(18,18,m);
	printf("%f\n",x);
	int i = 0;
	while(i < 10000)
	{
		if(m[i] != 0)
		{
			printf("%d\t%f\n",i,m[i]);
		}
		i++;
	}
}
