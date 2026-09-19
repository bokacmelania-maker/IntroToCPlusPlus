#include <iostream>
using namespace std;
//
//int showNumber(int num) {
//	cout << "Num = " << num << endl;
//	return num;
//}
//
//void foo(int i = 1) {
//	cout << i << endl;
//}
//void foo1(int i = 1, int j = 1) {
//	cout << i << " " << j << endl;
//}
//void foo2(int c, int a = 1, int b = 2)
//{
//	cout << a << " " << b << " " << c << endl;
//}
//void Star(int count = 20)
//{
//	for (int i = 0; i < count; i++)
//	{
//		cout << "* ";
//	}
//	cout << endl;
//}
//void SomeFunction()
//{
//	static int a = 0;
//	a++;
//	cout << a << endl;
//}
//
//double multy(double x)
//{
//	return x * x;
//}
//double multy(double x, double y)
//{
//	return x * y;
//}
//double multy(double x, double y, double z)
//{
//	return x * y * z;
//}
//double multy(double x = 1, double y = 1, double z = 1, int r = 1)
//{
//	return x * y * z * r;
//}

// Шаблони функцій
/*
int MaxElement(int arr[], int size)
{
	int max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
float MaxElement(float arr[], int size)
{
	float max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
double MaxElement(double arr[], int size)
{
	double max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
long MaxElement(long arr[], int size)
{
	long max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
*/
//
//template<typename T_arr>
//T_arr MaxElement(T_arr arr[], int size)
//{
//	T_arr max = arr[0];
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] > max)max = arr[i];
//	}
//	return max;
//}
//
template<typename T1, typename T2>
T2 Max(T1 a, T2 b)
{
	return (a > b) ? a : b;
	/*if (a > b)
		return a;
	else
		return b;*/
}


//Практика

//1.1
int MaxElem(int a, int b) {
	return (a > b) ? a : b;
}
float MaxElem(float a, float b) {
	return (a > b) ? a : b;
}
//1.2
int MaxElem(int a, int b, int c) {
	int max = a;
	if (b > max) {
		max = b;
	}
	if (c > max) {
		max = c;
	}
	return max;
}
//1.3
int MinElem(int a, int b) {
	return (a < b) ? a : b;
}
//1.4
int MinElem(int a, int b, int c) {
	int min = a;
	if (b < min) {
		min = b;
	}
	if (c < min) {
		min = c;
	}
	return min;
}

//2
template<typename T>
double Arithmetic(T arr[], int size) {
	double sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	return sum / size;
}

//3.1		
template<typename T>
T MaxElement_1(T array[], int size) {
	T max = array[0];
	for (int i = 1; i < size; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	return max;
}
  
//3.2	
template<typename T, int cols>
T MaxElement_2(T array[][cols], int rows) {
	T max = array[0][0];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (array[i][j] > max)
				max = array[i][j];
		}
	}
	return max;
}


//4,1
const int SIZE = 3;  
void Matrix(int matrix[][SIZE], int size) {
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			matrix[i][j] = rand() % 10;
		}
	}
}
void Matrix(double matrix[][SIZE], int size) {
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			matrix[i][j] = rand() % 10;
		}
	}
}
void Matrix(char matrix[][SIZE], int size) {
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			matrix[i][j] = 'a' + rand() % 26;
		}
	}
}


