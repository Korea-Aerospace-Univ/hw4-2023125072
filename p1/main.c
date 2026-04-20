#include<stdio.h>

int main(void) {
	int a, b, cnt=1;
	scanf("%d", &a);// 정답 입력

	do {
		scanf("%d", &b);//예측 값 입력

		if (a < b)/*정답보다 입력이 크면*/ {
			printf("%d>?\n", b);
		}
		if (a > b)/*정답보다 입력이 작으면*/ {
			printf("%d<?\n", b); 
		}
		if (a == b)/*정답과 입력이 같아서 맞췄으면*/ {
			printf("%d==?\n", b);
			printf("%d", cnt);//시도 횟수 출력
		}
		cnt++;//시도 횟수 카운트 하기위해 하나씩 증가
		
	}while(a!=b); //정답 값이랑 입력 값이랑 다른 경우 반복 같으면 반복 빠져나옴.


	return 0;
}
