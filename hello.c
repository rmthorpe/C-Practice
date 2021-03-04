#include <stdio.h>

void print_nums(int n) {
	int i = 0;
	while (i < n) {
		printf("Number %i\n", i);
		i++;
	}
}

int main(void) {
	printf("hello \n");
	print_nums(10);
	return(0);
}