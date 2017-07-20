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
	}





}



int main(){







}