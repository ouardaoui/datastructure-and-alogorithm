#include<stdio.h>

int canSum(int n,int *numbers,int len)
{
	if(n == 0) 
		return 1;
	if(n < 0)
		return 0;
	int i = 0;
	while(i < len)
	{
		if(canSum(n - numbers[i],numbers,len) == 1)
			return 1;
		i++;
	}
	return 0;

}	

int main()
{
	int numbers[3] = {3,5,11};
	int len = 3;
	int x = canSum(8,numbers,len);
	printf("%d\n",x);
}
