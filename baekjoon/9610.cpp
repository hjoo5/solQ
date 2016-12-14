#include <stdio.h>
int main(){
	int n,i,x,y;
	int Q1=0,Q2=0,Q3=0,Q4=0,AXIS=0;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d%d", &x,&y);
		if(x>0&&y>0){
			Q1+=1;
		}
		else if(x>0&&y<0){
			Q4+=1;
		}
		else if(x<0&&y>0){
			Q2+=1;
		}
		else if(x<0&&y<0){
			Q3+=1;
		}
		else{
			AXIS+=1;
		}
	}
	printf("Q1: %d\nQ2: %d\nQ3: %d\nQ4: %d\nAXIS: %d", Q1,Q2,Q3,Q4,AXIS);
	return 0;
}
