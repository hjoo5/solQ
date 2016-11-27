#include <cstdio>
int main(){
	int a,b;
	int saa=0, sab=0;
	scanf("%d%d", &a,&b);
	for(int i=100;a>0;i/=10, a/=10)
		saa += (a%10)*i;
	// saa = (a % 10)*100;
	// a /= 10;
	// saa += (a%10)*10;
	// a /= 10;
	// saa += a%10;
	for(int i=100;b>0;i/=10, b/=10)
		sab += (b%10)*i;
	// sab = (b%10)*100;
	// b /= 10;
	// sab += (b%10)*10;
	// b /= 10;
	// sab += b%10;
	printf("%d\n", saa>sab?saa:sab);
	// if(saa > sab)
	// 	printf("%d\n", saa);
	// else
	// 	printf("%d\n", sab);
	return 0;
}