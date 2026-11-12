#include <stdio.h>
int main(){
	int matrix1[3][3];
	int matrix2[3][3];
	int sum[3][3];
	int i,j;
	for(i=0; i<3; i++){
		printf("Enter Elements in Row%d:\n ", i+1);
		for(j=0; j<3; j++){
			printf("Enter Elment of Column%d : ", j+1);
			scanf("%d", &matrix1[i][j]);
		}
	}
	for(i=0; i<3; i++){
		printf("\nEnter Elements in Row%d:\n ", i+1);
		for(j=0; j<3; j++){
			printf("Enter Elment of Column%d : ", j+1);
			scanf("%d", &matrix2[i][j]);
		}
	}
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			sum[i][j] = matrix1[i][j] + matrix2[i][j];
		}
	}
	printf("\nMatrix-1\n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("%d", matrix1[i][j]);
			printf(" ");
		}
		printf("\n");
	}
	printf("\nMatrix-2\n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("%d", matrix2[i][j]);
			printf(" ");
		}
		printf("\n");
	}
	printf("\nSum of both Matrices: \n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("%d", sum[i][j]);
			printf(" ");
		}
		printf("\n");
	}
}