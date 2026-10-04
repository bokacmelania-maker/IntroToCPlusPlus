#include <iostream>
#include <conio.h>
using namespace std;

//void Change(int& a)//address
//{
//	a++;
//}
////0sdd5s4 FindMax(0x785x4 a, 0sdd5s4 b) {
////	if (a > b)return a;
////	else return b;
////}
//int& FindMax(int& a, int& b) {
//	if (a > b)return a;
//	else return b;
//}
//void Test1()
//{
//	const int size = 10;
//	int arr[size];
//}
//void Test2()
//{
//	int size = 10;
//	cin >> size;
//	int* arr = new int[size];
//	delete[] arr;
//}
//int* CreateArray(int size)
//{
//	int* arr = new int[size];
//	return arr;
//}
//void InitArray(int* arr, int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		arr[i] = rand() % 100;
//	}
//}
//void ShowArray(int* arr, int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//int* AddNewNumber(int* arr, int* size, int number)
//{
//
//	int* temp = new int[*size + 1];//4
//	for (int i = 0; i < *size; i++)
//	{
//		temp[i] = arr[i];
//	}
//	temp[*size] = number;
//	delete[]arr;
//	arr = temp;
//	(*size)++;
//	return arr;
//}


//2

// "Функція створення динамічного масиву вказаного розміру. Функція повертає адресу створеного масиву".
int* Create_arr(int size)
{
	int* arr = new int[size];
	return arr;
}

//- його заповнення випадковими числами.
void Init_arr(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;	
	}
}

