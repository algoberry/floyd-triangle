#include <stdio.h>
int main() {
	int rowCount, i, j, number = 1;
	printf("Enter the number of rows: ");
	scanf("%d", &rowCount);
	for(i = 1; i <= rowCount; i++) {
		for (j = 1; j <= i; ++j) {
			printf("%d ",number);
			number++;
		}
		printf("\n");
	}
	return 0;
}
