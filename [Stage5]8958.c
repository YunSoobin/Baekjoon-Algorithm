/*
<����>
"OOXXOXXOOO"�� ���� OX������ ����� �ִ�. O�� ������ ���� ���̰�, X�� ������ Ʋ�� ���̴�. ������ ���� ��� �� ������ ������ �� �������� ���ӵ� O�� ������ �ȴ�. ���� ���, 10�� ������ ������ 3�� �ȴ�.
"OOXXOXXOOO"�� ������ 1+2+0+0+1+0+0+1+2+3 = 10���̴�.
OX������ ����� �־����� ��, ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

<�Է�>
ù° �ٿ� �׽�Ʈ ���̽��� ������ �־�����. �� �׽�Ʈ ���̽��� �� �ٷ� �̷���� �ְ�, ���̰� 0���� ũ�� 80���� ���� ���ڿ��� �־�����. ���ڿ��� O�� X������ �̷���� �ִ�.

<���>
�� �׽�Ʈ ���̽����� ������ ����Ѵ�.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void) {
	int num, score, len;
	char * testcase = (char*)malloc(sizeof(char) * 80);
	char * testscore = (char*)malloc(sizeof(char) * 80);
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		score = 0;
		scanf("%s", testcase);
		len = strlen(testcase);
		
		if (testcase[0] == 'O')	testscore[0] = 1;
		else if (testcase[0] == 'X') testscore[0] = 0;

		for (int j = 1; j < len; j++) {
			if (testcase[j - 1] == 'O') {
				if (testcase[j] == 'O') testscore[j] = testscore[j - 1] + 1;
				else if (testcase[j] == 'X') testscore[j] = 0;
			}
			else if (testcase[j - 1] == 'X') {
				if (testcase[j] == 'O') testscore[j] = 1;
				else if (testcase[j] == 'X') testscore[j] = 0;
			}
		}

		for (int k=0; k < len; k++) {
			score += testscore[k];
		}

		printf("%d\n", score);
	}

	free(testcase);
	free(testscore);

	return 0;
}