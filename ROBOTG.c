#include <stdio.h>
#include <string.h>

#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))

char inp[1000010];

int main(int argc, char const *argv[])
{
	int t, n, k;
	scanf("%d",&t);

	while (t--) {
		int x=0,y=0;
		int minX = 0, maxX = 0, minY = 0, maxY = 0;
		scanf("%d%d",&n,&k);
		memset(inp, 0, 1000010);
		scanf("%s",inp);
		// printf("%s",inp);
		for (int i=0; i < strlen(inp); i++) {
			if (inp[i] == 'L') 
				x--;
			else if (inp[i] == 'R') 
				x++;
			else if (inp[i] == 'U') 
				y++;
			else 
				y--;

			minX = min(minX, x);
			maxX = max(maxX, x);
			minY = min(minY, y);
			maxY = max(maxY, y);
		}

		if (k > (maxX - minX) && n > (maxY - minY)) {
			printf("safe");
		} else {
			printf("unsafe");
		}
		if (t)	{
			printf("\n");
		}
	}	
	return 0;
}