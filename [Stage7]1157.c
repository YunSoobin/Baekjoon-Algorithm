/*1157
<문제>
알파벳 대소문자로 된 단어가 주어지면, 이 단어에서 가장 많이 사용된 알파벳이 무엇인지 알아내는 프로그램을 작성하시오. 단, 대문자와 소문자를 구분하지 않는다.

<입력>
첫째 줄에 알파벳 대소문자로 이루어진 단어가 주어진다. 주어지는 단어의 길이는 1,000,000을 넘지 않는다.

<출력>
첫째 줄에 이 단어에서 가장 많이 사용된 알파벳을 대문자로 출력한다. 단, 가장 많이 사용된 알파벳이 여러 개 존재하는 경우에는 ?를 출력한다.

<풀이>
Overlap 함수의 반환값이 1일 경우 가장 많이 사용된 알파벳의 중복X, 0일 경우 중복O
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