#include<stdio.h>
#include<stdlib.h>

int main(int ac,char **av)
{
	int t[20] = {1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35,37,39};
	int  mid,low , high;

	mid = 19/2;
	low = 0;
	high = 19;
	if(ac == 2)
	{
	while(high >= low)
	{
		mid = (low + high) / 2;
		if(t[mid] < atoi(av[1]))
			low = mid + 1;
		else if (t[mid] > atoi(av[1]))
			high = mid - 1;
		else
		{
			printf("index is %d\t",mid);
			break;
		}
	}
	if(high < low)
		printf("index not found");
	}
	else
		printf("provide one argument");	
}	
