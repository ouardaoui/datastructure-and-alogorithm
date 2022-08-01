#include<stdio.h>

int gridTraver(int n,int m)
{
	if(n == 1 && m == 1)
	       return 1;
	else if(n == 0 || m == 0)
	       return 0;
	return (gridTraver(n - 1,m) + gridTraver(n,m - 1));
		
}

int main()
{
	int x = gridTraver(3,3);
	printf("%d\n",x);
}
