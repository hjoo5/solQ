#include <stdio.h>
int main(){
	int T;
	int n;
	char type;
	char in[501]={};
	int in2[501]={};
	scanf("%d", &T);
	for(int i=0;i<T;i++){
		scanf("%d %c", &n, &type);
		if(type == 'C'){
			for(int j=0;j<n;j++)
				scanf(" %c", &in[j]);
			for(int k=0;k<n;k++)
				printf("%d ", in[k]-'A'+1);
			printf("\n");
		}
		else{
			for(int j=0;j<n;j++)
				scanf("%d", &in2[j]);
			for(int k=0;k<n;k++)
				printf("%c ", in2[k]+'A'-1);
			printf("\n");
		}
	}
	return 0;
}