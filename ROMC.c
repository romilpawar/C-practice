#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int nf,nc,TEMP=0;
void FSA(char ARR[][3],int l,char init,char input[],char fis[] )
{
	int j,i;
	if(input[l]!=0)
	{
	for(i=0;i<nc;i++)
	{
		if(ARR[i][0]==init&&ARR[i][1]==input[l])
		{
			FSA(ARR,l+1,ARR[i][2],input,fis);
		}
		if(ARR[i][0]==init&&ARR[i][1]=='$')
		{
			FSA(ARR,l,ARR[i][2],input,fis);
		}	
	}
	}
	else
	{
		for(j=0;j<nf;j++)
		{
			if(fis[j]==init)
			{
				printf("Final State:%c\n",init);
				TEMP=1;	
			}
		}
	}
}
int main()
{
	int n,i,l;
	char init,f[10],ARR[100][3],path[10];
	printf("number of states:\n");
	scanf("%d",&n);
	printf("initial state:\n");
	scanf("\n%c",&init);
	printf("final states:\n");
	scanf("%s",f);
	nf=strlen(f);
	printf("number of connections:\n");
	scanf("%d",&nc);
	printf("connections:\n");
	for(i=0;i<nc;i++)
	{
		scanf("\n%s",ARR[i]);	
	}
	printf("path:\n");
	scanf("%s",path);
	l=strlen(path);
	path[l]=0;
	FSA(ARR,0,init,path,f);
	if(TEMP==0)
	printf("NOT FOUND\n");
	else
	printf("FOUND\n");
	return 0;
}
