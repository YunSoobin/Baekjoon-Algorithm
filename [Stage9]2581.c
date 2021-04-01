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
	int M, N, sum=0, min, check;

	scanf("%d %d", &M, &N);

	min = N;

	for (int i = M; i <= N; i++) {
		check = 1;
		if (i == 1) {
			continue;
		}
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				check = 0;	// �Ҽ��� �ƴ� ���
				break;
			}
		}
		if (check == 1) {	// �Ҽ��� ���
			sum += i;
			if (i < min)	min = i;
		}
	}
	
	if (sum==0) {
		// �Ҽ��� ���� ���
		printf("-1");
	}
	else {
		printf("%d\n%d", sum, min);
	}

	return 0;
}