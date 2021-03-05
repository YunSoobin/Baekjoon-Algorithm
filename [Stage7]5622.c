/*
<����>
������� �ҸӴϴ� �Ʒ� �׸��� ���� ������ ���̾� ��ȭ�⸦ ����Ѵ�.
��ȭ�� �ɰ� ���� ��ȣ�� �ִٸ�, ���ڸ� �ϳ��� ���� ������ �ݼ� ���� �ִ� �� ���� �ð�������� ������ �Ѵ�. ���ڸ� �ϳ� ������ ���̾��� ó�� ��ġ�� ���ư���, ���� ���ڸ� �������� ���̾��� ó�� ��ġ���� �ٽ� ������ �Ѵ�.
���� 1�� �ɷ��� �� 2�ʰ� �ʿ��ϴ�. 1���� ū ���� �Ŵµ� �ɸ��� �ð��� �̺��� �� �ɸ���, �� ĭ ���� �ִ� ���ڸ� �ɱ� ���ؼ� 1�ʾ� �� �ɸ���.
������� �ҸӴϴ� ��ȭ ��ȣ�� �� ���ڿ� �ش��ϴ� ���ڷ� �ܿ��. ��, � �ܾ �� ��, �� ���ĺ��� �ش��ϴ� ���ڸ� �ɸ� �ȴ�. ���� ���, UNUCIC�� 868242�� ����.
�ҸӴϰ� �ܿ� �ܾ �־����� ��, �� ��ȭ�� �ɱ� ���ؼ� �ʿ��� �ּ� �ð��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

<�Է�>
ù° �ٿ� ���ĺ� �빮�ڷ� �̷���� �ܾ �־�����. �ܾ��� ���̴� 2���� ũ�ų� ����, 15���� �۰ų� ����.

<���>
ù° �ٿ� ���̾��� �ɱ� ���ؼ� �ʿ��� �ּ� �ð��� ����Ѵ�.
*/

#include<stdio.h>
#include<string.h>

int dial(char* word, int len );

int main(void) {
	char word[16];
	int len, sum=0;

	scanf("%s", word);
	len = strlen(word);
	
	sum=dial(word, len);
	printf("%d", sum);

	return 0;
}

int dial(char*word, int len) {
	int newword[16] = { 0 };
	int sum=0;

	for (int i = 0; i < len; i++) {
		if (word[i] == 'A' || word[i] == 'B' || word[i] == 'C')	  newword[i] = 2;
		else if (word[i] == 'D' || word[i] == 'E' || word[i] == 'F')	newword[i] = 3;
		else if (word[i] == 'G' || word[i] == 'H' || word[i] == 'I')	newword[i] = 4;
		else if (word[i] == 'J' || word[i] == 'K' || word[i] == 'L')	newword[i] = 5;
		else if (word[i] == 'M' || word[i] == 'N' || word[i] == 'O')	newword[i] = 6;
		else if (word[i] == 'P' || word[i] == 'Q' || word[i] == 'R' || word[i]=='S')	newword[i] = 7;
		else if (word[i] == 'T' || word[i] == 'U' || word[i] == 'V')	newword[i] = 8;
		else if (word[i] == 'W' || word[i] == 'X' || word[i] == 'Y' || word[i] == 'Z')	newword[i] = 9;
		else
		{
			word[i] = 0;
		}
	}

	for (int j = 0; j < len; j++) {
		if (newword[j] == 0) {
			sum += 10;
		}
		else {
			sum += (1 + newword[j]);
		}
	}

	return sum;
}
