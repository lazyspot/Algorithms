#include <stdio.h>
#include <stdlib.h>

int main()
{
	int t, i, n;
	scanf("%d",&t);
	while(t--) {
		scanf("%d",&n);
		if((n/2)&1) {
			printf("NO\n");
			continue;
		}
		printf("YES\n");
		for(i=2; i<=n; i+=2) {
			printf("%d ",i);
		}
		for(int i=1; i<n-1; i+=2) {
			printf("%d ",i);
		}
		printf("%d\n",n+n/2-1);
	}
	return 0;
}
