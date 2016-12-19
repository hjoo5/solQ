#include <stdio.h>
#include <queue>
using namespace std;
int main(){
	int n,i,ans;
	scanf("%d",&n);
	queue<int> q;
	for(i=0;i<n;i++)
		q.push(i+1);
	while(q.size()){
		ans = q.front();
		q.pop();
		q.push(q.front()),q.pop();
	}
	printf("%d",ans);
	return 0;
}
