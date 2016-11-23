#include <stdio.h>
int main(){
	int N, num, temp = 0;
	int max = 0, maxtemp = 0;
	scanf("%d", &N);
	while(N--){
		scanf("%d", &num);
		if(temp < num && temp != 0)
			maxtemp += num - temp;
		else
			maxtemp = 0;
		if(max < maxtemp)
			max = maxtemp;
		temp = num;
	}
	printf("%d\n", max);
	return 0;
}