#include <stdio.h>
int main(){
	int N, i;
	float score[1001]={};
	scanf("%d", &N);
	for(i=0;i<N;i++){
		scanf("%f", &score[i]);
	}
	float max = 0;
	for(i=0;i<N;i++){
		if(score[i]>max){
			max = score[i];
		}
	}
	float sum = 0;
	for(i=0;i<N;i++){
		score[i] = score[i] / max * 100;
		sum += score[i];
	}
	printf("%.2f\n", sum/N);
	return 0;
}