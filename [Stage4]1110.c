/*
<문제>
0보다 크거나 같고, 99보다 작거나 같은 정수가 주어질 때 다음과 같은 연산을 할 수 있다. 먼저 주어진 수가 10보다 작다면 앞에 0을 붙여 두 자리 수로 만들고, 각 자리의 숫자를 더한다. 그 다음, 주어진 수의 가장 오른쪽 자리 수와 앞에서 구한 합의 가장 오른쪽 자리 수를 이어 붙이면 새로운 수를 만들 수 있다. 다음 예를 보자.
26부터 시작한다. 2+6 = 8이다. 새로운 수는 68이다. 6+8 = 14이다. 새로운 수는 84이다. 8+4 = 12이다. 새로운 수는 42이다. 4+2 = 6이다. 새로운 수는 26이다.
위의 예는 4번만에 원래 수로 돌아올 수 있다. 따라서 26의 사이클의 길이는 4이다.
N이 주어졌을 때, N의 사이클의 길이를 구하는 프로그램을 작성하시오.

<입력>
첫째 줄에 N이 주어진다. N은 0보다 크거나 같고, 99보다 작거나 같은 정수이다.

<출력>
첫째 줄에 N의 사이클 길이를 출력한다.
*/

#include<stdio.h>

int main(void) {
	int N1, N, tens, units, sum, cycle=1;
	scanf("%d", &N1);
	if (N1 == 0) {
		N = N1;
	}
	else if (0 < N1 && N1 < 10) {
		tens = 0;
		units = N1;
		sum = units;
		N = units * 10 + sum;
	}
	else if (10 <= N1 && N1 <= 99) {
		tens = N1 / 10;
		units = N1 % 10;
		sum = tens + units;
		N = units * 10 + sum % 10;
	}

	while (N1!=N) {
	if (0 < N && N < 10) {
			tens = 0;
			units = N;
			sum = units;
			N = units * 10 + sum;
		}
		else if (10 <= N && N <= 99) {
			tens = N / 10;
			units = N % 10;
			sum = tens + units;
			N = units * 10 + sum % 10;
		}
		cycle++;
	}

	printf("%d", cycle);

	return 0;
}