#include<stdio.h>
int main(int argc, char const *argv[])
{
	int t,n;
	long long a;
	scanf("%d",&t);
	while(t--) {
		long long sum = 0L, max = 0L, min = 0L, preMax = 0L, postMin = 0L, consSum = 0L;
		scanf("%d", &n);
		for (int i = 0; i < n; ++i)
		{
			scanf("%lld", &a);
			if (a > max) {
				preMax = max;
				max = a;
			} else if (a > preMax) {
				preMax = a;
			} 
			if (a < min || min == 0) {
				postMin = min;
				min = a;
			} else if (a < postMin || postMin == 0) {
				postMin = a;
			}
			sum+=a;
		}
		consSum = (min+max)*(max-min+1)/2;
		if (postMin - min > 1)
			printf("%lld", min);
		else if(max - preMax > 1) 
			printf("%lld", max);
		else printf("%lld", sum - consSum);
		
		if (t) 	printf("\n");	
	}
	return 0;
}