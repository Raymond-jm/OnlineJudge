#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//1368~1377 1481 1482 1523~1527 1550~1553 

//1359
#if 0
#include <string.h>
int is_prime(int n) {
	for (int i = 2; i < n; i++) {
		if (n % i == 0)
			return 0;
	}
	return 1;
}
int main() {
	char arr[31];
	gets(arr);

	if (is_prime(strlen(arr)) == 1)
		printf("1");
	else printf("0");

}
#endif
//1360 . 1361
#if 0
int is_prime(int n) {
	for (int i = 2; i < n; i++) {
		if (n % i == 0)
			return 0;
	}
	return 1;
	}
int main() {
	int n;
	int sum = 0;
	scanf("%d", &n);
	for (int i = 3; i <= n; i++) {
		if (is_prime(i) == 1)
			sum += i;
	}
	printf("%d", sum);
}
#endif
//1362
#if 0
int main() {
	char str[10];
	int check = 1;
	gets(str);
	for (int i = 0; i < strlen(str) / 2 + 1; i++) {
		if (str[i] == str[strlen(str)- 1 - i])
			continue;
		else {
			check = 0;
			break;
		}
	}
	printf("%d", check);
}
#endif
//1363
#if 0
int main() {
	char s[30];
	gets(s);
	int l = strlen(s);

	for (int i = 0; i < (l + 1) / 2; i++)
		printf("%c", s[i]);
	printf("hello");
	for (int i = (l + 1) / 2; i <= l-1; i++)
		printf("%c", s[i]);

}
#endif
//1364
#if 0
#include <stdlib.h>
int main() {

	int pm[10] = {0};
	int maxa,maxb,max;

	for (int i = 0; i < 10; i++)scanf("%d", &pm[i]);
	maxa = abs(pm[2] - pm[0]);
	maxb = abs(pm[3] - pm[1]);
	for (int i = 0; i < 4; i++) {
		for (int j = i + 1; j < 5; j++) {
			if (maxa < abs(pm[2 * i] - pm[2 * j])) maxa = abs(pm[2 * i] - pm[2 * j]);
			if (maxb < abs(pm[2 * i +1] - pm[2 * j + 1])) maxb = abs(pm[2 * i + 1] - pm[2 * j + 1]);
		}
	}
max = (maxa < maxb) ? maxb : maxa;
printf("%d", max);
}
#endif
//1368
#if 0
#include <string.h>
int main() {
	char p[20];
	int check = 1;
	gets(p);
	for (int i = 0; i < strlen(p) / 2; i++) {
		if (p[i] != p[strlen(p)-i-1])
			check = 0;
	}
	printf("%d", check);
}

#endif
//1372
#if 0
#include <string.h>
#include <ctype.h>
int is_prime(int n) {
	if (n == 0 || n == 1)
		return 0;
	else if (n == 2)
		return 1;
	for (int i = 2; i < n; i++) {
		if (n % i == 0)
			return 0;
	}
	return 1;
}

int main() {
	char s[30];
	gets(s);
	int low = 0;
	int up = 0;
	for (int i = 0; i < strlen(s); i++) {
		if (isupper(s[i]) == 1)
			up++;
		else low++;
	}
	if (is_prime(low * up) == 1)
		printf("1");
	else if (low * up == 2)
		printf("1");
	else printf("0");
}

#endif
#if 0
#include <string.h>
#include <ctype.h>

int main() {
	char a[30];
	gets(a);

	for (int i = 0; i < strlen(a); i++) {
		if (isupper(a[i]))
			a[i] = tolower(a[i]);
		else if (islower(a[i]))
			a[i] = toupper(a[i]);
	}
	puts(a);

}
#endif
//1374
#if 0
#include <stdlib.h>
int main() {
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		printf("%d", a * 222 + b * 222 + c * 222);
}
//1375
#endif
//1375
#if 0
int is_prime(int n) {
	for (int i = 2; i < n; i++) {
	if (n % i == 0)
		return 0;
	}
	return 1;
}
#include <stdio.h>
#include <stdlib.h> //malloc �Լ� 

	int* arr;//�迭 ����
	void swap(int* a, int* b);
	void print_arr(int c);
	void Permutation(int n, int r, int depth);

