#include<stdio.h>

int main(void) {
	int n, max_num = 0, max_ch =0, cnt_num=0, cnt_char = 0;
	char a;

	scanf("%d", &n);

	for (int i = 0; i < n ; i++) {
	
		scanf(" %c", &a);
		
		if (a >= 'a' && a<='z') {
			cnt_num=0;

			cnt_char++;
			
		
		}
		if (a >= '1' && a <= '9') {
			cnt_char=0;

			cnt_num++;
			
		}

			if (cnt_char > max_ch) max_ch = cnt_char;
			if (cnt_num > max_num) max_num = cnt_num;
		}
		
		printf("%d\n", max_ch);
		printf("%d\n", max_num);

		
		return 0;
	}
