#include<stdio.h>
#include<stdlib.h>

int is_valide(char *s)
{
        int i;
        int j = 0;
        char x;
        while(j < 9)
        {
                i  = j + 1;
                while(i < 10)
                {
                        x  =  s[i] +i - j;
                        if( s[j] +'0' == s[i]+ '0' + i - j || s[j]+ '0' == s[i] + '0' - i + j)   
                                return 0;
                        i++;
                }
                j++;
        }
        return 1;
}

void rec(char *a,int k)
{
	static int A[10] = {0};
	static char Res[10];
	int i;

	if(a[k] =='\0')
	{
		if(is_valide(Res) == 1)
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

int main(int ac,char **av)
{
	rec(av[1],0);
}
