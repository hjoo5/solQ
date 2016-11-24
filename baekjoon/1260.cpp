#include <stdio.h>
#include <queue>
using namespace std;
int n,m,v;
int map[1001][1001];
int check[1001];
int check2[1001];
queue<int> q;

void mydfs(int v){
	printf("%d ", v);
	check[v] = 1;
	for(int i=1;i<=n;i++){
		if(map[v][i] == 1 && !check[i]){
			check[i] = 1;
			mydfs(i);
		}
	}
}

void mybfs(int v){
	int x;
	q.push(v);
	check2[v]=1;
	while(!q.empty()){
		x = q.front();
		q.pop();
		printf("%d ", x);
		for(int i=1;i<=n;i++){
			if(map[x][i] && !check2[i]){
				q.push(i);
				check2[i] = 1;
			}
		}
	}
}

int main(){
	int a,b;
	scanf("%d%d%d", &n,&m,&v);
	for(int i=0;i<m;i++){
		scanf("%d%d", &a, &b);
		map[a][b]=1;
		map[b][a]=1;
	}
	mydfs(v);
	printf("\n");
	mybfs(v);
	printf("\n");
	return 0;
}