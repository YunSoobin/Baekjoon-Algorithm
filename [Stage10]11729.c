/*
<문제>
세 개의 장대가 있고 첫 번째 장대에는 반경이 서로 다른 n개의 원판이 쌓여 있다. 각 원판은 반경이 큰 순서대로 쌓여있다. 이제 수도승들이 다음 규칙에 따라 첫 번째 장대에서 세 번째 장대로 옮기려 한다.
한 번에 한 개의 원판만을 다른 탑으로 옮길 수 있다.
쌓아 놓은 원판은 항상 위의 것이 아래의 것보다 작아야 한다.
이 작업을 수행하는데 필요한 이동 순서를 출력하는 프로그램을 작성하라. 단, 이동 횟수는 최소가 되어야 한다.

<입력>
첫째 줄에 첫 번째 장대에 쌓인 원판의 개수 N (1 ≤ N ≤ 20)이 주어진다.

<출력>
첫째 줄에 옮긴 횟수 K를 출력한다.
두 번째 줄부터 수행 과정을 출력한다. 두 번째 줄부터 K개의 줄에 걸쳐 두 정수 A B를 빈칸을 사이에 두고 출력하는데, 이는 A번째 탑의 가장 위에 있는 원판을 B번째 탑의 가장 위로 옮긴다는 뜻이다.

<풀이>
1번 장대에 있는 모든 원판을 3번 장대로 옮기기 위해 먼저 N-1개의 원판을 3번 장대를 거쳐 2번 장대로 옮기고, 1번 장대에 있는 가장 큰 크기의 원판을 3번 장대로 옮긴 후, 2 번 장대에 있는 N-1개의 원판을 1번 장대를 거쳐 3번 장대로 옮긴다.
hanoi(N) = 2 * hanoi(N-1) + 1
*/

#include<stdio.h>

int hanoi_count(int N);
void hanoi(int N, int start, int by, int to);

int main(void) {
	int N;

	scanf("%d", &N);

	printf("%d\n",hanoi_count(N));
	hanoi(N, 1, 2, 3);

	return 0;
}

int hanoi_count(int N) {
	if (N == 1)
	{
		return 1;
	}
	else {
		return 2 * hanoi_count(N - 1) + 1;
	}
}

void hanoi(int N, int start, int by, int to){
	if (N == 1)
		printf("%d %d\n", start, to);
	else
	{
		hanoi(N - 1, start, to, by);
		printf("%d %d\n", start, to);
		hanoi(N - 1, by, start, to);
	}
}