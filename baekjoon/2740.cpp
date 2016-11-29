#include <stdio.h>
int main(){
	int A[101][101]={};
	int B[101][101]={};
	int ans[101][101]={};
	int N,M;
	scanf("%d%d", &N, &M);
	for(int i=0;i<N;i++)
		for(int j=0;j<M;j++)
			scanf("%d", &A[i][j]);
	int m,k;
	scanf("%d%d", &m, &k);
	for(int i=0;i<m;i++)
		for(int j=0;j<k;j++)
			scanf("%d", &B[i][j]);
	for(int x=0;x<N;x++){
		for(int y=0;y<k;y++){
			for(int l=0;l<m;l++)
				ans[x][y] += A[x][l]*B[l][y];
		}
	}
	for(int i=0;i<N;i++){
		for(int j=0;j<k;j++)
			printf("%d ", ans[i][j]);
		printf("\n");
	}
	return 0;
}