#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	int t;
	long long u, v;
	scanf("%d", &t);
	while(t--) {
		long long ans = 0LL;
		scanf("%lld%lld", &u, &v);
		ans = (u + v + 1)*(2 + u + v )/2 - v;
		printf("%lld\n", ans);
	}
	return 0;
}