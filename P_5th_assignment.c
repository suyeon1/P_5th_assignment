#include <stdio.h>

void MatricesMulti(int A1[5][2], int A2[2][3], int A3[3][4], int A4[4][3], int A5[3][2], int A6[2][3]);

int main() {
	int i, j;
	int A1[5][2] = { { 1,1 },{ 1,1 },{ 1,1 },{ 1,1 },{ 1,1 } };
	int A2[2][3] = { { 1,1,1 },{ 1,1,1 } };
	int A3[3][4] = { { 1,1,1,1 },{ 1,1,1,1 },{ 1,1,1,1 }};
	int A4[4][3] = { { 1,1,1 },{ 1,1,1 },{ 1,1,1 },{ 1,1,1 } };
	int A5[3][2] = { { 1,1 },{ 1,1 },{ 1,1 }};
	int A6[2][3] = { { 1,1,1 },{ 1,1,1 } };

	printf("A1 = \n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 2; j++) {
			printf(" %d", A1[i][j]);
		}
		printf("\n");
	}
		
	printf("A2 = \n");
		for (i = 0; i < 2; i++) {
			for (j = 0; j < 3; j++) {
				printf(" %d", A2[i][j]);
			}
			printf("\n");
	}

		printf("A3 = \n");
		for (i = 0; i < 3; i++) {
			for (j = 0; j < 4; j++) {
				printf(" %d", A3[i][j]);
			}
			printf("\n");
		}

		printf("A4 = \n");
		for (i = 0; i < 4; i++) {
			for (j = 0; j < 3; j++) {
				printf(" %d", A4[i][j]);
			}
			printf("\n");
		}

		printf("A5 = \n");
		for (i = 0; i < 3; i++) {
			for (j = 0; j < 2; j++) {
				printf(" %d", A5[i][j]);
			}
			printf("\n");
		}
		printf("A6 = \n");
		for (i = 0; i < 2; i++) {
			for (j = 0; j < 3; j++) {
				printf(" %d", A6[i][j]);
			}
			printf("\n");
		}
	MatricesMulti(A1, A2, A3, A4, A5, A6);

	return 0;
}

void MatricesMulti(int A1[5][2], int A2[2][3], int A3[3][4], int A4[4][3], int A5[3][2], int A6[2][3]) {
	int i, j;
	int B1[5][3] = { 0 }, B2[5][4] = { 0 }, B3[5][3] = { 0 }, B4[5][2] = { 0 }, B5[5][3] = { 0 };

	
	for (i = 0; i < 5; i++)
		for (j = 0; j < 3; j++)
			B1[i][j] = A1[i][0] * A2[0][j] + A1[i][1] * A2[1][j];

	for (i = 0; i < 5; i++)
		for (j = 0; j < 4; j++)
			B2[i][j] = B1[i][0] * A3[0][j] + B1[i][1] * A3[1][j] + B1[i][2] * A3[2][j];

	for (i = 0; i < 5; i++)
		for (j = 0; j < 3; j++)
			B3[i][j] = B2[i][0] * A4[0][j] + B2[i][1] * A4[1][j] + B2[i][2] * A4[2][j] + B2[i][3] * A4[3][j];

	for (i = 0; i < 5; i++)
		for (j = 0; j < 2; j++)
			B4[i][j] = B3[i][0] * A5[0][j] + B3[i][1] * A5[1][j] + B3[i][2] * A5[2][j];

	for (i = 0; i < 5; i++)
		for (j = 0; j < 3; j++)
			B5[i][j] = B4[i][0] * A6[0][j] + B4[i][1] * A6[1][j];


	printf("Result = \n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 3; j++) {
			printf(" %d", B5[i][j]);
		}
		printf("\n");
	}
}