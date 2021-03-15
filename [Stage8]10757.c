/*
<����>
�� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

<�Է�>
ù° �ٿ� A�� B�� �־�����. (0 < A,B < 10^10000)

<���>
ù° �ٿ� A+B�� ����Ѵ�.

<Ǯ��>
���� A,B�� ���� �ڷ��� ���� ������ �ʰ��ϹǷ� �迭�� �̿��� ���
*/

#include<stdio.h>
#include<string.h>

void reverse(char*a);
char* sum(char* A, char* B, int len, char* total);

int main(void) {
	char A[10001] = { 0 }, B[10001] = { 0 }, total[10002] = { 0 };
	int len;

	scanf("%s %s", A, B);

	// ���̰� �� ��(�迭)�� �������� ���� ���
	len = (strlen(A) >= strlen(B)) ? strlen(A) : strlen(B);

	// ���� ����� ���ϰ� �ϱ� ���� ��(�迭)�� ���� ����
	reverse(A);
	reverse(B);

	// ���� ���
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
		// ���� ������ ���ڸ� ���������� ��ȯ
		sum = A[i]-'0' + B[i]-'0' + up;
		while (sum < 0)	sum += '0';

		if (sum > 9)	up = 1;
		else up = 0;

		// ���ڸ� ���ڷ� ��ȯ
		total[i] = sum % 10 + '0';
	}

	// �ø����� ����� ���
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