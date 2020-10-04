#include <stdio.h>
int main() {
	int rowsCount, i, j, number = 1;
	printf("Enter the number of rows: ");
	scanf("%d", &rowsCount);
	for(i = 1; i <= rowsCount; i++) {
		for (j = 1; j <= i; ++j) {
			printf("%d ",number);
			number++;
		}
		printf("\n");
	}
	return 0;
}
