#include<stdio.h>

int main(int ac,char **av)
{
	int i = 0;
      	int hash[127] = {0};	
	if(ac == 1)
		printf("provide input\n");
	else
	{
	while(av[1][i])
		hash[av[1][i++]] += 1;
	}
	i = 0;
	while(i++ < 127)
		if(hash[i])
			printf("%c--------------------> %d\n",i,hash[i]);
}

