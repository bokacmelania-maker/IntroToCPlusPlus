#include <iostream>

using namespace std;

//void Change(int a) {
//	a++;
//}
//void Change(int* a) // адреса
//{
//	(*a)++;
//}int FindMax(int a, int b, int c) {
//	if (a > b && a > c)
//		return a;
//	else if (a < b && b > c)
//		return b;
//	else
//		return c;
//}
//int* FindMax(int* a, int* b, int* c) {
//	if (*a > *b && *a > *c)
//		return a;
//	else if (*a < *b && *b > *c)
//		return b;
//	else
//		return c;
//}
//void InitArray(int* arr, int size) {
//	for (int i = 0; i < size; i++)
//	{
//		*(arr + i) = rand() % 100;
//	}
//}
//void ShowArray(int* arr, int size) {
//	for (int i = 0; i < size; i++)
//	{
//		cout << *(arr + i) << " ";
//	}
//	cout << endl;
//}
//int* MaxElen(int* arr, int size) {
//	int* max = arr;
//	for (int i = 0; i < size; i++)
//	{
//		if (*(arr + i) > *max) {
//			max = arr + i;
//		}
//	}
//	return max;
//}

//1
void Pointer(int* p1, int* p2, int* p3) {
	cout<<"Dobytok: " << *p1 * *p2 * *p3 << endl;
	cout<<"Arithmetic: " << (*p1 + *p2 + *p3) / 3 << endl;
	
	int* min = p1;

	if (*min > *p2)
	{
		min = p2;
	}
	if (*min > *p3)
	{
		min = p3;
	}
	cout << "Min " << *min << endl;

}

//3
void Max_Min(int arr[], int size) {
	int min_index = 0;
	int max_index = 0;
	int temp;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < arr[min_index]) {
			min_index = i;
		}
		if (arr[i] > arr[max_index]) {
			max_index = i;
		}
	}
	temp = arr[min_index];
	arr[min_index] = arr[max_index];
	arr[max_index] = temp;

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
//4
void reverse_neparni_and_parni(int* arr, int size)
{
	for (int i = 0; i < size - 1; i += 2)
	{
		int* parni = &arr[i];
		int* neparni = &arr[i + 1];

		int temp = *parni;
		*parni = *neparni;
		*neparni = temp;
	}
}

//-----------------------------------
int main(){

//Для всіх 
const int size = 10;
int arr[size] = { 1,2,3,4,5,6,7,8,9,10 };

//1.Дано три числа. Оголосити вказівники на ці числа. Отримати добуток трьох
//заданих чисел, середє арифметичне, найменше з них, користуючись
//непрямим доступом до чисел(через вказівники).

	int num1 = 5;
	int* p1 = &num1;

	int num2 = 10;
	int* p2 = &num2;

	int num3 = 15;
	int* p3 = &num3;

	cout << "Tast 1" << endl;
	Pointer(p1, p2, p3);


//2.Дано цілочисельний одновимірний масив. Заповнити його,
//вивести на екран у прямому та зворотньому порядку та порахувати
//суму елементів з використанням вказівників.
	cout << "Tast 2" << endl;

	cout << "direct" << endl;

	for (int i = 0; i < size; i++)
	{
		cout << *(arr + i) << " ";
	}
	cout << endl;

	cout << "reverse" << endl;
	for (int i = size-1; i >=0; i--)
	{
		cout << *(arr + i) << " ";
	}
	cout << endl;

	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += *(arr + i);	//
	}
	cout << "Sum: " << sum << endl;

//+12
//3.Дано одновимірний масив. Знайти найбільше та найменше значення у
//масиві та поміняти їх у масиві місцями. Вивести перетворений масив на екран.

	cout << "Tast 3" << endl;

	 Max_Min(arr,size);

