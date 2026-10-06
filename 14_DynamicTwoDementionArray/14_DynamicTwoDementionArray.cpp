#include <iostream>
#include <iomanip>

using namespace std;

void InitArray(int** arr, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 90 + 10;
		}
	}
}
void ShowArray(int** arr, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << setw(4) << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}
void FillOneRow(int* arr, int cols)
{
	for (int i = 0; i < cols; i++)
	{
		arr[i] = rand() % 10;
	}
}

int** AddRowToTheEnd(int** arr, int& rows, int cols)
{
	int** temp = new int* [rows + 1];
	for (int i = 0; i < rows; i++)
	{
		temp[i] = arr[i];
	}
	temp[rows] = new int[cols];
	FillOneRow(temp[rows], cols);
	delete[]arr;
	rows++;
	return temp;
}

int** AddRowByPos(int** arr, int& rows, int cols, int pos)
{
	int** temp = new int* [rows + 1];
	for (int i = 0; i < pos; i++)
	{
		temp[i] = arr[i];
	}
	temp[pos] = new int[cols];
	FillOneRow(temp[pos], cols);
	for (int i = pos + 1; i < rows + 1; i++)
	{
		temp[i] = arr[i - 1];
	}
	delete[]arr;
	rows++;
	return temp;
}
int** AddColToTheEnd(int** arr, int rows, int& cols)
{
	int** temp = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		temp[i] = new int[cols + 1];
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			temp[i][j] = arr[i][j];
		}
	}
	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	delete[]arr;
	for (int i = 0; i < rows; i++)
	{
		temp[i][cols] = 5;
	}
	cols++;
	return temp;
}
int** DeleteRow(int** arr, int& rows, int cols)
{
	int** temp = new int* [rows - 1];
	for (int i = 0; i < rows - 1; i++)
	{
		temp[i] = arr[i];
	}
	delete[] arr[rows - 1];
	delete[]arr;
	rows--;
	return temp;
}

//1
int** AddRowToTheStart(int** arr, int& rows, int cols)
{
	int** temp = new int* [rows + 1];
	temp[0] = new int[cols];
	FillOneRow(temp[0], cols);
	for (int i = 0; i < rows; i++) {

		temp[i + 1] = arr[i];
	}
	delete[] arr;
	rows++;
	return temp;
}

//2
int** DeleteRowFromStart(int** arr, int& rows, int cols)
{
	int** temp = new int* [rows - 1];
	delete[] arr[0];
	for (int i = 0; i < rows - 1; i++)
	{
		temp[i] = arr[i + 1];
	}
	delete[] arr;
	rows--;
	return temp;
}

//3
int** DeleteRowByPos(int** arr, int& rows, int cols, int pos)
{
	int** temp = new int* [rows - 1];
	for (int i = 0; i < pos; i++)
	{
		temp[i] = arr[i];
	}
	delete[] arr[pos];
	for (int i = pos; i < rows - 1; i++)
	{
		temp[i] = arr[i + 1];
	}
	delete[] arr;
	rows--;
	return temp;
}

//4		
int** AddColToTheStart(int** arr, int rows, int& cols)	
{
	int** temp = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		temp[i] = new int[cols + 1];
	}
	for (int i = 0; i < rows; i++)
	{
		temp[i][0] = 67;
		for (int j = 0; j < cols; j++)
		{
			temp[i][j + 1] = arr[i][j];
		}
	}
	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
	cols++;
	return temp;
}

//5	 
int** AddColByNum(int** arr, int rows, int& cols, int pos)
{
	for (int i = 0; i < rows; i++)
	{
		int* add_column = new int[cols + 1];
		int count = 0;                         

		for (int j = 0; j <= cols; j++)
		{
			if (j == pos)
				add_column[j] = rand() % 100;
			else
				add_column[j] = arr[i][count++];
		}

		delete[] arr[i];
		arr[i] = add_column;
	}
	cols++;
	return arr;
}

//6
int** Delete_Add_RowByPos(int** arr, int& rows, int cols, int choice)
{
	int pos;
	if (choice == 0) {
		cout << "Enter position to add array: "; 
		cin >> pos;
		return AddRowByPos(arr, rows, cols, pos);
	}
	else if (choice == 1) {
		cout << "Enter position to delete array: "; 
		cin >> pos;
		return DeleteRowByPos(arr, rows, cols, pos);
	}
	else {
		cout << "Error value" << endl;
		return arr;
	}
}
	

int main(){

	//int *arr = new int[8];
	//delete[]arr;
	int rows = 3;
	int cols = 4;
	//cout << "Enter count rows "; cin >> rows;
	//cout << "Enter count rows "; cin >> cols;

	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
	}

	InitArray(arr, rows, cols);
	ShowArray(arr, rows, cols);

	//Завдання 1. Написати функцію, що додає рядок двови -
	//мірному масиву на початок.
	cout << "Task 1" << endl;
	arr = AddRowToTheStart(arr, rows, cols);
	ShowArray(arr, rows, cols);

	//Завдання 2. Написати функцію, що видаляє рядок двови -
	//мірному масиву з початку.
	cout << "Task 2" << endl;
	int pos = 1;
	arr = DeleteRowFromStart(arr, rows, cols);
	ShowArray(arr, rows, cols);

	//Завдання 3. Написати функцію, що видаляє рядок двови -
	//мірному масиву з зазначеної позиції.
	cout << "Task 3" << endl;
	arr = DeleteRowByPos(arr, rows, cols, pos);
	ShowArray(arr, rows, cols);

	//Завдання 4. Написати функцію, що додає колонку дво -
	//вимірного масиву на початок.
	cout << "Task 4" << endl;
	arr = AddColToTheStart(arr, rows, cols);
	ShowArray(arr, rows, cols);

	//На додаткові бали :
	//Завдання 5. Написати функцію, що додає колонку дво -
	//вимірного масиву за вказаним номером.
	cout << "Task 5" << endl;
	arr = AddColByNum(arr, rows, cols, pos);
	ShowArray(arr, rows, cols);

	//Завдання 6. Написати функцію, що додає видаляє дво -
	//вимірного масиву за вказаним номером.
	cout << "Task 6" << endl;
	int choice;
	cout << "0 - add row by position; 1 - delete row by position; " << endl;
	cin >> choice;
	arr = Delete_Add_RowByPos(arr, rows, cols, choice);
	ShowArray(arr, rows, cols);

	//
	//arr = AddRowToTheEnd(arr, rows, cols);
	//ShowArray(arr, rows, cols);
	//arr = AddRowToTheEnd(arr, rows, cols);
	//ShowArray(arr, rows, cols);

	//arr = AddRowByPos(arr, rows, cols, 2);
	//ShowArray(arr, rows, cols);

	//arr = AddColToTheEnd(arr, rows, cols);
	//ShowArray(arr, rows, cols);

	//arr = DeleteRow(arr, rows, cols);
	//ShowArray(arr, rows, cols);
	//arr = DeleteRow(arr, rows, cols);
	//ShowArray(arr, rows, cols);

	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	delete[]arr;

}//