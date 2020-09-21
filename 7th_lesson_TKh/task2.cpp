#include <iostream>

using namespace std; // realy it's bad to do such way!

const int M_MAX = 100;

void print2d(int A[][M_MAX], int N, int M)
{
	for (int i = 0; i < N; i++) {
		for(int j = 0; j < M; j++) {
			cout << A[i][j] << '\t';
		}
		cout << '\n';
	}
}

int main()
{	
	int N, M;
	N = 3;
	M = 4;
	int A[N][M_MAX];
	
	for (int i = 0; i < N; i++) {
		for(int j = 0; j < M; j++) {
			A[i][j] = i * M + j;
		}
	}
	print2d(A, N, M);
	int *p = reinterpret_cast<int *>(A);
	for(int i = 0; i < M*N; i++) {
		cout << *(p + i) << ' ';
	}
	return 0;
}
