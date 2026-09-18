//#include <iostream>
// //#include <iomanip>
//using namespace std;
//int main()
//{
//	/*
////Масив - набір однотипних даних, обєднаний загальним імям
//	int train [3];
//	train[0] = 3;
//	train[1] = 1;
//	train[2] = 4;
//	cout << "Vagon 1 : " << train[0] << endl;
//	cout << "Vagon 2 : " << train[1] << endl;
//	cout << "Vagon 3 : " << train[2] << endl;
//
//
//	const int size = 12;
//	//cin >> size; //100000000000000000
//	int marks[size];
//	marks[0] =
//		marks[1] = 2;
//		marks[2] = 3;
//		marks[3] = 12;
//		marks[4] = 12;
//		marks[5] = 12;
//		marks[6] = 12;
//		//....
//		//marks[12] = 12; тільки до 10
//		cout << "Marks:" << marks[0] << " " << marks[6] << " " << marks[2];
//
//		//1
//		int arr[5];
//		//2
//		const int size = 5;
//		double arr[size];
//		*/
//
//
//
//		//Перший спосіб ініціалізації при створенні
//
//	const int size = 10; // основна задає всім size
//	int arr[size] = { 1,2,3,4,5,6,7,8,9,10, };
//	for (int i = 0; i < size; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//
//
//	int arr2[size] = { 1,2,3 };
//	for (int i = 0; i < size; i++)
//	{
//		cout << arr2[i] << " ";
//	}
//	cout << endl;
//
//
//	int arr3[size] = { 1 };
//	arr3[5] = 77;
//	for (int i = 0; i < size; i++)
//	{
//		cout << arr3[i] << " ";
//	}
//	cout << endl;
//

	//2.ініціалізація масиву за допомогою циклу	 //переробити
	//int arr4[size]{};
	//for (int i = 0; i < size; i++)
	//{
	//	cout << "Enter number << i++" << " ->";
	//	cin >> arr4[i];
	//}
	//for (int i = 0; i < size; i++)
	//{
	//	cout << arr4[i] << " ";
	//}

	//const int SIZE = 10;
	//int summa = 0;
	//int first_negative;
	//int last_positive;
	//int arr5[SIZE]{ 5,7,-8,-9,14,-2,-3,7,8,1 };
	////int arr5[SIZE]{ -10,-11,-8,-9,-14,-2,-3,-7,-8,-1 };

	//int max = arr5[0]; int min = arr5[0];

	//for (int i = 0; i < SIZE; i++)
	//{
	//	cout << arr5[i] << " ";
	//}
	//for (int i = 0; i < SIZE; i++)
	//{
	//	if (arr5[i] < 0) {
	//		first_negative = arr[i];
	//		break;
	//	}
	//	for (int i = SIZE -1; i >=0; i--)
	//	{
	//		if (arr5[i] > 0) {
	//			last_positive = arr[i];
	//			break;
	//		}
	//	}



	//	if (arr5[i] < 0) {
	//		summa += arr[i];

	//		if (arr5[i] > max) {
	//			max = arr5[i];
	//	}
	//		if (arr5[i] < min) {
	//			min = arr5[i];
	//	}
	//   }
	//}
	//cout << "\nSumma neg elements:" << summa << endl;
	//cout << "\nMax  elements:" << summa << endl;
	//cout << "\nMin elements:" << summa << endl;


	//1.Оголосити одновимірний масив з 10 елементів типу int.
	/*Заповнити його значеннями з клавіатури, вивести на екран та
		підрахувати добуток елементів масиву*/
	//const int size = 10;
	//int num[size];
	//
	//for (int i = 0; i < size; i++)
	//{
	//	cout << "Enter number " << i << " -> ";
	//	cin >> num[i];
	//}
	//
	//for (int i = 0; i < size; i++)
	//{
	//	cout << num[i] << " ";
	//}
	//
	//int dobutok = 1;
	//for (int i = 0; i < size; i++)
	//{
	//	dobutok *= num[i];
	//}
	//cout << "\nProduct of array elements: " << dobutok << endl;


		//2.Оголосити одновимірний масив з 7 елементів типу int.
		/*Заповнити його випадковими значеннями в діапазоні[-12.. + 50]та
		вивести на екран.Підрахувати кількість відємних та додатніх елементів масиву.*/
		//
		//const int size = 7;
		//int num[size];
		//int negative = 0;
		//int positive = 0;

		//for (int i = 0; i < size; i++)
		//{
		//	num[i] = rand() % 63 - 12;
		//	cout << num[i] << " ";

		//	if (num[i] < 0) {
		//		negative++;

		//	}
		//	if (num[i] > 0)
		//	{
		//		positive++;

		//	}
		//}
		//	cout << "\nnumber of negative elements: " << negative << endl;
		//	cout << "number of positive elements: " << positive << endl;
		//
		//






	//3.Оголосити, проініціалізувати початковими значеннями та вивести
	//одновимірний масив з 7 елементів типу long.
	//Визначити суму парних елементів масиву

	//const long size = 7;
	//long num[size] = {1,2,3,4,5,6,7};
	//long sum_doubles = 0;
	//for (long i = 0; i < size; i++)
	//{
	//  cout << num[i] << " ";
	//	if (num[i] % 2 == 0) {
	//		 sum_doubles += num[i];
	//
	//	}
	//}
	//cout<<"суму парних елементів масиву: " << sum_doubles;


	//4.Утворити одновимірний масив розміром 10.(пустий) 
	// ///for = 1 2 3 ....10
	//(2 * *1, 2 * *2, 2 * *3, 2 * *4, 2 * *5
	//Заповнити його числами, які є степенями 2: (2, 4, 8, 16, 32, ....)
	//Вивести елементи масиву на екран у прямому і оберненому порядку.

	//int SIZE [10];
	//for (int i = 0; i < 10; i++)
	//{
	//	SIZE[i] = pow(2, i);
	//	cout << SIZE[i] << " " ;
	//}
	//cout << endl;
	//for ( int i = 9; i >=0 ; i--)
	//{
	//	cout << SIZE[i] << " ";
	//}

	//5.Дано одновимірний масив.Замінити всі від’ємні елементи їх модулями.if (arr[i] < 0) arr[i] = arr[i] * -1;

	//const int size = 10;
	//int arr[size] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
	//
	//for (int i = 0; i < size; i++)
	//{
	//	if (arr[i] < 0) {
	//		arr[i] = arr[i] * -1;
	//	}
	//}
	//
	//for (int i = 0; i < size; i++)
	//{
	//	cout << arr[i] << " ";
	//}



	//}