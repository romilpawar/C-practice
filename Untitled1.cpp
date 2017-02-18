#include<stdio.h>
void main()
{
	char A[100],B[100];
	int i,j,n,m;
	int x=0,y=0;
	for(i=0;i<100;i++)
	{
		scanf("%c",&A[i]);
		x=x+1;
		if(A[i]='\n')
		{
			break;
		}
	}
	for(i=0;i<100;i++)
	{
		scanf("%c",&B[i]);
		y=y+1;
		if(B[i]='\n')
		{
			break;
		}
	}
	for(n=0;n<x-1;n++)
	{
		if(B[0]==A[i])
		{
			for(m=1;m<y-1;m++)
			{
				if(B[m]=A[m+n])
				printf("%d",n);
			}
		}
	}
	system("pause");
	
}
