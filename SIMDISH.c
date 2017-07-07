#include <stdio.h>
#include <string.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		int c=0;
		char a1[4][11], a2[4][11];
		scanf("%s%s%s%s",a1[0], a1[1], a1[2], a1[3]);
		scanf("%s%s%s%s",a2[0], a2[1], a2[2], a2[3]);

		for (int i=0; i<4; i++) {
			for (int j=0; j<4; j++) {
				if (!strcmp(a1[i], a2[j])) {
					c++;
					break;
				}
			}
			if (c == 2) {
				break;
			}
		}
		if (c == 2) {
			printf("similar");
		} else {
			printf("dissimilar");
		}

		if (t) {
			printf("\n");
		}
	}
	return 0;
}