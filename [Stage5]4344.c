/*
<����>
���л� ��������� 90%�� �ڽ��� �ݿ��� ����� �Ѵ´ٰ� �����Ѵ�. ����� �׵鿡�� ���� ������ �˷���� �Ѵ�.

<�Է�>
ù° �ٿ��� �׽�Ʈ ���̽��� ���� C�� �־�����.
��° �ٺ��� �� �׽�Ʈ ���̽����� �л��� �� N(1 �� N �� 1000, N�� ����)�� ù ���� �־�����, �̾ N���� ������ �־�����. ������ 0���� ũ�ų� ����, 100���� �۰ų� ���� �����̴�.

<���>
�� ���̽����� �� �پ� ����� �Ѵ� �л����� ������ �ݿø��Ͽ� �Ҽ��� ��° �ڸ����� ����Ѵ�.
*/

#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int C, N=0, sum, count;
	double avg;
	int * score = { 0 };
	scanf("%d", &C);
	for (int i = 0; i < C; i++) {
		scanf("%d", &N);
		score = (int*)malloc(sizeof(int)*N);
		sum = 0;
		count = 0;
		for (int j = 0; j < N; j++) {
			scanf("%d", &score[j]);
			sum += score[j];
		}
		avg = sum / N;

		for (int k = 0; k < N; k++) {
			if (score[k] > avg) count++;
		}

		printf("%.3f%%\n", (double)count / N * 100);
	}

	free(score);

	return 0;
}