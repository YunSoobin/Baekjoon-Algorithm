/*
<����>
�Ѽ��� ���� (x, y)�� �ִ�. ���簢���� ���� �Ʒ� �������� (0, 0)�� �ְ�, ������ �� �������� (w, h)�� �ִ�. ���簢���� ��輱���� ���� �Ÿ��� �ּڰ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

<�Է�>
ù° �ٿ� x, y, w, h�� �־�����.

<���>
ù° �ٿ� ������ ������ ����Ѵ�.

<����>
1 �� w, h �� 1,000
1 �� x �� w-1
1 �� y �� h-1
x, y, w, h�� ����
*/

#include<stdio.h>

int main(void) {
	int x, y, w, h, width, height, min;
	scanf("%d %d %d %d", &x, &y, &w, &h);

	width = (x >= w-x) ? w-x : x;
	height = (y >= h-y) ? h-y : y;
	min = width >= height ? height : width;

	printf("%d", min);

	return 0;
}