//4.Дано масив цілих чисел. Користуючись вказівниками, поміняти місцями елементи
//масиву з парними и непарними індексами (тобто ті елементи масиву, які стоять
//на парних місцях, поміняти з елементами, які стоять на непарних місцях).

	 cout << "Tast 4" << endl;

	reverse_neparni_and_parni(arr, size);

	for (int i = 0; i < size; i++)
	{
		cout << *(arr + i) << " ";
	}
	


	//const int size = 10;
	//int arr[size];
	//InitArray(arr, size);
	//ShowArray(arr, size);
	//int* maxElen = MaxElen(arr, size);
	//cout << "Max element in address: " << maxElen << endl; 
	//cout << "Max element in arr: " << *maxElen << endl;      
	//*maxElen *= 2;
	//ShowArray(arr, size);
	//int a = 5, b = 8, c = 9;
	//cout << a << b << c;
	//int max = FindMax(a, b, c);
	//max++;
	//cout << "Max = " << max << endl;
	//cout << a << b << c;
	//int* maxxptr = FindMax(&a, &b, &c);
	//cout << "Max element: " << *maxxptr << endl;
	//(*maxxptr)++;
	//cout << "Max element: " << *maxxptr << endl;
	//cout << a << b << c;
	//a = 5;
	//int* pa = &a; // вказівник має бути того самого типу що і a (int); зберігає адресу комірки;  займає 4B 
	//b = 10;
	//int* pb = &b;
	//cout << "a = " << a << endl;
	//Change(&a);
	//cout << "a = " << a << endl;
	//Change(&a);
	//cout << "a = " << a << endl;
	//Change(&a);
	//cout << "a = " << a << endl;
	//cout << "a = " << a << endl;     // значення
	//cout << "pa = " << pa << endl;   // адресу
	//cout << "*pa = " << *pa << endl; // оператор розіменування адреси *p = значення
	//cout << "b = " << b << endl;
	//cout << "pb = " << pb << endl;
	//cout << "*pb = " << *pb << endl; 
	//cout << a + b << endl;
	//cout << *pa + *pb << endl;
	//pa = &b;  //& - амперсанд
	//cout << "b  = " << b << endl;
	//cout << "*pa  = " << *pa << endl;
	//cout << "*pb  = " << *pb << endl;
	//*pa += 2; 
	//cout << "b  = " << b << endl;
	//cout << "*pa  = " << *pa << endl;
	//cout << "*pb  = " << *pb << endl; 
	//const int size2 = 10;
	//int arr2[size2]{};
	//int* parr = &arr2[0];
	//cout << arr2[0] << endl;
	//cout << parr << endl; // адреса

	////for (int i = 0; i < size2; i++)
	////{
	////	arr2[i] = rand() % 100;
	////	cout << arr2[i] << " ";
	////}

	//cout << endl;
	//for (int i = 0; i < size2; i++)
	//{
	//	*(parr + i) = rand() % 100;
	//}
	//for (int i = 0; i < size2; i++)
	//{
	//	cout << *(parr + i) << " ";
	//}
	//cout << " parr " << parr << endl;
	//cout << "arr2 " << arr2 << endl;
	//cout << *parr << endl;
	//cout << parr + 1 << endl;
	//cout << *parr + 1 << endl;

	//for (int i = 0; i < size2; i++)
	//{
	//	*parr = rand() % 100;
	//	// parr++
	//	parr++; 
	//}
//parr = &arr2[0];

	//for (int i = 0; i < size2; i++)
	//{
	//	cout << *parr << " ";
	//	parr++;//}

	//cout << a << endl; 
	//a + 1;              
	//cout << a << endl;
	//a++;               
	//cout << a << endl;

	//int* newptr = arr2;
	//*newptr = 0;
	//newptr += 3;
	//*newptr = 0;

	//parr = arr2;
	//for (int i = 0; i < size2; i++)
	//{
	//	cout << *parr << ' ';

	//	parr++;
	//}
	//parr--; 
	//for (int i = 0; i < size2; i++)
	//{
	//	cout << *parr << ' ';
	//	parr--;
	// //}

}
