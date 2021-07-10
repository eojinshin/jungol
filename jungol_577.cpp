#include <stdio.h>

void print_xy(int x, int y) {
	printf("%d %d", x * 2, y / 2);
	return;
}
void larger(int x, int y) {
	if (x < y) {
		print_xy(x, y);
	}
	else {
		print_xy(y, x);
	}
	return;
}

	int main(void) {
	int a, b;

	scanf("%d %d", &a, &b);

	larger(a, b);
	return 0; 
}