#include <stdio.h>
int main(){
	int T;
	int i;
	scanf("%d", &T);
	while(T--){
		int sum=0;
		char name[31]={};
		scanf("%s", name);
		for(i=0; name[i]; i++)
			sum += name[i] - 'a';
		printf("%d\n", sum);
	}
	return 0;
}