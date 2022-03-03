#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int i,j,k,M;
	int lotto[M][6];
	int*p;
	p=(int*) malloc (sizeof(int)*3);
	printf("Enter lotto set number :");
	scanf("%d", &M);
	srand(time(NULL));
	for(i=0; i<M; i++)
	{
	printf("set %d :", i+1);
		for(j=0; j<6; j++)
		{
			lotto[i][j]=rand()%45+1;
			for(k=0; k<j; k++)
			{
				if(lotto[i][j]==lotto[i][k])
					break;
			}
			if(j>k) j--;
			else printf("%3d", lotto[i][j]);
		}
		printf("\n");	
	}
	return 0;	
}

