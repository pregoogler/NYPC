#include <stdio.h>

int main(void) {
	int W, H, X, Y, temp;
	int direction = 3;
	int sum = 0;
	scanf("%d %d %d %d", &W, &H, &X, &Y);

	//�밢�� ���������� �̵��ϴ� Ƚ�� ����
	if (X >= Y)
		temp = X / 3;
	else
		temp = Y / 3;
	sum += temp * 8; //�밢������ 3�� ������ ������ 8�� ����� ����

	if (temp % 3 == 0)
		direction = 3; //3�� �����ŭ �밢������ �����δٸ� ������ ����
	else if (temp % 3 == 1)
		direction = 2; //���� ����
	else if (temp % 3 == 2) {
		direction = 0; //�Ʒ��� ����
	}

	if (X > Y) {    //���� X��ŭ ���ߵǴ°� Y��ŭ ���ߵǴ� �ͺ��� ũ�� X�������� �̵��ؾ���
		if (direction == 3) {   //���� �������� ���� �ִٸ�
			temp = X - Y;
			if (temp % 2 == 1)
				sum += (temp / 2) * 2 + 1;
			else if (temp % 2 == 0)
				sum += (temp / 2) * 2;
		}
		else if (direction == 2) { //���� ������ ���� �ִٸ�
			temp = X - Y;
			if (temp % 2 == 1)
				sum += 1 + (((temp - 1) / 2) * 4);
			else if (temp % 2 == 0) {
				sum += 1 + (((temp - 1) / 2) * 4) - 3;
			}
		}
		else if (direction == 0) //�Ʒ����� ���� �ִٸ�
			temp = X - Y;
		if (temp % 2 == 0)
			sum += (temp / 2) * 4;
		else if (temp % 2 == 1)
			sum += (temp / 2) * 4 + 3;
	}
	else if (X < Y) {  //���� Y��ŭ���ߵǴ°� �� ũ�� Y�������� �̵��ؾ���

	}
}