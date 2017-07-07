#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int comparator(const void *a, const void *b) {
	return ( *(int*)a - *(int*)b );
}

int main(int argc, char const *argv[])
{
	int t, q, p, r, i;	
	const int MOD = 1000000007;
	scanf("%d", &t);
	while(t--) {
		long long sumB=0LL;

		scanf("%d%d%d", &p, &q, &r);

		int A[p], B[q], C[r];
		for(i=0; i<p; i++) {
			scanf("%d", &A[i]);
		}
		qsort(A, p, sizeof(int), comparator);

		for(i=0; i<q; i++) {
			scanf("%d", &B[i]);
		}
		qsort(B, q, sizeof(int), comparator);

		for(i=0; i<r; i++) {
			scanf("%d", &C[i]);
		}
		qsort(C, r, sizeof(int), comparator);
		// Find idx in A & C 
		for (i = 0; i < q; ++i)
		{
			long long sumA=0LL, sumC=0LL;
			int j=0, k=0, exitJ=0, exitK=0;
			// printf("%d %d %d %d %d\n", p, r, A[j], B[i], C[k]);
			while((j<p || k<r) && (A[j] <= B[i] || C[k] <= B[i])) {
				if (j<p && A[j] <= B[i]) {
					sumA=(sumA + A[j]%MOD )%MOD;
					j++;
				} else {
					exitJ=1;
				}
				if (k<r && C[k] <= B[i]) {
					sumC=(sumC + C[k]%MOD )%MOD;
					k++;
				} else {
					exitK=1;
				}
				if (exitK && exitJ) {
					break;
				}
				// printf("inside loop\n");
			}
			// printf("%lld %lld\n", sumA, sumC);
			if (j >0 && k > 0) {
				sumB = (sumB + (((((j%MOD)*(k%MOD))%MOD)*((B[i]%MOD)*(B[i]%MOD))%MOD)%MOD + (((B[i]%MOD)*(((sumA * k)%MOD + (sumC * j)%MOD)%MOD))%MOD + ((sumA)*(sumC))%MOD)%MOD)%MOD)%MOD;
			} 

		}

		printf("%lld", sumB);
		if (t) {
			printf("\n");
		}

	}
	return 0;
}
