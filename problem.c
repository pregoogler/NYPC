#define _CRT_SECURE_NO_WARNINGS



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//�ٶ��� ����
/*int main(void) {
	int N;     //���� ũ�� ����
	char **arr;//�� �迭
	int daram = 0; //�ٶ��� ����
	int player = 0; //��� ����
	int moreDaram = 0;

	int i, j;	//�迭 �ݺ��� ����

	//���� ũ�� �Է� �ޱ�
	scanf("%d", &N);

	//���� ũ�⸸ŭ �迭 ���� �Ҵ��ϱ�
	arr = (char**)malloc(sizeof(char*) * N);
	for (i = 0; i<N; i++) {
		arr[i] = (char*)malloc(sizeof(char) * N+1);
	}

	//�� �Է� �ޱ�
	for (i = 0; i < N; ++i) {
		scanf("%s", arr[i]);
	}

	//�ٶ���&��� ���� ����
	for (i = 0; i < N; ++i) {
		for (j = 0; j < N; ++j) {
			if (arr[i][j] == 'D' || arr[i][j] == 'd')
				daram++;
			else if (arr[i][j] == 'C' || arr[i][j] == 'c')
				player++;
		}
	}

	//�ٶ���� �÷��̾� �� �� �ô��� Ȯ�ο�
	printf("\n�ٶ��� �� : %d\n", daram);
	printf("�÷��̾� �� : %d\n\n", player);

	//�ʿ��� �ٶ��� �� ���� �˰���
	moreDaram = (player * 2) - daram; //�÷��̾��� 2�� - ���� �ִ� �ٶ��� ��

	//�ٶ��� ���� �˰���
	for (i = 0; i < N; ++i) {
		for (j = 0; j < N; ++j) {
			if (arr[i][j] == '.' && moreDaram > 0) {
				arr[i][j] = 'D';
				moreDaram--;
			}
			else
				continue;
		}
	}

	//�� �� �޾Ҵ��� Ȯ�ο�
	for (i = 0; i < N; ++i) {
		for (j = 0; j < N; ++j) {
			printf("%c", arr[i][j]);
		}
		printf("\n");
	}
	

	return 0;
}
*/

//���� ����
/*
int lightbalb(int direction, int W, int H, char ** arr, int start) {
	int x, y;
	//x y �ʱⰪ ����.
	if (direction == 0) {//��������ٸ�
		x = start;
		y = 0;
	}
	else if (direction == 1) {	//�����ʿ��� ��ٸ�
		x = W - 1;
		y = start;
	}
	else if (direction == 2) { // �Ʒ����� ��ٸ�
		x = start;
		y = H - 1;
	}
	else if (direction == 3) { // ���ʿ��� ��ٸ�
		x = 0;
		y = start;
	}


	while ((x >= 0 &&y >= 0) && (x < W && y < H) ) {
		if (arr[y][x] == '/') {
			if (direction % 2 == 0) {					//direction���� ¦�����
				direction++;							//1 ����
			}
			else if (direction % 2 == 1) {				//direction���� Ȧ�����
				direction--;							//1 ����
			}
		}
		else if (arr[y][x] == '\\') {
			direction = 3 - direction;
		}
		else if (arr[y][x] == 'O') {
			return 1;
		}
		else {}

		if (direction == 0) {
			y++;
		}
		else if (direction == 1) {
			x--;
		}
		else if (direction == 2) {
			y--;
		}
		else if (direction == 3) {
			x++;
		}
	}

	return 0;

}
int main(void) {
	int W, H; //�� ũ�� ���� ����,
	char **arr; //�� �迭
	int i;	//������ ����
	char direction[4] = { 'U', 'R', 'D', 'L' };

	int blink;

	//�� ũ�� �Է� �ޱ�
	scanf("%d %d", &W, &H);
	if (!(1 <= W && W <= 30) || !(1 <= H && H <= 30))
		return;


	//�� �Ҵ��ϱ�
	arr = (char**)malloc(sizeof(char*) * H);
	for (i = 0; i<H; i++) {
		arr[i] = (char*)malloc(sizeof(char) * W + 1);
	}

	//�� �Է� �ޱ�
	for (i = 0; i < H; ++i) {
		scanf("%s", arr[i]);
	}

	//��� ���⿡�� �� ����
	
	for (i = 0; i < 4; ++i) {
		if (i % 2 == 0) {		//upȤ�� down�̸�
			for (int j = 0; j < W; ++j) {	//���� ���� ũ�⸸ŭ ����
				blink = lightbalb(i, W, H, arr, j);
				if (blink) {
					printf("%c, %d", direction[i], j);
					return 0;
				}
					
			}
		}
		else {					//right Ȥ�� left�̸�
			for (int j = 0; j < H; ++j) {	//���� ���� ũ�⸸ŭ ����
				blink = lightbalb(i, W, H, arr, j);
				if (blink) {
					printf("%c, %d", direction[i],j);
					return 0;
				}
			}
		}
		
		
	}
	return 0;
}
*/

//�ĸ� ����