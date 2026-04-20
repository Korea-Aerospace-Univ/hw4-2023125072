#include<stdio.h>

int main(void) {
	int n, max_num = 0, max_ch =0, cnt_num=0, cnt_char = 0;
	char a;

	scanf("%d", &n);//입력될 문자 개수 입력

	for (int i = 0; i < n ; i++)/*i를0부터 n미만까지 반복한다.*/ {
	
		scanf(" %c", &a); //문자 입력
		
		if (a >= 'a' && a<='z')/*입력 문자가 소문자인 경우*/ {
			cnt_num=0; /*숫자 카운트를 0으로 만든다.*/

			cnt_char++; //문자 개수 1씩 늘려준다.
			
		
		}
		if (a >= '1' && a <= '9')/*입력 문자가 숫자인 경우*/ {
			cnt_char=0; /*문자 카운트를 0으로 만든다.*/

			cnt_num++; //숫자 개수 1씩 늘려준다.
			
		}

			if (cnt_char > max_ch) max_ch = cnt_char; //가장 큰 연속 문자 개수
			if (cnt_num > max_num) max_num = cnt_num;// 가장 큰 연속 숫자 개수
		}
		
		printf("%d\n", max_ch); //출력
		printf("%d\n", max_num);

		
		return 0;
	}
