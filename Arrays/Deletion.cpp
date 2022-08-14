#include <iostream>
using namespace std;

int deletionFcn()
{
	int A[] = { 1,2,3,8,5,6 };
	int n = sizeof(A) / sizeof(int);
	int K = 4;
	int j = K;
	cout << "Array before deletion" << endl;
	for (int i = 0; i < n; i++) {
		cout << A[i] << endl;
	}
	while (j < n) {
		A[j - 1] = A[j];
		j = j + 1;
	}



	n = n - 1;
	cout << "Array after deletion" << endl;
	for (int i = 0; i < n; i++) {
		cout << A[i] << endl;
	}

	return 0;
}
