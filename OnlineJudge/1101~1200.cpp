#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//20220511 프로그래밍스터디
//1121 3으로 끝나는..
#if 0
int main() {
	
	int n;
	scanf("%d", &n);
	for (int i = 1; i < n + 1; i++) {
		if (i % 10 == 3)
			printf("%d ", i);
	}
	return 0;
}
#endif
//1156 나비
#if 0
int main() {
	int a, b, x, y, t;//x, y 나비 위치 a,b 방크기 t 날라가야할 시간
	int v = 1;
	int h = 1;
	scanf("%d %d\n%d %d\n%d", &a, &b, &x, &y, &t);
	while (t != 0) {
		
		if (x == a && y == b || x == 0 && y == 0 || x == a && y == 0 || x == 0 && y == b){
		v *= -1;
		h *= -1;
		}
		else if (x == a || x == 0) {
			h *= -1;
		}
		else if (y == b || y == 0) {
			v *= -1;
		}
		
		
		x += h;
		y += v;
		t--;
	}
	printf("%d %d", x, y);

	return 0;
}


#endif
//1173 나비2
#if 0
int main() {
	int a, b, x, y; //x, y 나비 위치 a,b 방크기
	int cnt = 0; //cnt = 충돌 횟수
	int v = 1;
	int h = 1;
	scanf("%d %d\n%d %d", &a, &b, &x, &y);
	while (cnt != 4) {

		if (x == a && y == b || x == 0 && y == 0 || x == a && y == 0 || x == 0 && y == b) {
			v *= -1;
			h *= -1;
			cnt += 1;
		}
		else if (x == a || x == 0) {
			h *= -1;
			cnt += 1;
		}
		else if (y == b || y == 0) {
			v *= -1;
			cnt += 1;
		}
		if (cnt == 4)
			break;
		x += h;
		y += v;
	}
	printf("%d %d", x, y);

	return 0;
}
#endif
//1158 소머리국밥
#if 0
int main() {
	int N, a;
	int cnt = 0;
	int cow[80];
	scanf("%d", &N);
	for (int i = 0; i < N; i++){
		scanf("%d", &a);
		cow[i] = a;
	}

	for (int i = 1; i < N; i++){
		for (int j = 2; j < N + 1; j++) {
			while (cow[i] > cow[j])
				i++;
				cnt += 1;
		}
	}

	printf("%d", cnt);
	
	return 0; //구리 원자량 : 63.546
}
#endif
//1171 합과 홀수
#if 0
int add(int N) {
	if (N == 1)
		return 1;
	return N + add(N - 1);
}

int main(){
	int N;
	scanf("%d", &N);

	for (int i = 2; i < N + 1; i++) {
		if (add(i)%2 != 0)
			printf("%d ", add(i));
	}
	return 0;
}
#endif
//1064 기차 다리 건너기
#if 1
int main() {

	int N, W, a;
	scanf("%d\n%d\n", &W, &N);
	int car[100006]; //car[3]이 첫번째차 car[N+2] 이 마지막차
	car[0] = 0;
	car[1] = 0;
	car[2] = 0;
	car[N + 3] = 0;
	car[N + 4] = 0;
	car[N + 5] = 0;
	for (int i = 3; i < N + 3; i++) { //N = 6 i = 3~8
		scanf("%d", &a);
		car[i] = a;
	}
	for (int j = 0; j < N + 1; j++) {
		if (N == 1 && car[3] < W + 1) {
			printf("1");
			break;
		}
		else if (N == 1 && car[3] > W) {
			printf("0");
			break;
		}
		else if (N == 2 && car[3] + car[4] < W + 1) {
			printf("2");
			break;
		}
		else if ((N == 2 || N == 3) && car[3] + car[4] > W) {
			printf("1");
			break;
		}
		else if (N == 3 && car[3] + car[4] + car[5] < W + 1) {
			printf("3");
			break;
		}
		else if (N == 3 && car[3] + car[4] + car[5] > W) {
			printf("2");
			break;
		}

		else if (N > 3 && car[j] + car[j + 1] + car[j + 2] + car[j + 3] > W) {
			printf("%d", j);
			break;
		}
		else if (j == N)
			printf("%d", N);
	}
	return 0;
}
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif
