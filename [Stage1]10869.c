/*
<����>
�� �ڿ��� A�� B�� �־�����. �̶�, A+B, A-B, A*B, A/B(��), A%B(������)�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

<�Է�>
�� �ڿ��� A�� B�� �־�����. (1 �� A, B �� 10,000)

<���>
ù° �ٿ� A+B, ��° �ٿ� A-B, ��° �ٿ� A*B, ��° �ٿ� A/B, �ټ�° �ٿ� A%B�� ����Ѵ�.
*/

#include<stdio.h>

int main(void) {
	int A=0, B=0;
	scanf("%d %d",&A, &B);
	printf("%d\n",A+B);
	printf("%d\n",A-B);
	printf("%d\n",A*B);
	printf("%d\n",A/B);
	printf("%d\n",A%B);

	return 0;
}