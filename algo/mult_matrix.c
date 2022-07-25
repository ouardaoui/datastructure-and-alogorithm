#include<stdio.h>

int main(){
	int n[2][2] = {{1,2},{3,4}};
	int m[2][2] = {{1,2},{1,4}};
	int c[2][2];
	int i,j,k;
	i = 0;
	while(i < 2)
	{
		j = 0;
		while(j < 2)
		{
			k = 0;
			c[i][j] = 0;
			while(k < 2)
			{
				c[i][j] += n[i][k]*m[k][j];
				k++;
			}
			printf("%d\n",c[i][j]);
			j++;
		}
		i++;
	}
}
