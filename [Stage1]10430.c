/*
<����>
(A+B)%C�� ((A%C) + (B%C))%C �� ������?
(A��B)%C�� ((A%C) �� (B%C))%C �� ������?
�� �� A, B, C�� �־����� ��, ���� �� ���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

<�Է�>
ù° �ٿ� A, B, C�� ������� �־�����. (2 �� A, B, C �� 10000)

<���>
ù° �ٿ� (A+B)%C, ��° �ٿ� ((A%C) + (B%C))%C, ��° �ٿ� (A��B)%C, ��° �ٿ� ((A%C) �� (B%C))%C�� ����Ѵ�.
*/

#include<stdio.h>

int main(void) {
	int A=0, B=0, C=0;
	scanf("%d %d %d",&A, &B, &C);
	printf("%d\n", (A + B) % C);
	printf("%d\n", ((A%C) + (B%C)) % C);
	printf("%d\n", (A*B) % C);
	printf("%d\n", ((A%C)*(B%C)) % C);

	return 0;
}