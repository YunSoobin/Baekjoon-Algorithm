/*
<문제>
영어 대소문자와 띄어쓰기만으로 이루어진 문자열이 주어진다. 이 문자열에는 몇 개의 단어가 있을까? 이를 구하는 프로그램을 작성하시오. 단, 한 단어가 여러 번 등장하면 등장한 횟수만큼 모두 세어야 한다.

<입력>
첫 줄에 영어 대소문자와 띄어쓰기로 이루어진 문자열이 주어진다. 이 문자열의 길이는 1,000,000을 넘지 않는다. 단어는 띄어쓰기 한 개로 구분되며, 공백이 연속해서 나오는 경우는 없다. 또한 문자열의 앞과 뒤에는 공백이 있을 수도 있다.

<출력>
첫째 줄에 단어의 개수를 출력한다.

<풀이>
띄어쓰기로 단어를 구분하되, 문자열의 앞, 뒤에 공백이 있는 경우 공백 제거
문자열에 공백만 입력되는 경우, 단어의 개수는 0
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