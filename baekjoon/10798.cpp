#include <stdio.h>
int main(){
	char input[6][16]={};
	for(int i=0;i<5;i++)
		scanf("%s", input[i]);
	for(int i=0;i<15;i++)
		for(int j=0;j<5;j++)
			if(input[j][i])
				printf("%c", input[j][i]);
	printf("\n");
	return 0;
}