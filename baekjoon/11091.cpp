#include <stdio.h>
int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		int k=0;
		int flag = 1;
		int check[27]={};
		char input[201]={};
		char empty[201]={};
		scanf("%s", input);
		// gets(input);
		for(int i=0;input[i];i++){
			if(input[i] >= 'A')
				input[i] = input[i]-'A'+'a';
			check[input[i]-'a'+1] = 1;
		}
		for(int i=1;i<27;i++){
			if(check[i]!=1){
				flag=0;
				empty[k] = i+'a'-1;
				k++;
			}
		}
		if(flag)
			printf("pangram\n");
		else{
			printf("missing\n");
			for(int i=0;empty[i];i++)
				printf("%c\n", empty[i]);
		}
	}
	return 0;
}