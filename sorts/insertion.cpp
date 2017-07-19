#include <iostream>

template <class T>
void insertSort(T a[], int n){

	int i,j,k;
	T aCurr;

	for(i = 1; i < n; i++){
		aCurr = a[i];
		std::cout << "i:" << i << " aC: " << aCurr << std::endl;

		for(j = 0; j < i; j++)
			if(a[j] >= aCurr)
				break;
		std::cout << "j: " << j << std::endl;

		for(k = i-1; k >= j; k--)
			a[k+1] = a[k];

		std::cout << "k: " << k << std::endl;

		a[j] = aCurr;

		for(int x = 0; x < 6; x++){
			std::cout << a[x] << ", ";		
		} std::cout << std::endl;
	}

}


int main(){

	int arr[] = {3,6,15,13,9,1};
	insertSort(arr,6);

	for(int i =0; i < 6; i++){
		std::cout << arr[i] << std::endl;
	}

}