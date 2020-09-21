#include <iostream>

using namespace std;


int main()
{
	int N, M;
	cin >> N >> M;

	//memory allocation
	int **A = new int*[N];
	for(int i = 0; i < N; i++)
	{
		A[i] = new int[M];
	}

	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < M; j++)
		{
			A[i][j] = i * M + j;
		}
	}

	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < M; j++)
		{
			cout << A[i][j] << '\t';
		}
		cout << '\n';
	}

	for(int i = 0; i < N; i++)
	{
		delete[] A[i];
	}
	delete A;
	
	return 0;
}

