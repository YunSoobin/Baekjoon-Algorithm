/*
<����>
� �ڿ��� N�� ���� ��, �� �ڿ��� N�� �������� N�� N�� �̷�� �� �ڸ����� ���� �ǹ��Ѵ�. � �ڿ��� M�� �������� N�� ���, M�� N�� �����ڶ� �Ѵ�. ���� ���, 245�� �������� 256(=245+2+4+5)�� �ȴ�. ���� 245�� 256�� �����ڰ� �ȴ�. ����, � �ڿ����� ��쿡�� �����ڰ� ���� ���� �ִ�. �ݴ��, �����ڰ� ���� ���� �ڿ����� ���� �� �ִ�.
�ڿ��� N�� �־����� ��, N�� ���� ���� �����ڸ� ���س��� ���α׷��� �ۼ��Ͻÿ�.

<�Է�>
ù° �ٿ� �ڿ��� N(1 �� N �� 1,000,000)�� �־�����.

<���>
ù° �ٿ� ���� ����Ѵ�. �����ڰ� ���� ��쿡�� 0�� ����Ѵ�.
*/

#include<stdio.h>

int findOrigin(int N);

int main(void) {
	int N;
	scanf("%d", &N);

	printf("%d\n", findOrigin(N));

	return 0;
}

int findOrigin(int N) {
	int origin, sum, tmp;
	for (origin = 1; origin < N; origin++) {	// ������(sum)�� ������(N)���� �׻� ũ��.
		sum = origin;
		tmp = origin;
		while (origin) {
			sum += (origin % 10); 
			origin /= 10;
		}
		if (sum == N)	return tmp;	
		origin = tmp;
	}

	return 0;
}