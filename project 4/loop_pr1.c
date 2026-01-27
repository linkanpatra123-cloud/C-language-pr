#include <stdio.h>

int main() {
  	int i, j, k;
// PR 1	

	for(i = 41; i <= 45; i++){
		for(j = 41; j <= i; j++){
			printf("%d ", j);
		}
		printf("\n");	
	}
	
// output
// 41
// 41 42
// 41 42 43
// 41 42 43 44
// 41 42 43 44 45


// PR 2

	printf("\n");
	int num = 11;
	for(i = 1; i <= 4; i++){
	
		for(j = 1; j <= i; j++){
			printf("%d ", num);
			num++;
		}
		printf("\n");	
	}

// output
// 11
// 12 13
// 14 15 16
// 17 18 19 20
	
// PR 3
	printf("\n");
	for(i = 5; i >= 1; i--){
	
		for(j = 1; j < i; j++){
			printf("  ");
		}
			for (j = i; j <= 5; j++) {
            printf("%d ", j);
			}
		
	printf("\n");	
	}
	
// output
//         5
//       4 5
//     3 4 5
//   2 3 4 5	
// 1 2 3 4 5

//pr 4
	
	printf("\n");
	for(i=5; i>=1; i--){
		for(k= 0; k< 5 -i; k++){
			printf("  ");
		}
	for(j=1; j<=i; j++){
		if(j%2 == 1)
		printf("1 ");
		else
			printf("0 ");
	}
		printf("\n");
	}
	
//	output
// 1 0 1 0 1
//   1 0 1 0
//     1 0 1
//       1 0
//         1

// PR 5

	printf("\n");
	for(i = 5; i >= 1; i--){
	
		for(j = 1; j < i; j++){
			printf("  ");
		}
			for (j = i; j <= 5; j++) {
            printf("%d ", j);
			}
			for(k=4; k >= i; k--){
				printf("%d ",k);
			}
			
		
		printf("\n");	
	}

//output
//        5
//      4 5 4
//    3 4 5 4 3
//  2 3 4 5 4 3 2
//1 2 3 4 5 4 3 2 1

// PR 6
	printf("\n");
    for(int i = 1; i <= 5; i++) {

       
        for(int j = 1; j <= i; j++) {
            printf("%d ", j);
        }

     	for(int s = 1; s <= 2 * (5 - i); s++) {
            printf("  ");
        }

       	for(int j = i; j >= 1; j--) {
            printf("%d ", j);
        }

        printf("\n");
    }
    
// output
//1                 1
//1 2             2 1
//1 2 3         3 2 1
//1 2 3 4     4 3 2 1
//1 2 3 4 5 5 4 3 2 1
   
// PR 7   
    
    printf("\n");
    int s = (5 / 2) + 1;

    for (int i = 1; i <= 5; i++) {

        
        if (i == 1 || i == s) {
            for (int p = 1; p <= 5; p++) {
                printf("* ");
            }
            printf("\n");
        }

       
        else if (i > 1 && i < s) {
            for (int p = 1; p <= 5; p++) {
                if (p == 1 || p == 5) {
                    printf("* ");
                } else {
                    printf("  ");
                }
            }
            printf("\n");
        }

        else {
            printf("*\n");
        }
    }

//output

//* * * * *
//*       *
//* * * * *
//*
//*

    return 0;
}
