#include <stdio.h>

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

main()
{
	int A[10] = {0};
	int i, j, n = 10;

	for(int i=0; i<n; i++)
		scanf("%d", &A[i]);

	for(j=0; j<n; j++)
	{
		for(i=0; i<n-1; i++)
		{
			if(A[i]>A[i+1])
				swap(&A[i], &A[i+1]);
		}
	}


	for(int i=0; i<n; i++)
		printf("%d ", A[i]);

	printf("\n");
}
