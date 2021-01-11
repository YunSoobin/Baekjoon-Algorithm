/*
<문제>
아래 예제와 같이 개를 출력하시오.

<입력>
없음

<출력>
|\_/|
|q p|   /}
( 0 )"""\
|"^"`    |
||_/=\\__|

 <풀이>
 역슬래쉬 출력 : printf("\\");
 따옴표 출력 : printf("\'");
 쌍따옴표 출력 : printf("\"");
*/

#include<stdio.h>

int main(void) {
	printf("|\\_/|\n");
	printf("|q p|   /}\n");
	printf("( 0 )\"\"\"\\\n");
	printf("|\"^\"\`    |\n");
	printf("||_/=\\\\__|");

	return 0;
}