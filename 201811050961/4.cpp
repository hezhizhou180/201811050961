#include <stdio.h>
#include <string.h>
#include <assert.h>

void print_second(int n,int m,int c,char a[100][100])
{
    int i=0;
    int j=0;
	for(i=0;i<c;i++)
	{
		for(i=1; i<=m; i++)
		{
			for(j=1; j<n; j++)
			{
				if(a[j][i]=='X')
				{
					a[j-1][i]='X';
					a[j+1][i]='X';
					a[j][i-1]='X';
					a[j][i+1]='X';
				}
				
			}
		}
}
}
int main()
{   
    int n;
	int m;
	int c;
	char a[100][100];
	int i=0;
    int j=0;
	scanf("%d%d",&m,&n);
    for(i=1; i<=m; i++)
    {
        for(j=1; j<=n; j++)
        {
            scanf("%c", &a[i][j]);
        }
	}
	scanf("%d",&c);
    print_second(n,m,c,a);
	for (i = 1; i <= m; i++)
    {
        for ( j = 1; j <= n; j++)
        {
            printf("%c",&a[i][j]);
		}
	}
	return 0;
}