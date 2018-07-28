#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

float measure (void) {

	// 변수 지정
	int a, b, x, y, z, distance = 0, number = 0;
	float time = 0, result = 0, colA = 0, colB = 0, colAA = 0;
	// a와 b 값 입력
	printf("\na와 b의 좌표를 입력하십시오. : ");
	scanf_s("%d %d", &a, &b);
	// a와 b 값 출력
	printf("\n(a : %d, b : %d)\n", a, b);
	// 기차 A와 B, 파리의 속력인 x, y, z 값 입력
	printf("\n기차 A의 속력, 기차 B의 속력, 파리의 속력을 입력하십시오. : ");
	scanf_s("%d %d %d", &x, &y, &z);
	// x, y, z 값 출력
	printf("\n기차 A의 속력 : %d 기차 B의 속력 : %d 파리의 속력 : %d\n", x, y, z);
	
	// 계산용 변수 계산

	distance = b - a;
	time = (float)distance / ((float)x + (float)y);
	
	colA = - (float)a / ((float)x - (float)z);
	colB = (float)b / ((float)y + (float)z);
	colAA = (float)distance - colB * ((float)x + (float)y) / ((float)x + (float)z);

	// 조건식 (경우의 수와 거리 값 설정)
	if (x >= z && y<z && colA > colB) {
		number = 1;
		result = (colAA + colB) * (z - x) + time * x;
	}
	else if (colA < colB && x > z) {
		number = 1;
		result = colA * z + time * x - colA * x;
	}
	else if ((colA > colB || x <= z) && y >= z) {
		number = 2;
		result = colB * z + time * y - colB * y;
	}
	else if (colA == colB || x, y < z) {
		number = 3;
		result = time * z;
	}



	// 경우의 수와 거리 값 출력
	printf("\n\n- 결과 -\n\n경우의 수 : %d\n", number);
	printf("\n거리 : %f\n", result);

	return 0;
}

int main (void) {
	// 변수 지정
	int testcase, i;

	// 심심하다
	printf("\n☆★분명히 기차에 치이고 충돌하면 파리가 죽을텐데★☆\n☆★파리가 가는 거리를 굳이 알려고 하는 프로그램★☆\n");

	// 테스트 케이스 입력
	printf("\n- 입력 -\n\n테스트 케이스의 수를 입력하십시오. : ");
	scanf_s("%d", &testcase);
	// 테스트 케이스 출력
	printf("\n테스트 케이스 : %d\n", testcase);
	// 테스트 케이스의 수 만큼 measure 변수 실행
	for (i = 0; i < testcase; i++) {
		measure();
	}

	system("pause");
	return 0;
}