#include <stdio.h>

int contains(int item, int arr[], int size){
<<<<<<< HEAD
	for (int i = 0; i < size; i++) {
		if (item == arr[i]) {
			return 1;
		}
	} 
	return 0;
}

int main() {
	int arr[] = {2, 9, 2, 0, 2, 5};
	printf("Result: %d\n", contains(0, arr, 5));
	printf("Result: %d\n", contains(1, arr, 5));
	printf("Result: %d\n", contains(5, arr, 5));
=======
	// Write solution here!
	for(int i=0; i<size; i++){
		if (arr[i] == item){
			return 1;
		}
	}
	return 0;
}

int main(){
	int arr[] = {2, 9, 2, 0, 2, 5};
	
	// Call "contains" with an item of your choice, "arr", and the length of "arr"
	// Replace "0" in the following line with your function call
	printf("Result: %d\n", contains(0, arr, 6));
	printf("Result: %d\n", contains(1, arr, 6));
	printf("Result: %d\n", contains(2, arr, 6));
	printf("Result: %d\n", contains(9, arr, 6));
	printf("Result: %d\n", contains(4, arr, 6));
	printf("Result: %d\n", contains(5, arr, 6));
>>>>>>> 733cac3f7b054e2aee4af4731bcf9ffc1a5c2865
}
