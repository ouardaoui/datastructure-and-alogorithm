#include<stdio.h>
#include<stdlib.h>

int *data(void);

int main()
{
	int i = 0;
	int arr[5];
	while(i < 5)
	{
		arr[i] = data()[i];
		printf("%d\n",arr[i]);
		i++;
	}
	free(data());
}
