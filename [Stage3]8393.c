/*
<����>
n�� �־����� ��, 1���� n���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

<�Է�>
ù° �ٿ� n (1 �� n �� 10,000)�� �־�����.

<���>
1���� n���� ���� ����Ѵ�.
*/

#include<stdio.h>

int main(void) {
	int n, sum = 0;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		sum = sum + i;
	}

	printf("%d", sum);

	return 0;
}