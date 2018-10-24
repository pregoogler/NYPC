#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

// card deck problem
int main(void) {
	int checker[5] = { 0, 0, 0, 0, 0 }, i, testcase, result = 0;
	char * card = malloc(sizeof(char) * 10);

	scanf("%d", &testcase);

	for (i = 0; i < testcase; ++i) {
		scanf("%s", card);
		if (!strcmp(card, "gold")) {
			checker[0] = 1;
		}
		else if (!strcmp(card, "mana")) {
			checker[1] = 1;
		}
		else if (!strcmp(card ,"light")) {
			checker[2] = 1;
		}
		else if (!strcmp(card ,"dark")) {
			checker[3] = 1;
		}
		else if (!strcmp(card ,"nature")) {
			checker[4] = 1;
		}
	}
	
	for (i = 0; i < 5; ++i) {
		result += checker[i];
	}

	

	if (result <= 3) {
		printf("vaild");
	}
	else if (result > 3) {
		printf("invaild");
	}


	return 0;
}