/*1157
<����>
���ĺ� ��ҹ��ڷ� �� �ܾ �־�����, �� �ܾ�� ���� ���� ���� ���ĺ��� �������� �˾Ƴ��� ���α׷��� �ۼ��Ͻÿ�. ��, �빮�ڿ� �ҹ��ڸ� �������� �ʴ´�.

<�Է�>
ù° �ٿ� ���ĺ� ��ҹ��ڷ� �̷���� �ܾ �־�����. �־����� �ܾ��� ���̴� 1,000,000�� ���� �ʴ´�.

<���>
ù° �ٿ� �� �ܾ�� ���� ���� ���� ���ĺ��� �빮�ڷ� ����Ѵ�. ��, ���� ���� ���� ���ĺ��� ���� �� �����ϴ� ��쿡�� ?�� ����Ѵ�.

<Ǯ��>
Overlap �Լ��� ��ȯ���� 1�� ��� ���� ���� ���� ���ĺ��� �ߺ�X, 0�� ��� �ߺ�O
*/

#include<stdio.h>
#include<string.h>

int Overlap(int * num, int stand);

int main(void) {
	char word[1000000];
	int num[26] = { 0 };
	int len, i=0, j=0, stand=0, max=0, check;
	char alphabet;

	scanf("%s", word);
	len = strlen(word);
	
	while (word[i]) {
		for (alphabet = 'A'; alphabet <= 'Z';alphabet++) {
			if (word[i] == alphabet) num[alphabet-65]++;
		}
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++) {
			if (word[i] == alphabet) num[alphabet-97]++;
		}
		i++;
	}

	while(j<26) {
		if (num[j] > stand) {
			stand = num[j];
			max = j;
		}
		j++;
	}

	check = Overlap(num, stand);

	if (check == 1) {
		printf("%c", max+65);
	}else {
		printf("?");
	}

	return 0;
}

int Overlap(int * num, int stand) {
	for (int i = 0; i < 25; i++) {
		for (int j = i+1; j < 26; j++) {
			if (num[i] != 0 && num[j] != 0 && num[i] == num[j] && num[i]==stand)	return 0;
		}
	}
	return 1;
}