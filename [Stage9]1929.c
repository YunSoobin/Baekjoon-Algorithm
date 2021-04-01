/*
<문제>
M이상 N이하의 소수를 모두 출력하는 프로그램을 작성하시오.

<입력>
첫째 줄에 자연수 M과 N이 빈 칸을 사이에 두고 주어진다. (1 ≤ M ≤ N ≤ 1,000,000) M이상 N이하의 소수가 하나 이상 있는 입력만 주어진다.

<출력>
한 줄에 하나씩, 증가하는 순서대로 소수를 출력한다.

<풀이>
에라토스테네스의 체로 풀기 위해 배열에 수를 정렬하고 소수가 아닌 수를 삭제
*/

#include<stdio.h>

int main(void) {
	int M, N;
	int num[1000001] = { 0 };
	scanf("%d %d", &M, &N);

	if (M == 1)	M++;

	for (int i = M; i <= N; i++) {
		num[i] = i;
	}

	// 소수가 아닌 수 삭제
	for (int i = 2; i <= N; i++) {
		for (int j = 2; i * j <= N; j++) {
			num[i * j] = 0;
		}
	}
	
	for (int i = M; i <= N; i++) {
		if(num[i]!=0)	printf("%d\n",num[i]);
	}

	return 0;
}