int main() {
		int n, r;

		//n�� r�� ������ �ΰ� �Է¹޴´�
		scanf("%d %d", &n, &r);

		//n�� �߿��� n���� �迭 �Ҵ�
		arr = (int*)malloc(n * sizeof(int));

		//n�迭 �� �Է�
		for (int i = 0; i < n; i++)
			arr[i] = i + 1;

		Permutation(n, r, 0);
		free(arr);//���� �Ҵ� ����
		return 0;
}
	void swap(int* a, int* b) {//���� ��ȯ���ִ� �Լ�
		int tmp;
		tmp = *a;
		*a = *b;
		*b = tmp;
	}
	void print_arr(int c) {//�迭�� ����Ʈ���ִ� �Լ�
		for (int i = 0; i < c; i++) {
			printf("%d", arr[i]);
		}
		printf("\n");
	}
	void Permutation(int n, int r, int depth) {
		if (r == depth) {
			print_arr(depth);
			return;
		}
		for (int i = depth; i < n; i++) {
			swap(&arr[i], &arr[depth]);
			Permutation(n, r, depth + 1);
			swap(&arr[i], &arr[depth]);
		}
	}
#endif
//1376
#if 0
#include <stdlib.h>
	int	main() {
		char arr[30];
		int index = 0;
		int i;
		gets(arr);
		for (i = 0; i < 30; i++) {
			if (arr[i] == 'b') {
				index = i;
				if (arr[i + 1] == 'u') {
					if (arr[i + 2] == 's') {
						printf("%d", index);
						break;
					}
				}
			}
			if(i == 29)
			printf("-1");
		}
	}
#endif
//1377
#if 0
#include <string.h>
#include <ctype.h>
	int main() {
		char alpha[50];
		gets(alpha);
		for(int i = 0; i < strlen(alpha); i++)
		alpha[i] = tolower(alpha[i]);

		puts(alpha);
	}
#endif
	//1269
#if 0
	int main() {
		char hello[50];
		gets(hello);
		int count = 0;
		for (int i = 0; i < 50; i++) {
			if (hello[i] == 'h') {
				if (hello[i + 1] == 'e') {
					if (hello[i + 2] == 'l') {
						if (hello[i + 3] == 'l') {
							if (hello[i + 4] == 'o')
								count++;
						}
					}
				}
			}
		}
		printf("%d", count);
	}
#endif
	//1376
#if 0
#include <string.h>
	int main() {

		char S[51];
		gets(S);
		int alpha[26] = { 0,};
		int max = 0;

		for (int i = 0; i < strlen(S); i++) {
			if ((S[i] >= 'A') && (S[i] <= 'Z'))
				alpha[S[i] - 65]++;
			else if ((S[i] >= 'a') && (S[i] <= 'z'))
				alpha[S[i] - 97]++;
		}
		for (int i = 0; i < 26; i++) {
			if (alpha[max] < alpha[i]) {
				max = i;
			}
		}
		
		printf("%c", max + 97);
	}
	
#endif
	//1375
#if 0
	int is_prime(int n) {
		for (int i = 2; i < n; i++) {
			if (n % i == 0)
				return 0;
		}
		return 1;
	}
	int main(){
		int count = 0;
		int arr[3];
		int temp;

		for (int i = 0; i < 3; i++)
			scanf("%d", &arr[i]);

		for (int k = 1; k < 3; k++) {
			for (int i = 0; i < 3; i++) {
				temp = arr[(i + k) % 3] * 100 + arr[(i + k * 2) % 3] * 10 + arr[(i + k * 3) % 3];
				if (is_prime(temp) == 1) count++;
			}
		}
		printf("%d", count);
	}
#endif
	//1551
#if 0
#include <stdlib.h>
	char* func(int n, int* arr, int m) {
		char* S = (char*)malloc(n);
		for (int i = 0; i < m; i++) {
			S[arr[i]] = 89;
		}
		for (int i = 0; i < n; i++) {
			if (S[i] == NULL) {
				S[i] = 55;
			}
		}
		return S;
	}
	int main(void) {
		char* p = 0;
		int arr[100] = { 0, };

		int n;
		int m;
		int i;

		scanf("%d %d", &n, &m);
		for (i = 0; i < m; i++) {
			scanf("%d", &arr[i]);
		}


		for (i = 0; i < m; i++) {
			printf("%d ", *((p = func(n, arr, m)) + arr[i]));
			printf("%d ", *((p = func(n, arr, m)) + arr[i] + 1));
		}

		free(p);

		return 0;
	}
#endif
	//1523
#if 0
#include <string.h>
	int main() {
		char s[20] = { 0 };
		char a[20] = { 0 };
		int result = 0;
		int i;
		int j = 0;
		int k = 0;
		gets(s);

		while (1) {
			for (i = 0; i < strlen(s); i++)
				a[i] = s[i];
			for (j = k; j < strlen(s); j++) {
				a[j] = a[j + 1];
			}

			for (int i = 0; i < strlen(s) / 2; i++) {
				if (a[i] != a[strlen(s) - i - 2])
					break;
				else if (i == strlen(s)/2-1) result += k;
			}
			k++;

				if (k == strlen(s))
					break;
	
		}
		printf("%d", result);
	}

