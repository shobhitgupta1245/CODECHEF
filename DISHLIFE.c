#include <stdio.h>
#include <string.h>

/*
 success = 0, some
 success = 1, all
 success = -1, sad
 */
int inp[10000010];

int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		int n, k, p, count[1000010] = {0}, j=0, success = 1, zeroCount = 0;
		memset(inp, 0, sizeof(inp));
		scanf("%d%d", &n, &k);
		for (int i=0; i<n; i++) {
			scanf("%d", &p);
			for (int i1 = 0; i1 < p ; i1++) {
				scanf("%d", &inp[j++]);
				count[inp[j-1]]++;
				//printf("inp[%d]= %d\n", j-1, inp[j-1]);
			}
			inp[j] = 0;
			j++;
		}

		for (int i = 1; i <= k; ++i)
		{
			//printf("%d ", count[i]);
			if (!count[i]) {
				success = -1;
				break;
			}
		}

		if (success == 1) {
			for (int i = 0; i < j; ++i)
			{
				if (!inp[i]) {
					if (zeroCount == 0) {
						success = 0;
						break;
					}
					zeroCount = 0;
				} else if (!zeroCount){
					if (count[inp[i]] == 1) {
						zeroCount = 1;
					}
				}
			}
		}

		if (success == 0) {
			printf("some");
		} else if (success == 1) {
			printf("all");
		} else {
			printf("sad");
		}
		if (t) {
			printf("\n");
		}
	}
	return 0;
}