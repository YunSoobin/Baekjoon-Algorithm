/*
<����>
M�̻� N������ �Ҽ��� ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

<�Է�>
ù° �ٿ� �ڿ��� M�� N�� �� ĭ�� ���̿� �ΰ� �־�����. (1 �� M �� N �� 1,000,000) M�̻� N������ �Ҽ��� �ϳ� �̻� �ִ� �Է¸� �־�����.

<���>
�� �ٿ� �ϳ���, �����ϴ� ������� �Ҽ��� ����Ѵ�.

<Ǯ��>
�����佺�׳׽��� ü�� Ǯ�� ���� �迭�� ���� �����ϰ� �Ҽ��� �ƴ� ���� ����
*/

#include<stdio.h>

int main(void) {
	int M, N;
	int num[1000001] = { 0 };
	scanf("%d %d", &M, &N);

	if (M == 1)	M++;

	for (int i = M; i <= N; i++) {
		num[i] = i;
	}

	// �Ҽ��� �ƴ� �� ����
	for (int i = 2; i <= N; i++) {
		for (int j = 2; i * j <= N; j++) {
			num[i * j] = 0;
		}
	}
	
	for (int i = M; i <= N; i++) {
		if(num[i]!=0)	printf("%d\n",num[i]);
	}

	return 0;
}