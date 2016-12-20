#include <stdio.h>

struct ar
{
	int kg, m;
	int cnt;
};

int main(){
	int n;
	struct ar arr[51]={};
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d %d", &arr[i].kg, &arr[i].m);
		arr[i].cnt = 1;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(arr[i].kg > arr[j].kg && arr[i].m > arr[j].m)
				arr[j].cnt++;
		}
	}
	for(int i=0;i<n;i++){
		printf("%d ", arr[i].cnt);
	}
	return 0;
}