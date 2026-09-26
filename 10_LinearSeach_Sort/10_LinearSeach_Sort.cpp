#include <iostream>
using namespace std;

////void InitArray(int arr[], int size)
////{
////	for (int i = 0; i < size; i++)
////	{
////		arr[i] = rand() % 100;
////	}
////}
////void ShowArray(int arr[], int size)
////{
////	for (int i = 0; i < size; i++)
////		cout << arr[i] << " ";
////	cout << endl;
////}
////int LinearSearch(int arr[], int size, int key) {
////	for (int i = 0; i < size; i++)
////	{
////		if (arr[i] == key)
////			return i;
////	}
////	return -1;
////}
////void selectSort(int arr[], int size)
////{
////	int temp, index;
////	for (int i = 0; i < size; i++)
////	{
////		index = i;
////		temp = arr[i];
////		for (int j = i + 1; j < size; j++)
////		{
////			if (arr[j] < temp) {
////				temp = arr[j];
////				index = j;
////			}
////		}
////		if (index != i)
////		{
////			arr[index] = arr[i];
////			arr[i] = temp;
////		}
////	}
////}
//////void Sort(int arr[], int size, int parameter)
//////{
//////	if(parameter == 0)//sort ascing
//////	if(parameter == 1)//sort descing
//////}
////void BubbleSort(int arr[], int size)
////{
////	int temp;
////	for (int i = 0; i < size; i++)//15
////	{
////		for (int j = size - 1; j > i; j--)
////		{
////			if (arr[j - 1] > arr[j]) {
////				temp = arr[j - 1];
////				arr[j - 1] = arr[j];
////				arr[j] = temp;
////			}
////		}
////	}
////}
////void ShakerSort(int arr[], int size)
////{
////	int j, index = size - 1;
////	int left = 1, right = size - 1;
////	int temp;
////	do
////	{
////		for (j = right; j >= left; j--)
////		{
////			if (arr[j - 1] > arr[j]) {
////				temp = arr[j - 1];
////				arr[j - 1] = arr[j];
////				arr[j] = temp;
////			}
////			index = j;
////		}
////		left = index + 1;
////		for (j = left; j <= right; j++)
////		{
////			if (arr[j - 1] > arr[j]) {
////				temp = arr[j - 1];
////				arr[j - 1] = arr[j];
////				arr[j] = temp;
////			}
////			index = j;
////		}
////		right = index - 1;
////
////	} while (left < right);
////
////}
////void InsertSort(int arr[], int size)
////{
////	//11 4 2 7 3 11 8 9 6 
////	int temp;
////	int j;
////	for (int i = 0; i < size; i++)
////	{
////		//i = 1;		
////		temp = arr[i];//4
////		for (j = i - 1; j >= 0 && arr[j] > temp; j--)
////		{
////			//j = 0
////			//arr[j + 1] = 4
////			arr[j + 1] = arr[j];
////		}
////		arr[j + 1] = temp;
////	}
////
////}
 

//Практика
//--------------------------------------------------------------------
//1. Дан масив чисел розмірністю 10 елементів.Написа -
//ти функцію, яка сортує масив за зростанням або за
//спаданням, залежно від третього параметра функції.
//Якщо він дорівнює 1, сортування йде за спаданням,
//якщо 0, то за зростанням.Перші 2 параметри функ -
//ції — це масив і його розмір, третій параметр за за -
//мовчуванням дорівнює 1.

void Growth_OR_Fall(int arr[], int size, int choice = 1){
int temp, index;
	for (int i = 0; i < size - 1; i++)// ставимо і на нулову позицію тобто початок з індекса 0
	{
		temp = arr[i];//min значення 
		index = i; //індекст min значення

	for (int j = i + 1; j < size; j++)//пошук min знач з індеса 1
	{
		if (choice == 0) {// зростання
			if (arr[j] < temp){
				temp = arr[j];
				index = j;}
			}
		else{ // спадання
			if (arr[j] > temp){
				temp = arr[j];
				index = j;}
			}
		}
		if (index != i)
		{
			arr[index] = arr[i];
			arr[i] = temp;
		}
	}
}

//2. Дан масив випадкових чисел у діапазоні від - 20 до
//+ 20. Необхідно знайти позиції крайніх від'ємних еле-
//ментів(найлівішого від'ємного елемента і найправі-
//шого від'ємного елемента) і впорядкувати елементи,
//що знаходяться між ними.

int left(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0)	// злівого
			return i;
	}
}

int right(int arr[], int size) {
	for (int i = size - 1; i >= 0; i--)
	{
		if (arr[i] < 0)	 //	з правого
			return i;
	}
}
void Sort(int arr[], int left, int right) {
	int temp, index;
	for (int i = left; i < right; i++)
	{
		index = i;
		temp = arr[i];
		for (int j = i + 1; j <= right; j++)
		{
			if (arr[j] < temp)
			{
				temp = arr[j];
				index = j;
			}
		}
		if (index != i)
		{
			arr[index] = arr[i];
			arr[i] = temp;
		}
	}

}

void Array(int arr[], int size) {
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 41 - 20;
	}
}


//---------------------------------------------------------------------

int main()
{
srand(time(0));
	
const int size = 10;

//2
cout << " task 2 " << endl;
	int arr[size];

	Array(arr, size);
	Sort(arr, left(arr, size), right(arr, size)); 

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
//1
	
	cout << " task 1 " << endl;
	int ARR[size] = {6,3,8,5,1,9,4,2,10,7};

	int choice;
	cout << "Enter your choice 1 (sorting is in descending order) 0 (by growth)" << endl;
	cin >> choice;

	Growth_OR_Fall(ARR, size,choice);
	//посортований масив 
	for (int i = 0; i < size; i++)
	{
		cout << ARR[i] << " ";
	}





//-----------------------------
	
	//const int size = 15;
	//int arr[size];
	//InitArray(arr, size);
	//ShowArray(arr, size);
	//selectSort(arr, size);
	//BubbleSort(arr, size);
	//ShakerSort(arr, size);
	//InsertSort(arr, size);
	//ShowArray(arr, size);
	/*int searchKey, indexFind;
cout << "Enter search key --> ";
	cin >> searchKey;
	indexFind = LinearSearch(arr, size, searchKey);
	if (indexFind != -1)
	{
		cout << "Element [" << searchKey << "] find in index ["
			<< indexFind << "]" << endl;
	}
	else
	{
		cout << "Element " << searchKey << " not found " << endl;
	}*/


}


