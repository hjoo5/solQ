#include <stdio.h>
int main(){
	int T;
	int mat[101][101]={};
	scanf("%d", &T);
	while(T--){
		int n;
		int x, y;
		scanf("%d", &n);
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				scanf("%d", &mat[i][j]);
				if(mat[i][j]==0){
					x = i;
					y = j;
				}
			}
		}
		printf("%d %d\n", x+1 ,y+1);
	}
	return 0;
}