/*
<문제>
재귀적인 패턴으로 별을 찍어 보자. N이 3의 거듭제곱(3, 9, 27, ...)이라고 할 때, 크기 N의 패턴은 N×N 정사각형 모양이다.
크기 3의 패턴은 가운데에 공백이 있고, 가운데를 제외한 모든 칸에 별이 하나씩 있는 패턴이다.
***
* *
***
N이 3보다 클 경우, 크기 N의 패턴은 공백으로 채워진 가운데의 (N/3)×(N/3) 정사각형을 크기 N/3의 패턴으로 둘러싼 형태이다. 예를 들어 크기 27의 패턴은 예제 출력 1과 같다.

<입력>
첫째 줄에 N이 주어진다. N은 3의 거듭제곱이다. 즉 어떤 정수 k에 대해 N=3k이며, 이때 1 ≤ k < 8이다.

<출력>
첫째 줄부터 N번째 줄까지 별을 출력한다.

<풀이>
문자열 초기화 : <string.h> memset 함수
N*N 정사각형을 3*3 형태의 패턴으로 나눈다.
패턴에서 가운데가 비어있다. 즉, 비어있는 부분의 좌표는 (1,1)
재귀적으로 N을 3으로 나눠 가운데 부분을 공백으로 출력, 나머지는 별로 출력
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void star(int i, int j, int N);

int main(void) {
	int N;
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			star(i, j, N);
		}
		printf("\n");
	}
	printf("\n");

	return 0;

}

void star(int i, int j, int N) {
	// 공백으로 채워진 가운데 (1, 1)
	if ((i / N) % 3 == 1 && (j / N) % 3 == 1) {
		printf(" ");
	}
	else
	{
		// N이 3보다 클 경우
		if (N / 3 == 0)
			printf("*");
		else
		{
			star(i, j, N / 3);
		}
	}
}
