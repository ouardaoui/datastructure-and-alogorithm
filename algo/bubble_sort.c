#include<stdio.h>

int main(int ac,char **av)
{
	int i, j;
	int temp;

	int t[10] = {1,4,5,2,34,5,67,2,1,4};
	i = 0;
	while(i < 10)
	{
		j = 0; 
		while(j < 9 - i)
		{
			if(t[j]  > t[j+ 1])
			{
				temp = t[j];
				t[j] = t[j+ 1];
				t[j + 1] = temp;	
			}
			j++;
		}
		i++;
	}
	i = -1;
	while(++i < 10)
		printf("%d\t",t[i]);
}
