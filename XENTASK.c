#include<stdio.h>
int main() {
	int t, n, a;
	long long s1, s2, s3, s4;
	scanf("%d",&t);
	while(t--) {
		s1 = 0L;
		s2 = 0L;
		s3 = 0L;
		s4 = 0L;
		scanf("%d",&n);
		for (int i = 0; i < n; ++i)
		{
			scanf("%d",&a);
			if (i%2 == 0) {
 				s1+=a;
 			} else {
 				s2+=a;
 			}
		}
		for (int i = 0; i < n; ++i)
		{
			scanf("%d",&a);
			if (i%2 == 0) {
 				s3+=a;
 			} else {
 				s4+=a;
 			}
		}

		if ((s1 + s4) < (s2 + s3)) {
			printf("%lld", s1 + s4);
		} else {
			printf("%lld", s2 + s3);
		}
		if (t) {
			printf("\n");
		}
	}
	return 0;
}