//- Виводу масиву
void Print_arr(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

//- Доповнення масиву одним елементом.
//Функція отримує адресу масиву, розмір та елемент для доповнення.
int* Add_num_to_end(int* arr, int* size, int elem)
{
	int* temp = new int[*size + 1];
	for (int i = 0; i < *size; i++)
	{
		temp[i] = arr[i]; 
	}

	temp[*size] = elem;
	delete[] arr;
	(*size)++;
	return temp;
}

//- Видалення елемента з кінця.
int* Del_last_num(int* arr, int* size)
{
	if (*size == 0) 
		return arr;

	int* temp = new int[*size - 1];
	
	for (int i = 0; i < *size - 1; i++){

		temp[i] = arr[i];
	}
	delete[] arr;
	(*size)--; 
	return temp;
}

//- Видалення елемента  за індексом.
int* Del_num_by_index(int* arr, int* size, int index)
{
	if (index < 0 || index >= *size) 
		return arr;

	int* temp = new int[*size - 1];
	for (int i = 0; i < index; i++)
	{
		temp[i] = arr[i];
	}
	for (int i = index + 1; i < *size; i++)
	{
		temp[i - 1] = arr[i];
	}
	delete[] arr;
	(*size)--;
	return temp;
}

//- Вставка нового елемента у довільну допустиму позицію у масиві
int* Add_num_by_pos(int* arr, int* size,  int index, int elem)
{
	if (index < 0 || index > *size) 
		return arr;

	int* temp = new int[*size + 1];
	
	for (int i = 0; i < *size + 1; i++)
	{
		if (i < index)
			temp[i] = arr[i];

		else if (i == index)
			temp[i] = elem; 

		else
			temp[i] = arr[i - 1];    
	}
	delete[] arr;
	(*size)++;
	return temp;
}


//-------------------------------------------------------------
int main(){

srand(time(0));

	//1.Створити 3 динамічних змінних різного типу.
	//	Заповнити їх деякими значеннями.Обчислити і вивести на екран їх добуток,
	//	а також самі значення динамічних змінних.
	int* a = new int(5);
	float* b = new float(10);
	char* c = new char('o');
	cout << "Dobutok = " << *a * *b * *c << endl;
	cout << "a = " << *a << endl;
	cout << "b = " << *b << endl;
	cout << "c = " << *c << endl;
	delete a;
	delete b;
	delete c;

	//2.Написати функції для роботи з динамічним одновимірним масивом :
	// -Функція створення динамічного масиву вказаного розміру і
	//	Функція повертає адресу створеного масиву.
	//	- його заповнення випадковими числами.
	//	- Виводу масиву
	//	- Доповнення масиву одним елементом.
	//	Функція отримує адресу масиву, розмір та елемент для доповнення.
	//	- Видалення елемента з кінця.
	//	- Видалення елемента  за індексом.
	//	- Вставка нового елемента у довільну допустиму позицію у масиві
	//	Меню	

int size;
cout << "Enter arr size:" << endl;
cin >> size;

if (size <= 0) {
	cout << "Error" << endl;
	return 1;
}

int* arr = Create_arr(size);
Init_arr(arr, size);
Print_arr(arr, size);

int index, num, choice;

do{

	cout << endl;

	cout << "1 - Add number to the end " << endl;
	cout << "2 - Delete last number " << endl;
	cout << "3 - Delete number by index " << endl;
	cout << "4 - Add number by position " << endl;
	cout << "5 - Array output " << endl;
	cout << "0 - Exit" << endl;
	cout << "Your choice:  ";
	cin >> choice;
	
	switch (choice) {

	case 1:
		cout << "Enter number to add it at the end : "; cin >> num;
		arr = Add_num_to_end(arr, &size, num);
		Print_arr(arr, size);
		break;

	case 2:
		arr = Del_last_num(arr, &size);
		Print_arr(arr, size);
		break;

	case 3:
		cout << "Enter the index to delete : "; cin >> index;
		arr = Del_num_by_index(arr, &size, index);
		Print_arr(arr, size);
		break;

	case 4:
		cout << "Enter the index to insert at : "; cin >> index;
		cout << "Enter the number to insert : "; cin >> num;
		arr = Add_num_by_pos(arr, &size, index, num);
		Print_arr(arr, size);
		break;

	case 5:
		Print_arr(arr, size);
		break;

	case 0:
		cout << "Have a nice day, Bye!" << endl;
		break;         

	default:          
		cout << "Wrong choice" << endl;
	}

} while (choice != 0);


delete[] arr;




//int size = 3;
////cout << "Enter size : "; cin >> size;
//int* arr = CreateArray(size);
//InitArray(arr, size);
//ShowArray(arr, size);
//
//int number;
//char choice = 'y';
//while (true)
//{
//	cout << "Do you want to add number ? y/n....";
//	choice = _getch();
//	if (choice == 'n')break;
//
//	cout << "\nEnter number : "; cin >> number;
//	arr = AddNewNumber(arr, &size, number);
//	//system("cls");
//	ShowArray(arr, size);
//}
//delete[]arr;
//
//int a = 10;
//
//int* pa = new int(15);
//int* pb = new int;
//int* pc = nullptr;
//
//*pb = 5;
//pc = new int(12);
//
//cout << "pa = " << pa << endl;
//cout << "pb = " << pb << endl;
//cout << "pc = " << pc << endl;
//
//cout << "*pa = " << *pa << endl;
//cout << "*pb = " << *pb << endl;
//cout << "*pc = " << *pc << endl;
//
//delete pc;
//pc = new int(55);
//cout << "*pa = " << *pa << endl;
//cout << "*pb = " << *pb << endl;
//cout << "*pc = " << *pc << endl;
//
//
//
//delete pa;
//delete pb;
//delete pc;

/*
//Pointers  ... Links
int a = 5;   // variable
int* pa = &a; // pointer
int& la = a;  // link
cout << "a = " << a << endl;
cout << "pa = " << pa << endl;
cout << "*pa = " << *pa << endl;
cout << "la = " << la << endl;

int b = 10;

int* pb = nullptr;

pb = &b;
int& lb = b;
cout << "lb = " << lb << endl;
//lb = a; error
cout << "lb = " << lb << endl;
cout << "a = " << a << endl;
Change(a);
cout << "a = " << a << endl;
cout << "b = " << b << endl;

//int &lmax = FindMax(a, b);
//0sdd5s4 = 100;
 FindMax(a, b) = 100;
cout << "a = " << a << endl;
cout << "b = " << b << endl;
//cout << "lmax = " << lmax << endl;
*/

} //