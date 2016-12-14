#include <stdio.h>
int main(){
	int num[10][10]={};
	int i, j;
	int max = 0;
	int num_x, num_y;
	for(i=0;i<9;i++){
		for(j=0;j<9;j++){
			scanf("%d", &num[i][j]);
		}
	}
	for(i=0;i<9;i++){
		for(j=0;j<9;j++){
			if(num[i][j] > max){
				max = num[i][j];
				num_x = i+1;
				num_y = j+1;
			}
		}
	}
	printf("%d\n%d %d\n", max, num_x, num_y);
	return 0;
}

// #include <stdio.h>
// int main()
// {
// 	int i,j,n,m = 0,x,y;
// 	for(i=1;i<=9;i++){
// 		for(j=1;j<=9;j++){
// 			scanf("%d", &n);
// 			if(n>m){
// 				m = n;
// 				x = i;
// 				y = j;
// 			}
// 		}
// 	}
// 	printf("%d\n%d %d\n", m, x, y);
// 	return 0;
// }