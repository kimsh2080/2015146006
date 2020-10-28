#include <stdio.h>
#pragma warning(disable:4996)
int main(void) {
	int n, i, last;
	int count = 0;
	double x[20];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%lf", &x[i]);
		last = x[i];
	}

	for ()

	// ¹è¿­ ½ºÄµ

	for (i = 0; i < n; i++) {
		if (last > x[i]) {
			count++;
		}
	}
	printf("%d", count);
	return 0;

	//update test
}