#endif
	//1527
#if 0
	int main() {
		int count = 0;
		int n;
		scanf("%d", &n);
		while (n != 1) {
			if (n % 2 == 0) {
				n /= 2;
				count++;
			}
			else {
				n = n * 3 + 1;
				count++;
			}
		}
		printf("%d", count);
	}
#endif
	//1528
#if 0
	struct person {
		char name[10];
		int age;
	};
	int main(void) {

		struct person p;
		unsigned int age;

		char name[10];
		scanf("%s", name);

		strcpy(p.name, name);
		scanf("%d", &age);

		p.age = age;

		printf("%s ---> %d\n", p.name, p.age);

		return 0;
	}
#endif
	//1529
#if 0
	struct person {
		char name[10];
		unsigned int age;
	};
	struct person list[10];
	int i = 0;
	void addToInfo(struct person p) {
		list[i].age = p.age;
		strcpy(list[i].name, p.name);
		i++;
	}
	void showInfo(void) {
		for(int j =0; j < i; j++)
		printf("%s ---> %d\n", list[j].name, list[j].age);
	}

	int main(void) {

		// �ִ� ���� 9�� �̸��� ���̸� n�� (�ִ� n=10) �Է¹޾� 
		// ����ü�� ���� ��, ����ü �迭�� �����ϴ� �Լ� addToInfo()�� ȣ���Ѵ�.
		// �̸��� "end"�� �ԷµǸ�, 
		// showInfo() �Լ��� ȣ���Ͽ�, ����ü �迭�� ������ �Է¼����� ����Ѵ�.
		struct person p;
		char name[10];
		unsigned int age;


		while (1) {
			scanf("%s", name);
			if (strcmp(name, "end") == 0) {
				break;
			}
			scanf("%d", &age);
			strcpy(p.name, name);
			p.age = age;
			addToInfo(p);
		}

		// ����ü �迭�� ����� ������ �Է¼����� ����ϴ� �Լ�
		// ��������� "name ---> age"
		showInfo();

		return 0;

	}

#endif
#if 1 //1530
#include <string.h>
	struct person {
		char name[10];
		unsigned int age;
	};	
	struct person list[10];
	int n = 0;
	void addToInfo(struct person p) {
		list[n].age = p.age;
		strcpy(list[n].name, p.name);
		n++;
	}
	void showInfo_ascending_order() {
		for (int i = 0; i < n - 1; i++)
		{
			char temp[10];
			int index = i;
			for (int j = i + 1; j < n; j++)
			{
				if (strcmp(list[index].name, list[j].name) > 0)
					index = j;
			}
			strcpy(temp, list[i].name);
			strcpy(list[i].name, list[index].name);
			strcpy(list[index].name, temp);
		}
		for (int i = 0; i < n; i++) {
			printf("%s ---> %d\n", list[i].name, list[i].age);
		}
	}
	//-------------------------------------------------
