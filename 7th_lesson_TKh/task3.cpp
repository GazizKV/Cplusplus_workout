#include <iostream>

using namespace std; // realy it's bad to do such way!

const int M_MAX = 100;

void print2d(int *p, int N, int M)
{
	for (int i = 0; i < N; i++) {
		for(int j = 0; j < M; j++) {
			cout << p[i * M + j] << '\t';
		}
		cout << '\n';
	}
}

int main()
{	
	int N, M;
	cin >> N >> M;
	int A[N][M];
	
	for (int i = 0; i < N; i++) {
		for(int j = 0; j < M; j++) {
			A[i][j] = i * M + j;
		}
	}
	print2d(reinterpret_cast<int *>(A), N, M);
	int *p = reinterpret_cast<int *>(A);
	for(int i = 0; i < M*N; i++) {
		cout << *(p + i) << ' ';
	}
	return 0;
}
