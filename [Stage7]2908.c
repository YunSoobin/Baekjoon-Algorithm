/*
<����>
������� ���� ����� ������ ���� ���Ѵ�. ����� ���ڸ� �дµ� ������ �ִ�. �̷��� ������ ���ϴ� ����� ���ؼ� ����̴� ���� ũ�⸦ ���ϴ� ������ ���־���. ����̴� �� �ڸ� �� �� ���� ĥ�ǿ� ���־���. �� ������ ũ�Ⱑ ū ���� ���غ���� �ߴ�.
����� ���� �ٸ� ����� �ٸ��� �Ųٷ� �д´�. ���� ���, 734�� 893�� ĥ�ǿ� �����ٸ�, ����� �� ���� 437�� 398�� �д´�. ����, ����� �� ���� ū ���� 437�� ū ����� ���� ���̴�.
�� ���� �־����� ��, ����� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

<�Է�>
ù° �ٿ� ����̰� ĥ�ǿ� ���� �� �� A�� B�� �־�����. �� ���� ���� ���� �� �ڸ� ���̸�, 0�� ���ԵǾ� ���� �ʴ�.

<���>
ù° �ٿ� ����� ����� ����Ѵ�.
*/

#include<stdio.h>

int find_max(int * newA, int * newB);

int main(void) {
	int A, B, max;
	int newA[4], newB[4];
	scanf("%d %d", &A, &B);

	for (int i = 0; i < 3; i++) {
		newA[i] = A % 10;
		newB[i] = B % 10;
		A /= 10;
		B /= 10;
	}

	max = find_max(newA, newB);
	printf("%d", max);

	return 0;
}

int find_max(int* newA, int* newB) {
	int compareA, compareB, max;

	compareA = 100 * newA[0] + 10 * newA[1] + newA[2];
	compareB = 100 * newB[0] + 10 * newB[1] + newB[2];

	max = (compareA >= compareB) ? compareA : compareB;

	return max;
}