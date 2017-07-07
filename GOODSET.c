#include <stdio.h>
#include <string.h>

void print(int result[], int n) {
	for (int i = 1; i <= n; ++i)
	{
		if (i ==n) {
			printf("%d\n", result[i]);
		} else {
			printf("%d ", result[i]);
		}
	}
}

int main(int argc, char const *argv[])
{
	int t, n, i, j,k=2, num=2, ack;
	int result[110]={0};
	result[0]=0;
	result[1]=1;
	result[2]=2;
	scanf("%d",&t);
	while(t--) {
		scanf("%d",&n);
		if (n <= k) {
			print(result, n);
		} else {
			while(1) {
				if (k>=n) {
					print(result, n);
					break;
				}
				num++;
				i=1;
				j=k;
				ack=0;
				while(i<j) {
					if (result[i] + result[j] == num) {
						ack=1;
						break;
					} else if (result[i] + result[j] > num) {
						j--;
					} else {
						i++;
					}
				}
				if (!ack) {
					k++;
					result[k]=num;
				}
			}
		}
	}
	return 0;
}