// �Ʒ��δ� ��� ���浵 ���� ������.
	int main(void) {

		// �ִ� ���� 9�� �̸��� ���̸� n�� (�ִ� n=10) �Է¹޾� 
		// ����ü�� ���� ��, ����ü �迭�� �����ϴ� �Լ� addToInfo()�� ȣ���Ѵ�.
		// �̸��� "end"�� �ԷµǸ�, 
		// showInfo_ascening_order() �Լ��� ȣ���Ͽ�, ����ü �迭�� ������ ���ĺ��� ������������ ����Ѵ�.
		struct person p;
		char name[10];
		unsigned int age;


		while (1) {
			scanf("%s", name);
			if (strcmp(name, "end") == 0) {
				break;
			}
			scanf("%d", &age);
			strcpy(p.name, name);
			p.age = age;
			addToInfo(p);
		}

		// ����ü �迭�� ����� ������ ���ĺ��� ������������ ����ϴ� �Լ�
		// ��������� "name ---> age"
		showInfo_ascending_order();

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
#if 0
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif

#if 0
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif

#if 0
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif
#if 0
#endif
	//����ü Ư��
#if 0

	struct point {
		int x;
		int y;
	};
	struct rect {
		struct point p1;
		struct point p2;
	};
	int main() {
		struct rect r;
		int w, h, area, peri;

		printf("���� ����� ��ǥ�� �Է�: ");
		scanf("%d %d", &r.p1.x, &r.p1.y);
		printf("������ �ϴ��� ��ǥ�� �Է�: ");
		scanf("%d %d", &r.p2.x, &r.p2.y);

		w = r.p2.x - r.p1.x;
		h = r.p1.y - r.p2.y;

		area = w * h;
		peri = 2 * (w + h);
		printf("\n����: %d", area);
		printf("\n�ѷ�: %d", peri);

	}
#endif
	//����ü ��
#if 0
	struct point {
		int x;
		int y;
	};
	void compare_point(struct point p1, struct point p2) {
		if ((p1.x == p2.x) && (p1.y == p2.y))
			printf("p1 �� p2 �� �����ϴ�");
		else printf("p1 �� p2 �� �ٸ��ϴ�");
	}

	int main() {
		struct point p1;
		struct point p2;

		p1.x = 10;
		p1.y = 20;
		p2.x = 10;
		p2.y = 100;
		compare_point(p1, p2);
	}
#endif
	//����ü�� �迭
#if 0
#define SIZE 5
	struct student {
		int number;
		char name[20];//�ѱ��� �ѱ��ڴ� 2byte
		double grade;
	};
	int main() {
		struct student list[SIZE];
		int i;
		for (i = 0; i < SIZE; i++) {
			scanf("%d", &list[i].number);
			scanf("%s", &list[i].name);
			scanf("%lf", &list[i].grade);
		}
		for (i = 0; i < SIZE; i++) {
			printf("%d�� �л� �й�: %d\n�̸�: %s\n����: %lf\n", i + 1, list[i].number, list[i].name, list[i].grade);
		}
		return 0;
	}
#endif
	//���� �޸� malloc
#if 0
#include <stdlib.h>
	int main() {
		int* pi;
		pi = (int*)malloc(sizeof(int)); //malloc = �޸𸮸� �Ҵ��ض�. int���� ũ�⸸ŭ!
		if (pi == NULL)
		{
			printf("���� �޸� �Ҵ翡 �����߽��ϴ�.\n");
			exit(1);
		}
		*pi = 100;
		printf("%d\n", *pi);
		free(pi);
		return 0;
	}
#endif
//�����޸𸮷� ���ĺ� ����ϱ�
#if 0
#include <stdlib.h>
	int main() {
		char* pc = NULL;
		pc = (char*)malloc(sizeof(char) * 100);
		int i = 0;
		if (pc == NULL) {
			printf("�����޸� �Ҵ翡 �����Ͽ����ϴ�");
			exit(1);
		}
		for (i = 0; i < 26; i++) {
			*(pc + i) = 'a' + i;
			}
		*(pc + i) = 0;
		printf("%s", pc);
		free(pc);
		return 0;
	}
#endif

	//�����޸𸮷� ���� 5�� ó���ϱ�
#if 0
#include <stdlib.h>
	int main() {
		int* pi;
		pi = (int*)malloc(5 * sizeof(int));
		int i = 0;

		if (pi == NULL) {
			printf("�����޸� �Ҵ翡 �����Ͽ����ϴ�\n");
			exit(1);
		}
		for (i = 0; i < 5; i++) {
			*(pi + i) = i;
		}
		for(i = 0; i< 5; i++)
		printf("%d\n", *(pi + i));
		free(pi);
	}
#endif
	//����ü �����޸� �Ҵ�
#include <stdlib.h>
#if 0
	struct Book {
		int number;
		char title[80];
	};
	void showBook(struct Book* p, int n) {
		for(int i = 0; i < n; i++)
		printf("å��ȣ: %d\nå�̸�: %s\n", (p+i)->number, (p+i)->title);
	}
	int main() {
		
		struct Book *p;
		p = (struct Book*)malloc(2 * sizeof(struct Book));
		if (p == NULL)
		{
			printf("�����ҽ�");
			exit(1);
		}
		p->number = 1;
		strcpy(p->title, "C Programming");

		(p + 1)->number = 2;
		strcpy((p + 1)->title, "Data Structure");

		showBook(p, 2);
		free(p);

		return 0;
	}
#endif
	//2���� �迭
#if 0
	int main() {
		int i, x, y;
		int** pptr = (int**)malloc(sizeof(int*) * 8);
		for (i = 0; i < 8; i++) {
			*(pptr + i) = (int*)malloc(sizeof(int) * 6);
		}
		for (y = 0; y < 8; y++) {
			for (x = 0; x < 6; x++) {
				*(*(pptr + y) + x) = 6 * y + x;
			}
		}
		for (y = 0; y < 8; y++) {
			for (x = 0; x < 6; x++)
			{
				printf("%3d", *(*(pptr + y) + x));
			}
			printf("\n");
		}
		for (y = 0; y < 8; y++) {
			free(*(pptr + y));
		}
		return 0;

	}
#endif
