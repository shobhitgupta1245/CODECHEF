#include <stdio.h>
#include <string.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		char inp[100010];
		int countOfOne = 0, countOfIntZero = 0;
		long long ans = 0L;
		scanf("%s", inp);
		for (int i=0; i <= strlen(inp); i++) {
			if (i == strlen(inp) || inp[i] == '1') {
				if (countOfIntZero > 0) {
					ans += (countOfOne*(countOfIntZero+1));
				}
				countOfOne++;
				countOfIntZero = 0;
			}
			if (inp[i] == '0') {
				countOfIntZero++;
			}
		}
		printf("%lld", ans);
		if (t) {
			printf("\n");
		}
	}
	return 0;
}