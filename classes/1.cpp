#include <iostream>
using namespace std;

class Matrix
{
	int ** matrixInClass;
public:
	void setMatrix(int rowAmount, int colAmount);
	void changeRowAndColumn(int rowAmount, int colAmount);
};
//==================================================================================
void Matrix::setMatrix(int rowAmount, int colAmount)
{
	matrixInClass = new int*[rowAmount]; // allocate memory
	for (int i = 0; i < rowAmount; i ++)
	{
		matrixInClass[i] = new int[colAmount];
	}

	for (int i = 0; i < rowAmount; i++)  // writing ussign to array
	{
		cout << " | ";
		for (int j = 0; j < colAmount; j++)
		{
			matrixInClass[i][j] = i + j;
			cout << matrixInClass[i][j] << " ";
		}
		cout << " | " << endl;
	}
}
//==================================================================================
void Matrix::changeRowAndColumn(int rowAmount, int colAmount)
{
	int** tempMatrix = new int*[colAmount]; // alocate memory for temporary matrix
	for (int i = 0; i < colAmount; i++)
	{
		tempMatrix[i] = new int[rowAmount];
	}

	for (int i = 0; i < colAmount; i++) // copy row in col and col in row
	{
		for (int j = 0; j < rowAmount; j++)
		{
			tempMatrix[i][j] = matrixInClass[j][i];
		}
		cout << endl;
	}

	for (int i = 0; i < rowAmount; i++) // freed memory befor allocate new
	{
		delete[] matrixInClass[i];
	}
	delete[] matrixInClass;

	matrixInClass = new int*[colAmount]; // aloocate new memory
	for (int i = 0; i < colAmount; i++)
	{
		matrixInClass[i] = new int[rowAmount];
	}

	for (int i = 0; i < colAmount; i++) // copy from temporary matrix
	{
		cout << "|";
		for (int j = 0; j < rowAmount; j++)
		{
			matrixInClass[i][j] = tempMatrix[i][j];
			cout << matrixInClass[i][j] << " ";
		}
		cout << "|" << endl;
	}

	for (int i = 0; i < colAmount; i++) // freed memory befor allocate new
	{
		delete[] tempMatrix[i];
	}
	delete[] tempMatrix;
}

int main()
{
	setlocale(LC_ALL, "rus");

	int rowAmount;
	int colAmount;
	cout << "Input row 2D array: ";
	cin >> rowAmount;
	cout << "Input col 2D array: ";
	cin >> colAmount;

	Matrix Object;

	Object.setMatrix(rowAmount, colAmount);

	cout << "\nreplacement meaning row to col: ";
	Object.changeRowAndColumn(rowAmount, colAmount);

	return 0;
}
