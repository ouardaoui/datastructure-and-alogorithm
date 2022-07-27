#include<stdio.h>

int main()
{
	int  i = 0; 
	int  j ;
	int count = 0;
	int arr[] = {1,20,6,7,5,8,11,3};
	int len = sizeof(arr)/sizeof(int);
	int c = 0;
	while(i < len)
	{
		j = i + 1;
		while(j < len)
		{
			if(arr[i] > arr[j])
			{
				c++;
			}
			j++;
		}
		i++;
	}
	printf("%d\n",c);
}
