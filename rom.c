#include<stdio.h>
void main()
{
	char A[100],B[100];
	int i,j,n,m;
	int x=0,y=0;
	for(i=0;i<100;i++)
	{
		scanf("%c",&A[i]);
		
		if(A[i]=='\n')
		{
			x=i;
			//printf("%d\n",x);
			break;
		}
	}
	fflush(stdin);
	for(i=0;i<100;i++)
	{
		scanf("%c",&B[i]);
		if(B[i]=='\n')
		{	
			y=i;
			//printf("%d\n",y);
			break;
		}
	}
	
	
	int stat;
	for(n=0;n<=x-y;n++)
	{
		stat=0;
		if(B[0]==A[n])
		{	
			for(m=1;m<y;m++)
			{
				if(B[m]==A[m+n])
					stat++;
			}
			if(stat==y-1)
				printf("%d",n+1);
		}
	}
	system("pause");
	
}
