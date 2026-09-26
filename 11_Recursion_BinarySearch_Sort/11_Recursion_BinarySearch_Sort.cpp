#include <iostream>
using namespace std;


//int Foo(int a)
//{
//	if (a == 0) {
//		return 0;//break;
//	}
//	cout << "* " << a << endl;
//	a--;
//	Foo(a);
//}
//
//int Summa(int arr[], int size, int index)
//{
//	if (index == size - 1)
//		return arr[index];
//	// return 5 * 5 * 5 * 5  *5 step = 0
//	return arr[index] + Summa(arr, size, index + 1);
//}
////summa = Summa(arr, size, 0);
//void InitArray(int arr[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		arr[i] = rand() % 100;
//	}
//}
//void ShowArray(int arr[], int size)
//{
//	for (int i = 0; i < size; i++)
//		cout << arr[i] << " ";
//	cout << endl;
//}
//void QuickSort(int arr[], int size, int B, int E)
//{
//	int i = B, j = E;
//	int temp, p;
//	p = arr[(B + E) / 2];
//	do
//	{
//		while (arr[i] < p)i++;
//		while (arr[j] > p)j--;
//		if (i <= j)
//		{
//			temp = arr[i];
//			arr[i] = arr[j];
//			arr[j] = temp;
//			i++;
//			j--;
//		}
//	} while (i <= j);
//	if (B < j)QuickSort(arr, size, B, j);
//	if (i < E)QuickSort(arr, size, i, E);
//
//}
//int BinarySearch(int arr[], int size, int key) //16
//{
//	int B = 0, E = size - 1;
//	while (true)
//	{
//		//B = 0, E = 9
//		//1 5 7 8 9 15 16 21 47 53 
//		// //B = 5, E = 6
//		// 15 16 21 47 53 
//		int p = (B + E) / 2;
//		//p = 7
//		if (key > arr[p])
//		{
//			B = p + 1;
//		}
//		else if (key < arr[p])
//		{
//			E = p - 1;
//		}
//		else if (key == arr[p])
//			return p;
//		if (B > E) return -1;
//	}
//}


////1. Написати рекурсивну функцію знаходження ступеня числа.
int Stepin(int number, int step) 
{
	if (step == 0) {
		return 1;
	}
	return number * Stepin(number, step - 1);
}

//2. Написати рекурсивну функцію, яка виводить N зірок
//у ряд, число N задає користувач.Проілюструйте ро -
//боту функції прикладом

void Star(int count) {
	if (count == 0)
		return;

	cout << "*";
	Star(count - 1);

}
//3. Написати рекурсивну функцію, яка обчислює суму
//всіх чисел у діапазоні від a до b.Користувач вводить
//a і b.Проілюструйте роботу функції прикладом.
int Summa(int a, int b) {
	if (a > b)
		return 0;

	return a + Summa(a + 1, b);
}

int main()
{
	//1
	cout << Stepin(3, 3) << endl;
	cout << Stepin(9, 3) << endl;
	//2
	Star(7);
	cout << endl;
	//3	
	int a;
	cout << "Enter number: " << endl;
	cin >> a;
	int b;
	cout << "Enter number: " << endl;
	cin >> b;
	cout << Summa(a, b);

	//cout << Stepin(3, 3);
	//Foo(10);
	//cout << Foo << endl;
	////Пошук суми елементів масиву. 
	//const int size = 100;
	//int arr[size] = { 1,8,7,4,5,6,3,10,14,9 };
	//int summa = 0;
	//for (int i = 0; i < size; i++)
	//{
	//	cout << arr[i] << " ";
	//	summa += arr[i];
	//}
	//cout << endl;
	//cout << "Summa = "<< summa<<  endl;
	//summa = Summa(arr, size, 0);
	//cout << "Summa = " << summa << endl;
	//////Швидке сортування
	//InitArray(arr, size);
	//ShowArray(arr, size);
	//QuickSort(arr, size,0, size-1);
	//ShowArray(arr, size);
	//
	//int searchKey, indexFind;
	//cout << "Enter search key --> ";
	//cin >> searchKey;
	//indexFind = BinarySearch(arr, size, searchKey);
	//if (indexFind != -1)
	//{
	//	cout << "Element [" << searchKey << "] find in index ["
	//		<< indexFind << "]" << endl;
	//}
	//else
	//{
	//	cout << "Element " << searchKey << " not found " << endl;
	//}


}




