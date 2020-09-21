#include <iostream>

using namespace std; // realy it's bad to do such way!

int main()
{	
	int N, M;
	N = 3;
	M = 4;
	int A[N][M];
	
	for (int i = 0; i < N; i++) {
		for(int j = 0; j < M; j++) {
			A[i][j] = i * M + j;
		}
	}
	for (int i = 0; i < N; i++) {
		for(int j = 0; j < M; j++) {
			cout << A[i][j] << '\t';
		}
		cout << '\n';
	}

	int *p = reinterpret_cast<int *>(A);
	for(int i = 0; i < M*N; i++) {
		cout << *(p + i) << ' ';
	}
	return 0;
}
