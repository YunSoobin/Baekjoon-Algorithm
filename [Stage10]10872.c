/*
<����>
0���� ũ�ų� ���� ���� N�� �־�����. �̶�, N!�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

<�Է�>
ù° �ٿ� ���� N(0 �� N �� 12)�� �־�����.

<���>
ù° �ٿ� N!�� ����Ѵ�.
*/

#include<stdio.h>

int factorial(int N);

int main(void) {
	int N;
	scanf("%d", &N);

	printf("%d\n", factorial(N));

	return 0;
}

int factorial(int N) {
	if (N == 0)
		return 1;
	else {
		if(N == 1)
			return 1;

		return N * factorial(N - 1);
	}
}