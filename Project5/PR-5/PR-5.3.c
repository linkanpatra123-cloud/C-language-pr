#include<stdio.h>

int main(){
	int r, c, i, j;
	int a[10][10];
	
	printf("Eneter the array's row & column size: ");
	scanf("%d", &r);
	
	c=r;
	
	printf("\nEnter array's element:\n");
	for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nThe transpose matrix of an array:\n");
    for(i = 0; i < c; i++) {
        for(j = 0; j < r; j++) {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }

    return 0;
}