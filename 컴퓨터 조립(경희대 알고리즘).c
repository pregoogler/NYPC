#include <stdio.h>

int main(void) {
	int *CPU;
	int *MAIN;
	int *SSD;
	int *CARD;
	int *RAM;
	int *PW;
	int i, j, k, l, m, n, x, a, b, c, d, e, f;
	int money, result = 0, sum = 0, temp;

	scanf("%d", &a);
	CPU = (int*)malloc(sizeof(int) * a);
	for (x = 0; x < a; ++x) {
		scanf("%d", &temp);
		CPU[x] = temp;
	}

	scanf("%d", &b);
	MAIN = (int *)malloc(sizeof(int) * b);
	for (x = 0; x < b; ++x) {
		scanf("%d", &temp);
		MAIN[x] = temp;
	}

	scanf("%d", &c);
	SSD = (int *)malloc(sizeof(int) * c);
	for (x = 0; x< c; ++x) {
		scanf("%d", &temp);
		SSD[x] = temp;
	}

	scanf("%d", &d);
	CARD = (int *)malloc(sizeof(int) * d);
	for (x = 0; x < d; ++x) {
		scanf("%d", &temp);
		CARD[x] = temp;
	}

	scanf("%d", &e);
	RAM = (int *)malloc(sizeof(int) * e);
	for (x = 0; x < e; ++x) {
		scanf("%d", &temp);
		RAM[x] = temp;
	}

	scanf("%d", &f);
	PW = (int*)malloc(sizeof(int) * f);
	for (x = 0; x < f; ++x) {
		scanf("%d", &temp);
		PW[x] = temp;
	}

	scanf("%d", &money);

	for (i = 0; i < a; ++i) {
		sum = CPU[i];
		for (j = 0; j < b; ++j) {
			if (sum + MAIN[j] > money) {
				break;
			}
			sum += MAIN[j];
			for (k = 0; k < c; ++k) {
				if (sum + SSD[k]> money) {
					break;
				}
				sum += SSD[k];
				for (l = 0; l < d; ++l) {
					if (sum + CARD[l] > money) {
						break;
					}
					sum += CARD[l];
					for (m = 0; m < e; ++m) {
						if (sum + RAM[m]> money) {
							break;
						}
						sum += RAM[m];
						for (n = 0; n < f; ++n) {
							if (sum + PW[n] > money) {
								break;
							}
							if (sum + PW[n] <= money) {
								result++;
								break;
							}
						}
					}
				}
			}
		}
	}
	printf("%d", result);
	return 0;
}
//ÃÖÁ¾

