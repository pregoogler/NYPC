#define _CRT_SECURE_NO_WARNINGS



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//다람쥐 문제
/*int main(void) {
	int N;     //맵의 크기 변수
	char **arr;//맵 배열
	int daram = 0; //다람쥐 숫자
	int player = 0; //사람 숫자
	int moreDaram = 0;

	int i, j;	//배열 반복용 변수

	//맵의 크기 입력 받기
	scanf("%d", &N);

	//맵의 크기만큼 배열 동적 할당하기
	arr = (char**)malloc(sizeof(char*) * N);
	for (i = 0; i<N; i++) {
		arr[i] = (char*)malloc(sizeof(char) * N+1);
	}

	//맵 입력 받기
	for (i = 0; i < N; ++i) {
		scanf("%s", arr[i]);
	}

	//다람쥐&사람 숫자 세기
	for (i = 0; i < N; ++i) {
		for (j = 0; j < N; ++j) {
			if (arr[i][j] == 'D' || arr[i][j] == 'd')
				daram++;
			else if (arr[i][j] == 'C' || arr[i][j] == 'c')
				player++;
		}
	}

	//다람쥐랑 플레이어 수 잘 셌는지 확인용
	printf("\n다람쥐 수 : %d\n", daram);
	printf("플레이어 수 : %d\n\n", player);

	//필요한 다람쥐 수 세는 알고리즘
	moreDaram = (player * 2) - daram; //플레이어의 2배 - 현재 있는 다람쥐 수

	//다람쥐 놓는 알고리즘
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

	//맵 잘 받았는지 확인용
	for (i = 0; i < N; ++i) {
		for (j = 0; j < N; ++j) {
			printf("%c", arr[i][j]);
		}
		printf("\n");
	}
	

	return 0;
}
*/

//전구 문제
/*
int lightbalb(int direction, int W, int H, char ** arr, int start) {
	int x, y;
	//x y 초기값 설정.
	if (direction == 0) {//위에서쏜다면
		x = start;
		y = 0;
	}
	else if (direction == 1) {	//오른쪽에서 쏜다면
		x = W - 1;
		y = start;
	}
	else if (direction == 2) { // 아래에서 쏜다면
		x = start;
		y = H - 1;
	}
	else if (direction == 3) { // 왼쪽에서 쏜다면
		x = 0;
		y = start;
	}


	while ((x >= 0 &&y >= 0) && (x < W && y < H) ) {
		if (arr[y][x] == '/') {
			if (direction % 2 == 0) {					//direction값이 짝수라면
				direction++;							//1 증가
			}
			else if (direction % 2 == 1) {				//direction값이 홀수라면
				direction--;							//1 감소
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
	int W, H; //맵 크기 가로 세로,
	char **arr; //맵 배열
	int i;	//루프용 변수
	char direction[4] = { 'U', 'R', 'D', 'L' };

	int blink;

	//맵 크기 입력 받기
	scanf("%d %d", &W, &H);
	if (!(1 <= W && W <= 30) || !(1 <= H && H <= 30))
		return;


	//맵 할당하기
	arr = (char**)malloc(sizeof(char*) * H);
	for (i = 0; i<H; i++) {
		arr[i] = (char*)malloc(sizeof(char) * W + 1);
	}

	//맵 입력 받기
	for (i = 0; i < H; ++i) {
		scanf("%s", arr[i]);
	}

	//모든 방향에서 맵 돌기
	
	for (i = 0; i < 4; ++i) {
		if (i % 2 == 0) {		//up혹은 down이면
			for (int j = 0; j < W; ++j) {	//가로 방향 크기만큼 실행
				blink = lightbalb(i, W, H, arr, j);
				if (blink) {
					printf("%c, %d", direction[i], j);
					return 0;
				}
					
			}
		}
		else {					//right 혹은 left이면
			for (int j = 0; j < H; ++j) {	//세로 방향 크기만큼 실행
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

//파리 문제