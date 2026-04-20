#include<stdio.h>

int main(void) {
	int a, b, cnt=1;
	scanf("%d", &a);

	do {
		scanf("%d", &b);

		if (a < b) {
			printf("%d>?\n", b);
		}
		if (a > b) {
			printf("%d<?\n", b); 
		}
		if (a == b) {
			printf("%d==?\n", b);
			printf("%d", cnt);
		}
		cnt++;
		
	}while(a!=b);


	return 0;
}
