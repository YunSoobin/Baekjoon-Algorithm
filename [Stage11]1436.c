/*
<����>
666�� ������ ��Ÿ���� ���ڶ�� �Ѵ�. ����, ���� ���Ϲ����� ��ȭ������ 666�� �� ������ ���� ����Ѵ�. ��ȭ���� ���� ������ ���� �̶�� �ø��� ��ȭ�� �����̴�. ���� ��ī���� ��Ÿ��� ���� ��, ��Ÿ���� 1, ��Ÿ���� 2, ��Ÿ���� 3, ��Ÿ���� 4, ��Ÿ���� 5, ��Ÿ���� 6�� ���� �̸��� ������, ���� �轼�� ������ ������ ���� ��, ������ ���� 1, ������ ���� 2, ������ ���� 3�� ���� ��ȭ ������ ������.
������ ���� �ڽ��� ���� ��ī���� ���� �轼�� �پ�Ѵ´ٴ� ���� �����ֱ� ���ؼ� ��ȭ ������ �� �ٸ��� ������ �ߴ�.
������ ���ڶ� � ���� 6�� ��� 3���̻� �������� ���� ���� ���Ѵ�. ���� ���� ������ ���ڴ� 666�̰�, �� �������� ū ���� 1666, 2666, 3666, .... �� ����.
����, ���� ù ��° ��ȭ�� ������ ������ ���� 666, �� ��° ��ȭ�� ������ ������ ���� 1666 �̷��� �̸��� ���� ���̴�. �Ϲ�ȭ�ؼ� �����ϸ�, N��° ��ȭ�� ������ ������ ���� (N��°�� ���� ������ ����) �� ����.
���� ���� N��° ��ȭ�� ���� �� ���ڸ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. ���� �� �ø�� �׻� ���ʴ�� �����, �ٸ� ��ȭ�� ������ �ʴ´�.

<�Է�>
ù° �ٿ� ���� N�� �־�����. N�� 10,000���� �۰ų� ���� �ڿ����̴�.

<���>
ù° �ٿ� N��° ��ȭ�� ���� �� ���� ����Ѵ�.

<Ǯ��>
�ּ� 666���� ���ڸ� 1�� �������� ��� ���ڸ� ���ʷ� �˻�
*/

#include<stdio.h>
#include<string.h>

int main(void) {
	int N, num=666, count=0;
	char stringNum[10000000];
	scanf("%d", &N);
	
	while (1) {
		sprintf(stringNum, "%d", num);
		if (strstr(stringNum, "666") != NULL)
			count++;
		if (count == N) {
			printf("%d\n", num);
			break;
		}
		num++;
	}
	
	return 0;
}