//4,2
void printMatrix(int matrix[][SIZE], int size) {
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}
void printMatrix(double matrix[][SIZE], int size) {
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}
void printMatrix(char matrix[][SIZE], int size) {
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

//4,3
int DiagMax(int matrix[][SIZE], int size) {
	int max = matrix[0][0];
	for (int i = 0; i < size; i++)
	{
		if (matrix[i][i] > max)
			max = matrix[i][i];
	}
	return max;
}
double DiagMax(double matrix[][SIZE], int size) {
	double max = matrix[0][0];
	for (int i = 0; i < size; i++)
	{
		if (matrix[i][i] > max)
			max = matrix[i][i];
	}
	return max;
}
char DiagMax(char matrix[][SIZE], int size) {
	char max = matrix[0][0];
	for (int i = 0; i < size; i++)
	{
		if (matrix[i][i] > max)
			max = matrix[i][i];
	}
	return max;
}

int DiagMin(int matrix[][SIZE], int size) {
	int min = matrix[0][0];
	for (int i = 0; i < size; i++)
	{
		if (matrix[i][i] < min)
			min = matrix[i][i];
	}
	return min;
}
double DiagMin(double matrix[][SIZE], int size) {
	double min = matrix[0][0];
	for (int i = 0; i < size; i++)
	{
		if (matrix[i][i] < min)
			min = matrix[i][i];
	}
	return min;
}
char DiagMin(char matrix[][SIZE], int size) {
	char min = matrix[0][0];
	for (int i = 0; i < size; i++)
	{
		if (matrix[i][i] < min)
			min = matrix[i][i];
	}
	return min;
}



int main()
{
	

	//1.Реалізуйте перевантажені функції для
	//■ Знаходження максимального значення двох цілих; (int a, int b)  (float a, float b)
	//■ Знаходження максимального значення трьох цілих.
	//■ Знаходження мінімального значення двох цілих;
	//■ Знаходження мінімального значення трьох цілих.


	//1.1
	cout << "Max element(int) :" << MaxElem(1, 5) << endl;
	cout << "Max element(float) :" << MaxElem(6.45f, 2.22f) << endl;
	//1.2
	cout << "Max element(int) :" << MaxElem(15, 56, 103) << endl;
	//1.3
	cout << "Min element(int) :" << MinElem(-60, 60) << endl;
	cout << "Min element(int) :" << MinElem(-999, -654) << endl;
	//1.4
	cout << "Min element(int) :" << MinElem(-4, 0, 10) << endl;
	cout << "Min element(int) :" << MinElem(4, -9, 10) << endl;
	cout << "Min element(int) :" << MinElem(-4, 0, -10) << endl;

	//2. Написати шаблон функції для пошуку середнього арифметичного значення масиву.

	const int size = 5;
	int arr[size]{ 1,2,3,4,5 };
	cout << "Arithmetic mean of an array:" << Arithmetic(arr, size) << endl;

	//3.Написати шаблонні функції і протестувати їх в основній програмі :
	//■ Знаходження максимального значення в одновимірному масиві;
	//■ Знаходження максимального значення у двовимірному масиві;

	//3.1
	const int Size = 5;
	int arr1[Size]{ 1, 2, 3, 4, 5 };
	cout << "Max element (1_array): " << MaxElement_1(arr1, Size) << endl;

	//3.2
	const int rows = 2;
	const int cols = 3;
	int array[rows][cols] = { {1,2,3}, {4,5,6} };
	cout << "Max element (2_array): " << MaxElement_2<int, cols>(array, rows) << endl;

	//На додаткові 12 балів
	//Завдання 4. Написати перевантажені функції(int, double,char) для виконання таких завдань :
	//■ Ініціалізація квадратної матриці;
	//■ Вивід матриці на екран;
	//■ Визначення максимального й мінімального елемента на головній діагоналі матриці;

	//4
	int matrix[SIZE][SIZE]{};
	Matrix(matrix, SIZE);
	printMatrix(matrix, SIZE);
	cout << "Diagonal max (int): " << DiagMax(matrix, SIZE) << endl;
	cout << "Diagonal min (int): " << DiagMin(matrix, SIZE) << endl;

	double matrixD[SIZE][SIZE]{};
	Matrix(matrixD, SIZE);
	printMatrix(matrixD, SIZE);
	cout << "Diagonal max (double): " << DiagMax(matrixD, SIZE) << endl;
	cout << "Diagonal min (double): " << DiagMin(matrixD, SIZE) << endl;

	char matrixC[SIZE][SIZE]{};
	Matrix(matrixC, SIZE);
	printMatrix(matrixC, SIZE);
	cout << "Diagonal max (char): " << DiagMax(matrixC, SIZE) << endl;
	cout << "Diagonal min (char): " << DiagMin(matrixC, SIZE) << endl;



	cout << "Max number " << Max(1, 48) << endl;
	cout << "Max number " << Max(1.23,6.01) << endl;
	cout << "Max letter " << Max('k', 'O') << endl;
	cout << "Max number " << Max(80.1, 9.21) << endl;

//---------------------------------------------------------------------------------------------------------------------	
	
	//{
	//	const int size = 10;
	//	int arr[size] = { 10,20,330,40,50,60,70,80,90,100 };
	//	float arr1[size] = { 0.1f,0.2f,0.3f,0.4f,0.5f,0.6f,0.7f,0.8f,0.9f,1.0f };
	//	double arr2[size] = { 1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9,0.0 };
	//	long arr3[size] = { 20l,30l,40l,50l,60l,70l,80l,90l,99l,0l };
	//	char arr4[size] = { 'D','e','Y','i','o','P','w','@','#','z' };
	//	cout << "Max element in array : " << MaxElement(arr, size) << endl;
	//	cout << "Max element in array : " << MaxElement(arr1, size) << endl;
	//	cout << "Max element in array : " << MaxElement(arr2, size) << endl;
	//	cout << "Max element in array : " << MaxElement(arr3, size) << endl;
	//	cout << "Max element in array : " << MaxElement(arr4, size) << endl;
	//}



	//cout << "Max number " << Max(5, 8) << endl;
	//cout << "Max number " << Max(3.33, 1.25) << endl;
	//cout << "Max number " << Max('A', 'B') << endl;
	//cout << "Max number " << Max(8, 9.89) << endl;
	/*
	cout << "Res  = " << multy(5) << endl;
	cout << "Res  = " << multy(5,6) << endl;
	cout << "Res  = " << multy(5,6,7) << endl;*/
	//cout << "Res  = " << multy(5,6,7,7) << endl;

	
	//
	//{
	//	const int size = 10;
	//	int arr[size] = { 10,20,330,40,50,60,70,80,90,100 };
	//	float arr1[size] = { 0.1f,0.2f,0.3f,0.4f,0.5f,0.6f,0.7f,0.8f,0.9f,1.0f };
	//	double arr2[size] = { 1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9,0.0 };
	//	long arr3[size] = { 20l,30l,40l,50l,60l,70l,80l,90l,99l };
	//	char arr4[size] = { 'D','e','Y', 'i','o','P','w','@','#' };
	//	cout << "Max element in array : " << MaxElement(arr, size) << endl;
	//	cout << "Max element in array : " << MaxElement(arr1, size) << endl;
	//	cout << "Max element in array : " << MaxElement(arr2, size) << endl;
	//	cout << "Max element in array : " << MaxElement(arr3, size) << endl;
	//	cout << "Max element in array : " << MaxElement(arr4, size) << endl;

	//}



	/*
	SomeFunction();
	SomeFunction();
	SomeFunction();
	cout << endl;
	Star(10);
	Star(15);
	Star();
	foo(5);
	foo(7);
	foo();
	foo1(5,8);
	foo1();
	foo2(5, 5, 5);
	foo2(7,7);
	foo2(8);


	int num = showNumber(7);
	cout << "Res : " << num << endl;


	*/

	
}