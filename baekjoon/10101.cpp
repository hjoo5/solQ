#include <stdio.h>
int main(){
	int a,b,c;
	scanf("%d%d%d", &a,&b,&c);
	if(a+b+c != 180){
		printf("Error\n");
		return 0;
	}
	else{
		if(a!=b && b!=c && a!=c){
			printf("Scalene\n");
			return 0;
		}
		else{
			if(a==b && b==c && a==c){
				printf("Equilateral\n");
				return 0;
			}
			else{
				printf("Isosceles\n");
				return 0;
			}
		}
	}
	return 0;
}