/*
<문제>
세 점이 주어졌을 때, 축에 평행한 직사각형을 만들기 위해서 필요한 네 번째 점을 찾는 프로그램을 작성하시오.

<입력>
세 점의 좌표가 한 줄에 하나씩 주어진다. 좌표는 1보다 크거나 같고, 1000보다 작거나 같은 정수이다.

<출력>
직사각형의 네 번째 점의 좌표를 출력한다.
*/

#include<stdio.h>

int main(void) {
	int x1, x2, x3, x4, y1, y2, y3, y4;

	scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
	
	if (x1 == x2) {
		x4 = x3;
	}
	else if (x1 == x3) {
		x4 = x2;
	}
	else if (x2 == x3) {
		x4 = x1;
	}

	if (y1 == y2) {
		y4 = y3;
	}
	else if (y1 == y3) {
		y4 = y2;
	}
	else if (y2 == y3) {
		y4 = y1;
	}

	printf("%d %d", x4, y4);

	return 0;
}