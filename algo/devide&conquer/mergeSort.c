#include<stdio.h>

void merge(int *a,int *b,int len_a,int len_b,int *result){
	int i = 0 ;
	int j = 0 ; 
	int k = 0 ; 
	while(k < (len_a + len_b) && i < len_a && j < len_b)
	{
		if(a[i] <= b[j])
		{
			result[k] = a[i];
			i++;
		}
		else if(a[i] > b[j])
		{
			result[k] = b[j];
			j++;
		}
		k++;
	}
	while(i < len_a)
	{
		result[k] = a[i];
		i++;
		k++;
	}
	while(j < len_b)
	{
		result[k] = b[j];
		j++;
		k++;
	}
}

void mergeSort(int *a,int len)
{
	int i = 0;
	int j = 0;
	int m = len/2;
	int left[m],right[len - m];
	if(m > 0)
	{
	while(i < m)
	{
		left[i] = a[i];
		/*printf("%d",left[i]);*/
		i++;
	}

	/*printf("\n%ld--------------------------%ld\n",sizeof(left)/sizeof(int),sizeof(right)/sizeof(int));*/
	while(i < len)
	{
		right[j] = a[i];
		/*printf("%d",right[j]);*/
		j++;
		i++;
	}
	/*printf("\n");*/
	mergeSort(left,m);
	mergeSort(right,len-m);
	merge(left,right,m,len-m,a);
	}
}


int main(){
	int a[] = {1,10,4,2,8};
	int i = 0;
	int len = sizeof(a)/sizeof(int);
	mergeSort(a,len);
	while(i < len )
	{	
		printf("%d",a[i]);
		i++;
	}
}
