#include <stdio.h>
#include <string.h>

char inp[1000010];
int countOfGap[1000010];

int main(int argc, char const *argv[])
{
	int t, n, k;
	scanf("%d",&t);

	while (t--) {
		int x =0 , y =0;
		scanf("%d%d",&n,&k);
		memset(inp, 0, 1000010);
		memset(countOfGap, 0, 1000010);
		scanf("%s",inp);
		// printf("%s",inp);
		for (int i=1; i<=n;i++) {
			if (inp[i] != inp[i-1]) {
				countOfGap[y-x+1]++;
				x = i;
				y = i;
				// printf("%d\n", x);
			} else {
				y++;
			}
		}
		// test to logic only
		for (int i=0;i<1000010;++i) {
			if (countOfGap[i]) {
				printf("%d -> %d\n", i, countOfGap[i] );
			}
		}

		int lV = 0, rV = 0, lI = 0, rI = 0;
		for (int i=1000010;i>0;--i) {
			if (countOfGap[i]) {
				rV = lV;
				rI = lI;
				lV = countOfGap[i];
				lI = i;
			}
		}
		if (!rV) {
			printf("1");
		} 
		if (t)	{
			printf("\n");
		}
	}	
	return 0;
}