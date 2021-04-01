/*
<����>
�ڿ��� M�� N�� �־��� �� M�̻� N������ �ڿ��� �� �Ҽ��� ���� ��� ��� �̵� �Ҽ��� �հ� �ּڰ��� ã�� ���α׷��� �ۼ��Ͻÿ�.
���� ��� M=60, N=100�� ��� 60�̻� 100������ �ڿ��� �� �Ҽ��� 61, 67, 71, 73, 79, 83, 89, 97 �� 8���� �����Ƿ�, �̵� �Ҽ��� ���� 620�̰�, �ּڰ��� 61�� �ȴ�.

<�Է�>
�Է��� ù° �ٿ� M��, ��° �ٿ� N�� �־�����.
M�� N�� 10,000������ �ڿ����̸�, M�� N���� �۰ų� ����.

<���>
M�̻� N������ �ڿ��� �� �Ҽ��� ���� ��� ã�� ù° �ٿ� �� ����, ��° �ٿ� �� �� �ּڰ��� ����Ѵ�.
��, M�̻� N������ �ڿ��� �� �Ҽ��� ���� ���� ù° �ٿ� -1�� ����Ѵ�.
*/

#include<stdio.h>

int main(void) {
	int M, N, sum, min, check_none;

	scanf("%d %d", &M, &N);
	printf("%d", N);
	if (M == 1) {
		sum -= 1;
	}

	min = N;

	for (int i = M; i <= N; i++) {
		sum += i;
		check_none += i;
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				// �Ҽ��� �ƴ� ���
				sum -= i;
				break;
			}
		}
		if (M < min) {
			min = M;
		}
	}

	if (check_none == sum) {
		// �Ҽ��� ���� ���
		printf("-1");
	}else {
		printf("%d\n%d", sum, min);
	}

	return 0;
}