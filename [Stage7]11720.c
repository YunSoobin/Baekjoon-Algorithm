/*
<����>
N���� ���ڰ� ���� ���� �����ִ�. �� ���ڸ� ��� ���ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

<�Է�>
ù° �ٿ� ������ ���� N (1 �� N �� 100)�� �־�����. ��° �ٿ� ���� N���� ������� �־�����.

<���>
�Է����� �־��� ���� N���� ���� ����Ѵ�.

<Ǯ��>
���ڿ��� �ϳ��� �Է¹޾� ���Ѵ�.
*/

#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int num, sum=0;
	scanf("%d", &num);
	int * arry = (int*)malloc(sizeof(int)*num);

	for (int i = 0; i < num; i++) {
		scanf("%1d", &arry[i]);
		sum += arry[i];
	}

	printf("%d", sum);

	free(arry);

	return 0;
}