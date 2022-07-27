#include<stdio.h>
#include<stdlib.h>

void rec(char *a,int k)
{
	static int A[10] = {0};
	static char Res[10];
	int i; 

	if(a[k] =='\0')
	{
		printf("%s\n",Res);
	}
	else
	{
	for(i = 0;a[i] !='\0'; i++)
		{
			if(A[i] == 0)
			{
				Res[k] = a[i];
				A[i] = 1;
				rec(a,k+ 1);
				A[i] = 0;
			}
		}
	}
}

int  main(int ac,char **av)
{
	if(ac > 1)
		rec(av[1],0) ;
	else 
		return 0;
}
