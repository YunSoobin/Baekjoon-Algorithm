/*
<문제>
상근이의 할머니는 아래 그림과 같이 오래된 다이얼 전화기를 사용한다.
전화를 걸고 싶은 번호가 있다면, 숫자를 하나를 누른 다음에 금속 핀이 있는 곳 까지 시계방향으로 돌려야 한다. 숫자를 하나 누르면 다이얼이 처음 위치로 돌아가고, 다음 숫자를 누르려면 다이얼을 처음 위치에서 다시 돌려야 한다.
숫자 1을 걸려면 총 2초가 필요하다. 1보다 큰 수를 거는데 걸리는 시간은 이보다 더 걸리며, 한 칸 옆에 있는 숫자를 걸기 위해선 1초씩 더 걸린다.
상근이의 할머니는 전화 번호를 각 숫자에 해당하는 문자로 외운다. 즉, 어떤 단어를 걸 때, 각 알파벳에 해당하는 숫자를 걸면 된다. 예를 들어, UNUCIC는 868242와 같다.
할머니가 외운 단어가 주어졌을 때, 이 전화를 걸기 위해서 필요한 최소 시간을 구하는 프로그램을 작성하시오.

<입력>
첫째 줄에 알파벳 대문자로 이루어진 단어가 주어진다. 단어의 길이는 2보다 크거나 같고, 15보다 작거나 같다.

<출력>
첫째 줄에 다이얼을 걸기 위해서 필요한 최소 시간을 출력한다.
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
