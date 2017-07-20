//From C++ for You++

template <class T>
class MERGESORT{

private:
	T *work;
	inline void Swap(T &a, T &b);
	void Merge(T a1[], int n1, T a2[], int n2);

public:
	MERGESORT(int n) { work = new T[n]; }

	~MERGESORT() { delete [] work; }

	void Sort(T a[], int n);

};

void MERGESORT<T>::Sort(T a[], int n){

	int n1, n2;
	T *a2;

	if(n <= 2) {
		if(n == 2 && a[1] < a[0])
			Swap(a[0],a[1]);
	} else {
		n1 = n/2;
		n2 = n - n1;
		a2 = &a[n1];

		Sort(a,n1);
		Sort(a2,n2);
		Merge(a,n1,a2,n2);
	}
}

void MERGESORT<T>::Merge(T a1[], int n1, T a2[], int n2){
	int n = n1+n2; //set n to the length of both arrays combined
	int i1, i2, j;

	i1 = i2 = 0; //set idx to beginning of each array
	for(j = 0; j < n; j++){
		if(i1 < n1 && i2 < n2){
			if(a1[i1] < a2[i2]) //adds the smallest from either array
				work[j] = a1[i1++];
			else
				work[j] = a2[i2++];
		} else if (i1 < n1) {
			work[j] = a[i1++];
		} else
			work[j] = a2[i2++];
	}

	for (j = 0; j < n; j++)
		a1[j] = work[j];
}

void MERGESORT<T>::Swap(T &a, T &b){
	T temp = a; a = b; b = temp;
}


int main(){







}