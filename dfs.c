#include<stdio.h>
void dfs(int);
int G[10][10], visited[10], n;

void main()
{
   int i, j;
   printf("\n Enter number of vertices : ");
   scanf("%d", &n);
   printf("\n Enter the adjecency matrix of the graph : ");
   for(i=0; i<n; i++)
      for(j=0; j<n; j++)
         scanf("%d", &G[i][j]);
   for(i=0; i<n; i++)
      visited[i]=0;
   dfs(0);
}

void dfs(int i)
{
   int j;
   printf("\n %d \n",i+1);
   visited[i]=1;
   for(j=0; j<n; j++)
      if(!visited[j] && G[i][j]==1)
           dfs(j);
}
