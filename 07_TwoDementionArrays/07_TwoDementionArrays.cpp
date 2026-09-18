//
//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//
//int main()
//{
//	/*srand(time(0));*/ // нова точка відправки 
//	
//	int a;
//	a = rand() % 10; //0...9
//	cout << a << endl;
//	a = rand() % 10;
//	cout << a << endl;
//	a = rand() % 10;
//	cout << a << endl;
//	a = rand() % 10;
//	cout << a << endl;
//
//	for (int i = 0; i < 15; i++)
//	{
//		a = rand() % 10; //0...9
//		cout << a << endl;
//	}
//	cout << endl;
//
//	for (int i = 0; i < 15; i++)
//	{
//		a = rand() % 10; //0...9
//		cout << a << endl;
//	}
//	cout << endl;
//
//	for (int i = 0; i < 15; i++)
//	{
//		a = rand() % 100 + 1; //1...100
//		cout << a << endl;
//	}
//	cout << endl;
//
//	 //10...99
//	for (int i = 0; i < 15; i++)
//	{
//		a = 10 + rand() % 90;
//		cout << a << endl;
//	}
//	cout << endl;
//
//	// 8...12
//	for (int i = 0; i < 15; i++)
//	{
//		a = rand() % 5 + 8;
//		cout << a << endl;
//	}
//	cout << endl;
//
//	cout << "--------------------------------" << endl;
//	 //заповнити масив рандомними числами
//	const int size = 10;
//	int arr[size];
//	for (int i = 0; i < size; i++)
//	{
//		arr[i] = rand() % 100; 
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//
//	cout << "-----------Two dimension array-----------------------------" << endl;
//	const int rows = 4; // рядки (номер поверху)
//	const int cols = 5; // колонки (номер квартири)
//	int array[rows][cols]{};
//
//	for (int i = 0; i < rows; i++)
//	{
//		int max = array[i][0]; 
//		for (int j = 0; j < cols; j++)
//		{
//			array[i][j] = rand() % 100;
//			cout << setw(4) << array[i][j] << " ";
//			if (array[i][j] > max) {
//				max = array[i][j]; 
//			}
//		}
//		cout << "  Max element in row " << i << " is -> " << max << endl;
//	}
//	cout << endl;
//
//	int array1[3][3] = { { 1,2,3 }, { 4,5,6 }, { 7,8,9 } };
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cout << array1[i][j] << " "; 
//		}
//		cout << endl;
//	}
//
//
//
////Практика
//
//
///*1.Дано масив розміром 4×3 з елементами цілого типу.
//Визначити кількість елементів відмінних від нуля.*/
//
//const int rows =4;
//const int cols =3;
//int numbers[rows][cols]{};//оголошення 2вимірного масиву 4*3, усі елененти на початку 0
//int count = 0;// лічильник який рахує ненулові елементи
//
//for (int i = 0; i < rows; i++)//цикл по рядках (і = 0..4)
//{
//	
//	for (int j = 0; j < cols; j++) //цикл по стовпцях (j=0..3
//	{
//		numbers[i][j]= rand() % 10;// заповнюємо клітинку [i][j] випадковим числом від 0 до 9
//		cout << numbers[i][j] << " ";// виводимо ці числа на екран
//
//		if (numbers[i][j] != 0) {
//			count++; //якщо не нуль — збільшуємо лічильник на 1
//	  }
//		
//	}
// cout << endl;
//}
//cout <<"кількість елементів відмінних від нуля: " << count << endl;
//
///*2.Дано масив розміром 3×3 з елементами цілого типу.
//Визначити кількість елементів які б дорівнювали нулю.*/
//	
//	  const int rows = 3;
//	  const int cols = 3;
//	  int numbers[rows][cols]{};//оголошення 2вимірного масиву 3*3, усі елененти на початку 0
//	  int count = 0;// лічильник який рахує нулові елементи
//
//	  for (int i = 0; i < rows; i++)//цикл по рядках (і = 0..3)
//	  {
//
//		  for (int j = 0; j < cols; j++) //цикл по стовпцях (j=0..3
//		  {
//			  numbers[i][j] = rand() % 10;// заповнюємо клітинку [i][j] випадковим числом від 0 до 9
//			  cout << numbers[i][j] << " ";// виводимо ці числа на екран
//
//			  if (numbers[i][j] == 0) {
//				  count++; //якщо  нуль — збільшуємо лічильник на 1: тобто коли умова вірна
//			  }
//
//		  }
//		  cout << endl;
//	  }
//	  cout << "Number of elements that are equal to zero:  " << count << endl;
//  
//
///*3.Дано масив розміром 7×3 з елементами цілого типу.
//Визначити кількість елементів, модуль яких менший 12. (-20 + rand() % 40)*/
//
//	  const int rows = 7;
//	  const int cols = 3;
//	  int num[rows][cols]{};
//	  int a = 0;
//	  for (int i = 0; i < rows; i++)
//	  {
//  		for (int  j = 0; j < cols; j++)
//  		{
//  			num[i][j] = -20 + rand() % 40;
//  			cout << num[i][j] << " ";
//  			int modul = (num[i][j] < 0) ? -num[i][j] : num[i][j];//перевіряємо і якщо що перетворюємо від'ємне число на додатнє
//  		
//  			int modul;
//  			if (num[i][j] < 0) {
//  				modul = -num[i][j]; // Перетворюємо від'ємне число на додатне
//  			}
//  			else {
//  				modul = num[i][j];  // Залишаємо додатне число як є
//  			}
//  
//  			if (modul < 12) {
//  				a++;
//  			}
//  		}
//	  }
//	  cout << "number of elements whose modulus is less than 12: " << a << endl;
//
//
//  /*4.Дано масив розміром 4×5 з елементами цілого типу(позитивні та від’ємні).
//  Визначити кількість позитивних елементів.*/
//
//	  const int rows = 4;
//	  const int cols = 5;
//	  int arr[rows][cols]{};//оголошення 2вимірного масиву
//	  int positive = 0;//лічильник
//	  for (int i = 0; i < rows; i++)
//	  {
//  		for (int j = 0; j < cols; j++)
//  		{
//  			arr[i][j] = -20 + rand() % 40;
//  			cout << arr[i][j] << " ";
//  
//  			if (arr[i][j] > 0) {
//  				positive ++;//рахує КІЛЬКІСТЬ  (positive += arr[i][j] — рахує СУМУ)
//  			}
//  		}
//	  }
//	  cout << "Count positive numbers: " << positive << endl;
//
////5.Дано масив розміром 5×4 з елементами дійсного типу(додатні та від’ємні).
////Визначити добуток всіх додатніх елементів.
//	  const int rows = 5;
//	  const int cols = 4;
//	  double arr[rows][cols]{};
//	  int positive = 0;
//	  double product = 1;
//	  for (int i = 0; i < rows; i++)//рядки
//	  {
//  		for (int  l = 0; l < cols; l++)// стовпчики
//  		{
//  			arr[i][l] = -20 + rand() % 40;
//  			cout << arr[i][l] << " ";
//  			if (arr[i][l] > 0) {
//  				product *= arr[i][l];
//  			}
//  		}
//  		cout << endl;
//	  }
//	  cout << "Product positive numbers: " << product << endl;
//
///*6.Дано масив розміром 5×4 з елементами дійсного типу(позитивні та від’ємні).
//Визначити добуток всіх від’ємних елементів.*/
//	  const int rows = 5;
//	  const int cols = 4;
//	  double arr[rows][cols]{};
//	  double product = 1;
//	  int negative = 0;
//	  for (int  i = 0; i < rows; i++)
//	  {
//  		for (int j = 0; j < cols; j++)
//  		{
//  			arr[i][j] = -20 + rand() % 40;
//  			cout << arr[i][j] << " ";
//  			if (arr[i][j] < 0) {
//  				product *= arr[i][j];
//  			}
//  		}
//  		cout << endl;
//	  }
//	  cout << "Product negative numbers: " << product << endl;
//
///*7.Дано масив розміром 4×4 з елементами цілого типу.Визначити кількість
//елементів, які б при діленні на 6 давали залишок 1. 13 % 6 = 1*/
//
//	  const int rows = 4;
//	  const int cols = 4;
//	  int arr[rows][cols]{};
//	  int some_elem = 0;
//	  for (int i = 0; i < rows; i++)
//	  {
//  		for (int j = 0; j < cols; j++)
//  		{
//  			arr[i][j] = -20 + rand() % 40;
//  			cout << arr[i][j] << " ";
//  			if (arr[i][j] % 6 == 1) {
//  				some_elem++;
//  			}
//  		}
//  		cout << endl;
//	  }
//	  cout << "Count element / 6 == 1: " << some_elem << endl;
//
///*8.Дано масив розміром 5хб цілого типу.Знайти мінімальний елемент*/
//	const int rows = 5;
//	const int cols = 6;
//	int arr[rows][cols]{};
//
//	for (int i = 0; i < rows; i++)
//	{
//		arr[i][0] = -20 + rand() % 40;
//		int min = arr[i][0];
//		cout << arr[i][0] << " ";
//
//		for (int j = 1; j < cols; j++)
//		{
//			arr[i][j] = -20 + rand() % 40;
//			cout << arr[i][j] << " ";
//
//			if (arr[i][j] < min) {
//				min = arr[i][j];
//			}
//		}
//		cout << "  Min element in row " << i << " is -> " << min << endl;
//	}
//
///*9.Дано масив розміром 5×6 цілого типу.Знайти максимальний елемент.*/
//
//	const int rows = 5;
//	const int cols = 6;
//	int arr[rows][cols]{};
//
//	for (int i = 0; i < rows; i++)
//	{
//		arr[i][0] = -20 + rand() % 40;
//		int max = arr[i][0];
//		cout << arr[i][0] << " ";
//
//		for (int j = 1; j < cols; j++)
//		{
//			arr[i][j] = -20 + rand() % 40;
//			cout << arr[i][j] << " ";
//
//			if (arr[i][j] > max) {
//				max = arr[i][j];
//			}
//		}
//		cout << "  Max element in row " << i << " is -> " << max << endl;
//	}
//
///*10.Дано масив розміром 5×4 з елементами дійсного типу(позитивні та від’ємні).
//Визначити суму всіх від’ємних елементів.*/
//	
//	const int rows = 5;
//	const int cols = 4;
//	double arr[rows][cols]{};
//	double sum_neg = 0;
//	
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			arr[i][j] = -20 + rand() % 40;
//			cout << arr[i][j] << " ";
//			if (arr[i][j] < 0) {
//				sum_neg += arr[i][j];
//			}
//		}
//		cout << endl;
//	}
//	cout << "\nSumma negative numbers = " << sum_neg << endl;
//	
//}