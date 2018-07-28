#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

float measure (void) {

	// ���� ����
	int a, b, x, y, z, distance = 0, number = 0;
	float time = 0, result = 0, colA = 0, colB = 0, colAA = 0;
	// a�� b �� �Է�
	printf("\na�� b�� ��ǥ�� �Է��Ͻʽÿ�. : ");
	scanf_s("%d %d", &a, &b);
	// a�� b �� ���
	printf("\n(a : %d, b : %d)\n", a, b);
	// ���� A�� B, �ĸ��� �ӷ��� x, y, z �� �Է�
	printf("\n���� A�� �ӷ�, ���� B�� �ӷ�, �ĸ��� �ӷ��� �Է��Ͻʽÿ�. : ");
	scanf_s("%d %d %d", &x, &y, &z);
	// x, y, z �� ���
	printf("\n���� A�� �ӷ� : %d ���� B�� �ӷ� : %d �ĸ��� �ӷ� : %d\n", x, y, z);
	
	// ���� ���� ���

	distance = b - a;
	time = (float)distance / ((float)x + (float)y);
	
	colA = - (float)a / ((float)x - (float)z);
	colB = (float)b / ((float)y + (float)z);
	colAA = (float)distance - colB * ((float)x + (float)y) / ((float)x + (float)z);

	// ���ǽ� (����� ���� �Ÿ� �� ����)
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



	// ����� ���� �Ÿ� �� ���
	printf("\n\n- ��� -\n\n����� �� : %d\n", number);
	printf("\n�Ÿ� : %f\n", result);

	return 0;
}

int main (void) {
	// ���� ����
	int testcase, i;

	// �ɽ��ϴ�
	printf("\n�١ںи��� ������ ġ�̰� �浹�ϸ� �ĸ��� �����ٵ��ڡ�\n�١��ĸ��� ���� �Ÿ��� ���� �˷��� �ϴ� ���α׷��ڡ�\n");

	// �׽�Ʈ ���̽� �Է�
	printf("\n- �Է� -\n\n�׽�Ʈ ���̽��� ���� �Է��Ͻʽÿ�. : ");
	scanf_s("%d", &testcase);
	// �׽�Ʈ ���̽� ���
	printf("\n�׽�Ʈ ���̽� : %d\n", testcase);
	// �׽�Ʈ ���̽��� �� ��ŭ measure ���� ����
	for (i = 0; i < testcase; i++) {
		measure();
	}

	system("pause");
	return 0;
}