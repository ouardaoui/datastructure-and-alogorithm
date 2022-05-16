#include<stdio.h>

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return i;
	
}

void swap(char *a,char *b)
{
	char tmp; 
	tmp = *b;
	*b = *a;
	*a = tmp;
}

void rec(char *s,int l,int h)
{
	int i; 
	i = l;
	if(l == h)
		printf("%s\n",s);
	while(i<= h)
	{
		swap(&s[l] , &s[i]);
		rec(s,l+1,h);
		swap(&s[l],&s[i]);
		i++;
	}
}

int main(int ac,char **av)
{
	int len = ft_strlen(av[1]);
	if(ac > 1)
		rec(av[1],0,len -1);
}
