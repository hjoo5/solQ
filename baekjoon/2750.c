#include <stdio.h>
int main(){
	int n,i,num[1001]={0},j,temp;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &num[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n-1;j++){
			if(num[j]>num[j+1]){
				temp = num[j];
				num[j] = num[j+1];
				num[j+1] = temp;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d\n", num[i]);
	}
	return 0;
}
