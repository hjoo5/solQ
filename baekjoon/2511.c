#include <stdio.h>
int main(){
	int A[11]={}, B[11]={};
	int i;
	int sum_A = 0, sum_B = 0;
	char winner = 'D';
	for(i=0;i<10;i++){
		scanf("%d", &A[i]);
	}
	for(i=0;i<10;i++){
		scanf("%d", &B[i]);
		if(A[i]>B[i]){
			sum_A += 3;
			winner = 'A';
		}
		else if(A[i]<B[i]){
			sum_B += 3;
			winner = 'B';
		}
		else{
			sum_A++;
			sum_B++;
		}
	}
	printf("%d %d\n", sum_A, sum_B);
	printf("%c\n", sum_A > sum_B ? 'A' : sum_A < sum_B ? 'B' : winner);
	return 0;
}