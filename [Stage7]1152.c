/*
<����>
���� ��ҹ��ڿ� ���⸸���� �̷���� ���ڿ��� �־�����. �� ���ڿ����� �� ���� �ܾ ������? �̸� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. ��, �� �ܾ ���� �� �����ϸ� ������ Ƚ����ŭ ��� ����� �Ѵ�.

<�Է�>
ù �ٿ� ���� ��ҹ��ڿ� ����� �̷���� ���ڿ��� �־�����. �� ���ڿ��� ���̴� 1,000,000�� ���� �ʴ´�. �ܾ�� ���� �� ���� ���еǸ�, ������ �����ؼ� ������ ���� ����. ���� ���ڿ��� �հ� �ڿ��� ������ ���� ���� �ִ�.

<���>
ù° �ٿ� �ܾ��� ������ ����Ѵ�.

<Ǯ��>
����� �ܾ �����ϵ�, ���ڿ��� ��, �ڿ� ������ �ִ� ��� ���� ����
���ڿ��� ���鸸 �ԷµǴ� ���, �ܾ��� ������ 0
*/

#include<stdio.h>
#include<string.h>

void RemoveEndSpaces(char * arry);
void RemoveFrontSpaces(char * arry, int num);

int main(void) {
	char arry[1000000];
	int num = 0, len, j=0;

	scanf("%[^\n]s", arry);
	len = strlen(arry);
	RemoveEndSpaces(arry);
	RemoveFrontSpaces(arry, num);

	for (int i = 0; i <len; i++)	if (arry[i] == ' ') num++;
	if (arry[j] == '\0')	num--;
	
	printf("%d", num+1);

	return 0;
}

void RemoveEndSpaces(char * arry) {
	int i = 0;

	while (arry[i])	i++;
	i--;
	while (arry[i] == ' ') {
		arry[i] = '\0';
		i--;
	}
}

void RemoveFrontSpaces(char * arry, int num) {
	int i = 0, j=0;
	
	while (arry[i] == ' ')	i++;

	while (arry[i]) {
		arry[j] = arry[i];
		j++, i++;
	}
	arry[j] = '\0';
}