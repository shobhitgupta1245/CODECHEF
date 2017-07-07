#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	int t, n;
	scanf("%d",&t);
	while(t--) {
		char inp[1010];
		int ans = 0, req = 1;
		scanf("%d\n", &n);
		scanf("%s",inp);
		for (int i = 0; i < n; ++i)
		{
			if (req && inp[i] == '0') {
				req = 0;
			} else if (!req && inp[i] == '1') {
				ans++;
			}
		}
		printf("%d", ans);
		if (t) {
			printf("\n");
		}
	}
	return 0;
}