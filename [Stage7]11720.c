/*
<문제>
N개의 숫자가 공백 없이 쓰여있다. 이 숫자를 모두 합해서 출력하는 프로그램을 작성하시오.

<입력>
첫째 줄에 숫자의 개수 N (1 ≤ N ≤ 100)이 주어진다. 둘째 줄에 숫자 N개가 공백없이 주어진다.

<출력>
입력으로 주어진 숫자 N개의 합을 출력한다.

<풀이>
문자열을 하나씩 입력받아 더한다.
*/

#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int num, sum=0;
	scanf("%d", &num);
	int * arry = (int*)malloc(sizeof(int)*num);

	for (int i = 0; i < num; i++) {
		scanf("%1d", &arry[i]);
		sum += arry[i];
	}

	printf("%d", sum);

	free(arry);

	return 0;
}