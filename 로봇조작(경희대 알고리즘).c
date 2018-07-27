#include <stdio.h>

int main(void) {
	int W, H, X, Y, temp;
	int direction = 3;
	int sum = 0;
	scanf("%d %d %d %d", &W, &H, &X, &Y);

	//대각선 오른쪽으로 이동하는 횟수 설정
	if (X >= Y)
		temp = X / 3;
	else
		temp = Y / 3;
	sum += temp * 8; //대각선으로 3번 움직일 때마다 8번 명령을 내림

	if (temp % 3 == 0)
		direction = 3; //3의 배수만큼 대각선으로 움직인다면 오른쪽 본다
	else if (temp % 3 == 1)
		direction = 2; //위쪽 본다
	else if (temp % 3 == 2) {
		direction = 0; //아래쪽 본다
	}

	if (X > Y) {    //만약 X만큼 가야되는게 Y만큼 가야되는 것보다 크면 X방향으로 이동해야함
		if (direction == 3) {   //만약 오른쪽을 보고 있다면
			temp = X - Y;
			if (temp % 2 == 1)
				sum += (temp / 2) * 2 + 1;
			else if (temp % 2 == 0)
				sum += (temp / 2) * 2;
		}
		else if (direction == 2) { //만약 위쪽을 보고 있다면
			temp = X - Y;
			if (temp % 2 == 1)
				sum += 1 + (((temp - 1) / 2) * 4);
			else if (temp % 2 == 0) {
				sum += 1 + (((temp - 1) / 2) * 4) - 3;
			}
		}
		else if (direction == 0) //아래쪽을 보고 있다면
			temp = X - Y;
		if (temp % 2 == 0)
			sum += (temp / 2) * 4;
		else if (temp % 2 == 1)
			sum += (temp / 2) * 4 + 3;
	}
	else if (X < Y) {  //만약 Y만큼가야되는게 더 크면 Y방향으로 이동해야함

	}
}