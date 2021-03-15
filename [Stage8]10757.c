/*
<문제>
두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

<입력>
첫째 줄에 A와 B가 주어진다. (0 < A,B < 10^10000)

<출력>
첫째 줄에 A+B를 출력한다.

<풀이>
정수 A,B의 값이 자료형 값의 범위를 초과하므로 배열을 이용해 계산
*/

#include<stdio.h>
#include<string.h>

void reverse(char*a);
char* sum(char* A, char* B, int len, char* total);

int main(void) {
	char A[10001] = { 0 }, B[10001] = { 0 }, total[10002] = { 0 };
	int len;

	scanf("%s %s", A, B);

	// 길이가 긴 수(배열)를 기준으로 덧셈 계산
	len = (strlen(A) >= strlen(B)) ? strlen(A) : strlen(B);

	// 덧셈 계산을 편하게 하기 위해 수(배열)를 역순 정렬
	reverse(A);
	reverse(B);

	// 덧셈 계산
	sum(A, B, len, total);
	
	reverse(total);

	printf("%s", total);
	
	return 0;
}

void reverse(char* a) {
	int len;
	len = strlen(a);
	char temp[10000];
	for (int i = 0; i < len / 2; i++) {
		temp[i] = a[i];
		a[i] = a[len - i-1];
		a[len-i-1] = temp[i];
	}
}

char* sum(char* A, char* B, int len, char* total) {
	int sum, up = 0;

	for (int i = 0; i < len; i++) {
		// 숫자 형태의 문자를 정숫값으로 변환
		sum = A[i]-'0' + B[i]-'0' + up;
		while (sum < 0)	sum += '0';

		if (sum > 9)	up = 1;
		else up = 0;

		// 숫자를 문자로 변환
		total[i] = sum % 10 + '0';
	}

	// 올림수가 생기는 경우
	if (up == 1) {
		total[len] = '1';
		total[len + 1] = '\0';
	}
	else
	{
		total[len] = '\0';
	}

	return total;
}