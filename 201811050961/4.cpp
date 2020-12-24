#include "stdio.h"
void main(){
	int M,N,c;
	char a[100][100];
	int i,j;

	printf("ÇëÊäÈë³¤ºÍ¿í\n");
	scanf("%d%d",&N,&M);
	for(i=0;i<M;i++){
		for(j=0;j<N+1;j++){
			scanf("%c",&a[i][j]);
		}
	}
	scanf("%d",&c);
	for(i=0;i<c;i++)
	{
		for(i=0; i<M; i++)
		{
			for(j=0; j<N+1; j++)
			{
				if(a[i][j]=='X')
				{
					if(a[i-1][j]=='O'&&a[i-1-1][j]!='P'&&a[i-1+1][j]!='P'&&a[i-1][j-1]!='P'&&a[i-1][j+1]!='P')
						a[i-1][j]='X';
					if(a[i+1][j]=='O'&&a[i+1-1][j]!='P'&&a[i+1+1][j]!='P'&&a[i+1][j-1]!='P'&&a[i+1][j+1]!='P')
						a[i+1][j]='X';
					if(a[i][j-1]=='O'&&a[i-1][j-1]!='P'&&a[i+1][j-1]!='P'&&a[i][j-1-1]!='P'&&a[i][j-1+1]!='P')
						a[i][j-1]='X';
					if(a[i][j+1]=='O'&&a[i-1][j+1]!='P'&&a[i+1][j+1]!='P'&&a[i][j+1-1]!='P'&&a[i][j+1+1]!='P')
						a[i][j+1]='X';


				}
			}
		}
		

	}
	
	for(i=0;i<M;i++){
		for(j=0;j<N+1;j++){
			printf("%c",a[i][j]);
		}
	}
	printf("\n");
}
