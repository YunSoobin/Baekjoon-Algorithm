/*
<����>
���ڿ� S�� �Է¹��� �Ŀ�, �� ���ڸ� R�� �ݺ��� �� ���ڿ� P�� ���� �� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. ��, ù ��° ���ڸ� R�� �ݺ��ϰ�, �� ��° ���ڸ� R�� �ݺ��ϴ� ������ P�� ����� �ȴ�. S���� QR Code "alphanumeric" ���ڸ� ����ִ�.
QR Code "alphanumeric" ���ڴ� 0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ\$%*+-./: �̴�.

<�Է�>
ù° �ٿ� �׽�Ʈ ���̽��� ���� T(1 �� T �� 1,000)�� �־�����. �� �׽�Ʈ ���̽��� �ݺ� Ƚ�� R(1 �� R �� 8), ���ڿ� S�� �������� ���еǾ� �־�����. S�� ���̴� ��� 1�̸�, 20���ڸ� ���� �ʴ´�.

<���>
�� �׽�Ʈ ���̽��� ���� P�� ����Ѵ�.
*/

#include<stdio.h>
#include<string.h>

int main(void) {
	char T, R;
	char S[20], P[160];
	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		scanf("%d %s", &R, S);
		for (int j = 0; j < strlen(S); j++) {
			memset(P + sizeof(char)*j*R, S[j], sizeof(char)*R);
		}

		P[R*strlen(S)] = '\0';

		printf("%s\n", P);
	}

	return 0;
}