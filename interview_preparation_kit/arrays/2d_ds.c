#include <stdio.h>

int hourglassSum(int arr_rows, int arr_columns, int** arr) {
		
}

int printArr(int arr_rows, int arr_columns, int** arr) {
	for(int i=0;i<arr_rows;i++){
		for(int j=0;j<arr_columns;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}	
}


int main() {
	
	int arr[3][3]={{1,2,3},{1,2,3},{1,2,3}};
	printArr(3,3,arr);
	return 0;
}
