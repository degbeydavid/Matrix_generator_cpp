#include <iostream>

using namespace std;

void CreateMat() {

	int N, M = 10000;
	
	int * T[N];

	for (int i = 0; i<N; i++){
		T[i] = (int *) malloc(M * sizeof(int));
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			T[i][j]=i*j;

			}
		}
	
cout << T[4][6] << endl;

}
