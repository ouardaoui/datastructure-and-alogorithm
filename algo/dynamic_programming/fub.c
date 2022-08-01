#include<stdio.h>

float fub(int n,float *memo)
{
	if (memo[n] != 0 ) return memo[n];
	if(n <= 2)
		return 1;
	memo[n] =  (fub(n - 1,memo) + fub(n - 2,memo));
	return memo[n];
}	

int main()
{
	int i = 0;
	int n = 49;
	float memo[50] = {0};
	float x =  fub(n,memo);
	printf("%f\n",x);
	while(i < n)
	{
		if (memo[i] != 0 )
			printf("%d\t %f\n",i,memo[i]);
		i++;
	}
}
