function insertionSort(arr){

	var i,j,curr;

	for(i = 1; i < arr.length; i++){
		curr = arr[i];
	
		for(j = 0; j < i; j++){
			if(arr[j] >= curr){ //find the one out of order
				break; 
			}
		}

		for(k = i-1; k >= j; k--){ 
			arr[k+1] = arr[k]; //shifting to the right
		}

		arr[j] = curr;
	}

}

var arr = [10,9,8,7,6,5,4,3,2,1];
insertionSort(arr);
console.log(arr);

