//// 02_operators.cpp : This file contains the 'main' function. Program execution begins and ends there.
////
//
#include <iostream>
using namespace std;
int main()
{
	//	// Унарні оператори	++ -- 
	//		//int a = 5;
	//		//int b = -a; // унарний мінус
	//		//std::cout << "b = " << b << std::endl;
	//		//bool c = true;
	//		//bool d = !c; // логічне заперечення
	//		//std::cout << "d = " << d << std::endl;
	//		//int e = 10;
	//		//e++; // інкремент
	//		//std::cout << "e = " << e << std::endl;
	//		//int f = 20;
	//		//f--; // декремент
	//		//std::cout << "f = " << f << std::endl;
	//		//return 0;
	//		// Бінарні оператори - - + * %
	//		//Тернарні-	?:
	//
	//	int a = 5, b = 3;
	//	cout << a + b << endl;
	//	cout << a - b << endl;
	//	cout << a * b << endl;
	//	cout << a / b << endl;
	//	cout << a % b << endl;
	//	cout << 10 % 9 << endl;
	//	cout << 3 % 9 << endl;
	//	cout << 4 % 12 << endl;
	//
	//
	//	// інкремент і декремент ++ --
	//	int c = 8;
	//	cout << "c = " << c << endl;
	//	 c =c + 1;
	//	cout << "c = " << c << endl;
	//	c++;// с = с + 1   postfix form increment
	//	cout << "c = " << c << endl;
	//	++c; //prefix form increment
	//	cout << "c = " << c << endl;
	//
	//	c = c - 1;
	//	cout << "c = " << c << endl;
	//	c--; //postfix form decrement
	//	cout << "c = " << c << endl;
	//	--c; //prefix form decrement
	//	cout << "c = " << c << endl;
	//
	//
	//	int d = 3;
	//	cout << d++ << endl;// ---->
	//	cout << ++d << endl; // <--
	//	cout << d << endl;
	//
	//	d= d +12;
	//	cout << d << endl;
	//	d += 12; // d = d + 12
	//	cout << "d "<<endl;
	//	d -= 12; 
	//	cout << "d "<<endl;
	//	d *= 12; 
	//	cout << "d "<<endl;
	//	d /= 12; 
	//	cout << "d "<<endl;
	//
	//	// Звужуюче перетворення
	//	// 1.Неявне перетворення. 
	//	int A = 23.5;
	//	cout << "A ="  << A << endl;
	//
	//	//Розширююче перетворення
	//	unsigned int salary = 3000000000;
	//	cout << salary << endl;
	//
	//	// 2.Явне перетворення
	//	double num = 2.45;
	//	cout << num << endl;
	//	float num2 = (int)num;
	//	cout << num2 << endl;
	//
	//	//1. Оператори порівняння < > <= >=
	//	//2. Оператори рівності == !=
	//	//3. Логічні оператори && || !
	//
	//	cout << (5 > 2) << endl;
	//	cout << (5 < 2) << endl;
	//	cout << (5 == 2) << endl;
	//	cout << (5 != 2) << endl;
	//	//false 0      true 1
	//
	//	//if (ymova)
	//	//{
	//	//	dia1;
	//	//}
	//	//else
	//	//{
	//	//	dia2;
	//	//}

//
//	int a, b;
//	float res;
//	cout << "Enter number a: "; cin >> a;
//	cout << "Enter number b: "; cin >> b;
//	if (b == 0) {
//		cout << "Can't divide by zero!" << endl;
//	}
//	else {
//		res = (float)a / b;
//		cout << "Res:" << a << "/" << b << "=" << res << endl;
//	}
//
//}
//
//// тернарний оператор ymova ? true :false;
//(b == 0) ? cout << "Error!" << endl;
//cout << "Res:" << a << "/" << b << "=" << (res)float a/b << endl;
//
//
//
//int day;
//cout << "Enter number dat:"; cin >> day;
//if (day == 1)
//{
//	cout << "Monday" << endl;
//}
//else if (day == 2)
//{
//	cout << "Tuesday" << endl;
//}
//else if (day == 3)
//{
//	cout << "Wednesday" << endl;
//}
//else if (day == 4)
//{
//	cout << "Thursday" << endl;
//}
//else if (day == 5)
//{
//	cout << "Friday" << endl;
//}
//else if (day == 6)
//{
//	cout << "Saturday" << endl;
//}
//else if (day == 7)
//{
//	cout << "Sunday" << endl;
//}
//else
//{
//	cout << "Error!" << endl;
//}
//
//if (day <= 1 && day <= 5) {
//	cout << "work day" << endl;
//}
//else if(day <= 6 || day = 7) {
//	cout << "weekend" endl;
//
 /*
float a, b, res;
char key;
cout << "Enter number a :"; cin >> a;
cout << "Enter number b :"; cin >>b;
cout << "Choose the operation:";
cout << "[+] - add numbers" << endl;
cout << "[-] - sub numbers" << endl;
cout << "[*] - multy numbers" << endl;
cout << "[/] - div numbers" << endl;
cin >> key;
if (key == '+') {
	res = a + b;
	cout << "Res =" << res << endl;
}
else if (key == '-') {
	res = a - b;
	cout << "Res =" << res << endl;
}
else if (key == '*') {
	res = a * b;
	cout << "Res =" << res << endl;
}
else if (key == '/') {
	res = a / b;
	cout << "Res =" << res << endl;
}
else {
	cout << "Error choice" << endl;
}



cout << "Enter number a :"; cin >> a;
cout << "Enter number b :"; cin >> b;
cout << "Choose the operation:";
cout << "[+] - add numbers" << endl;
cout << "[-] - sub numbers" << endl;
cout << "[*] - multy numbers" << endl;
cout << "[/] - div numbers" << endl;
cin >> key;

switch (key)
{
case '+':
	res = a + b;
	cout << "Res =" << res << endl;
	break;
case'-':
	res = a - b;
	cout << "Res =" << res << endl;
	break;
case'*':
	res = a * b;
	cout << "Res =" << res << endl;
	break;
case'/':
	res = a / b;
	cout << "Res =" << res << endl;
	break;

default:
	cout << "Error choice" << endl;
	break;
}


int day;
cout << "Enter number day:"; cin >> day;
switch (day)
{
case 1: case 2: case 3: case 4: case 5:
	cout << "work day" << endl;
	break;

default:
	break;
}
  */

  //1. Дано країна.Вивести назву столиці. (5 countries )
  /*
  int country1 = 1;//Japan
  int country2 = 2;//Germany
  int country3 = 3;//China
  int country4 = 4;//Polsha
  int country5 = 5;//Ukraine

  int number;

  cout << "Enter number country:"<<endl;
  cin >> number;
  if(number == 1) {
	  cout << "Tokyo" <<endl;
  }
  else if(number == 2) {
	  cout << "Berlin" << endl;
  }
  else if (number == 3) {
	  cout << "Beijing" << endl;
  }
  else if (number == 4) {
	  cout << "Warsaw" << endl;
  }
  else if (number == 5 ){
	  cout << "Kyiv" << endl;
  }
  else {
	  cout << "Error" << endl;
  }


  int country1 = 1;//Japan
  int country2 = 2;//Germany
  int country3 = 3;//China
  int country4 = 4;//Polsha
  int country5 = 5;//Ukraine

  int number;

  cout << "Enter number country:" << endl;
  cin >> number;

  switch (number)
  {
  case 1:
	  cout << "Tokyo" << endl;
	  break;
  case 2:
	  cout << "Berlin" << endl;
	  break;
  case 3:
	  cout << "Beijing" << endl;
	  break;
  case 4:
	  cout << "Warsaw" << endl;
	  break;
  case 5:
	  cout << "Kyiv" << endl;
	  break;
  default:
	  cout << "Enter Error" << endl;
	  break;
  }
  */

  //2.Дано номер дня тижня(1 – понеділок і т.д.).Визначити чи це вихідний день.

  //int day;
  //cout << "Enter number day:"; cin >> day;
  //if (day >= 1 && day <= 5) {
  //	cout << "work day" << endl;
  //}
  //else if (day == 6 || day == 7) {
  //	cout << "Weekend" << endl; 
  //}
  //else {
  //	cout << "Error" << endl; 
  //}
  //
  //
  //int day;
  //cout << "Enter number day:"; cin >> day;
  //switch (day)
  //{
  //case 1: case 2: case 3: case 4: case 5:
  //	cout << "work day" << endl;
  //	break;
  //case 6: case 7:
  //	cout << "Weekend" << endl;
  //	break;
  //default:
  //	cout << "Error"<<endl;
  //	break;
  //}




  //3.Дано курс корабля(північ, південь, захід, схід).Як
  //зміниться курс корабля після команди «назад» ?

  //int course;
  //
  //cout << "Enter num:" << endl << "1 - north " << endl << "2 - south " << endl << "3 - west" << endl << "4 - east" << endl;
  //cin >> course;
  //
  //if (course == 1)
  //cout << "south" << endl;
  //else if (course == 2)
  //cout << "north" << endl;
  //else if (course == 3)
  //cout << "east" << endl;
  //else if (course == 4)
  //cout << "west" << endl;
  //else
  //cout << "Error" << endl;
  //
  //int course;
  //cout << "Enter num:" << endl << "1 - north " << endl << "2 - south " << endl << "3 - west" << endl << "4 - east" << endl;
  //cin >> course;

  //switch (course)
  //{ 
  //case 1:
  //	cout << "south" << endl;
  //	break;
  //case 2:
  //	cout << "north" << endl;
  //	break;
  //case 3:
  //	cout << "east" << endl;
  //	break;
  //case 4:
  //	cout << "west" << endl;
  //	break;
  //default:
  //	cout << "Error" << endl;
  //	break;
  //}



  //4.Дано тварина(номер тварини. 1 – жираф. 2 – орел.тощо). (7 animals)
  //Вивести клас, до якого відноситься тварина(хижак, травоїдна).

  /*int animal;
  cout << "Enter num:\n 1 - Rabbit  \n 2 - Cat  \n 3 - Horse  \n 4 - Lion \n 5 - Snake \n 6 - Tiger \n 7 - Hippo  " << endl;

  cin >> animal;

  if (animal == 1 || animal == 3 || animal == 7)
  cout << "Herbivore" << endl;

  else if (animal == 2 || animal == 4 || animal == 5 || animal == 6)
  cout << "Carnivore" << endl;

  else
  cout << "Error" << endl*/;

  //int animal; 
  // cout << "Enter num:\n 1 - Rabbit  \n 2 - Cat  \n 3 - Horse  \n 4 - Lion \n 5 - Snake \n 6 - Tiger \n 7 - Hippo  " << endl;
  //
  //cin >> animal;
  //
  //switch (animal)
  //{case 1: case 3 : case 7:
  //	cout<<"Herbivore" << endl;
  //	break;
  //case 2: case 4: case 5: case 6:
  //	cout<< "Carnivore" << endl;
  //	break;
  //
  //default:
  //	cout << "Error" << endl;
  //	break;
  //}
  //

  //HomeWork
  //1
  //int side_1;
  //cout << "Enter first side: " << endl;
  //cin >> side_1;

  //int side_2;
  //cout << "Enter second side: " << endl;
  //cin >> side_2;

  //int side_3;
  //cout << "Enter third side: " << endl;
  //cin >> side_3;

  //int side_4;
  //cout << "Enter fourth side: " << endl;
  //cin >> side_4;

  //if (side_1 == side_2 && side_2 == side_3 && side_3 == side_4)
  // cout << "This is square " << endl;
  //else
	 // cout << "This is rectangle" << endl;



//  int side_1;
//  cout << "Enter first side: " << endl;
//  cin >> side_1;
//
//  int side_2;
//  cout << "Enter second side: " << endl;
//  cin >> side_2;
//
//  int side_3;
//  cout << "Enter third side: " << endl;
//  cin >> side_3;
//
//  int side_4;
//  cout << "Enter fourth side: " << endl;
//  cin >> side_4;
//
//  int result;
//
//
//switch (side_1 == side_2 && side_2 == side_3 && side_3 == side_4)
//{
//case 1:
//	cout << "This is square " << endl;
//	break;
//case 0:
//	 cout << "This is rectangle " << endl;
//	break;
//default:
//	break;

//2	.Дано вік дитини. Виначити чи дитина по віку може навчатися у школі, чи може відвідувати дитсадок і т.і

//  int age;
//  cout << "Enter your age-> " << endl;
//  cin >> age;
//
//if (age <= 0)
//	  cout << "Error" << endl;
//else  if (age < 6)
//	  cout << "You attend kindergarten" << endl;
//  else if (age< 18)
//	  cout << "You attend  school" << endl;
//  else if ( age < 24)
//	  cout << "You attend university" << endl;
//
//  else if (age < 60)
//	  cout << "You attend work" << endl;
//  else if (age < 120)
//	  cout << "You are retired" << endl;
//  else
//	  cout << "Error"<<endl ;

  
//int age;
//cout << "Enter your age-> " << endl;
//cin >> age;
//
//int ages = (age > 0) + (age >= 6) + (age >= 18) + (age >= 24) + (age >= 60) +(age >= 120); // перевіряє умови (bool) false 0; true 1 .якщо правильно то спрацьовує, ні йде далі 
//
//switch (ages)
//{
//case 1:
//	cout << "You attend kindergarten" << endl;
//	break;
//case 2:
//	cout << "You attend  school" << endl;
//	break;
//case 3 :
//	cout << "You attend university" << endl;
//	break;
//case 4:
//	cout << "You attend work" << endl;
//	break;
//case 5:
//	cout << "You are retired" << endl;
//	break;
//case 6:
//	cout << "Error wrong age(>120)" << endl;
//	break;
//default:
//	cout << "Error wrong age(0 or <0)" << endl;
//	break;
//}

//3
//Дано 3 числа. Визначити чи рівно два серед них від’ємні.

//int num1;
//cout << "Enter number 1 -> " << endl;
//cin >> num1;
//
//int num2;
//cout << "Enter number 1 -> " << endl;
//cin >> num2;
//
//int num3;
//cout << "Enter number 1 -> " << endl;
//cin >> num3;
//
//if (num1 < 0 && num2 < 0 && num3 >= 0)
//	cout << "There are 2 negative numbers\n";
//else if (num1 < 0 && num3 < 0 && num2 >= 0)
//	cout << "There are 2 negative numbers\n";
//else if (num2 < 0 && num3 < 0 && num1 >= 0)
//	cout << "There are 2 negative numbers\n";
//else
//cout << "There aren't 2 negative numbers\n";
//
//
//int num1;
//cout << "Enter number 1 -> " << endl;
//cin >> num1;
//
//int num2;
//cout << "Enter number 1 -> " << endl;
//cin >> num2;
//
//int num3;
//cout << "Enter number 1 -> " << endl;
//cin >> num3;
//
//int numbers = (num1 < 0 && num2 < 0 && num3 >= 0) + (num1 < 0 && num3 < 0 && num2 >= 0) + (num2 < 0 && num3 < 0 && num1 >= 0);
//
//switch (numbers)
//{
//case 1:
//	cout << "There are 2 negative numbers\n";
//	break;
//default:
//	cout << "There aren't 2 negative numbers\n";
//	break;
//}


//4
//.Дано число. Визначити чи належить воно відрізку [2, 5] або [-1, 1].

//int number;
//cout << "Enter number -> " << endl;
//cin >> number;
//if (number >= 2 && number <= 5)
//cout << "Enter number belongs to the interval [2, 5]";
//else if (number >= -1 && number <= 1)
//cout << "Enter number belongs to the interval [-1, 1]";
//else
//cout << "Error" << endl;
//
//int number;
//cout << "Enter number -> " << endl;
//cin >> number;
//int interval = (number >= 2 && number <= 5)*1 + (number >= -1 && number <= 1)*2 ;
//
//switch (interval)
//{
//case 1 :
//	cout << "Enter number belongs to the interval [2, 5]";
//	break;
//case 2 :
//	cout << "Enter number belongs to the interval [-1, 1]";
//	break;
//;
//default:
//	cout << "Error" << endl;
//	break;
//}


//5.Дано три числа. Визначити чи тільки два з них рівні між собою.

//int num1;
//cout << "Enter number 1 -> " << endl;
//cin >> num1;
//
//int num2;
//cout << "Enter number 2 -> " << endl;
//cin >> num2;
//
//int num3;
//cout << "Enter number 3 -> " << endl;
//cin >> num3;
//
//if (num1 == num2 && num2 != num3)
//	cout << "Two of them are equal to each other\n";
//else if (num2 == num3 && num1 != num2)
//	cout << "Two of them are equal to each other\n";
//else if (num1 == num3 && num2 != num3)
//	cout << "Two of them are equal to each other\n";
//else
//cout << "Two of them aren't equal to each other\n";
//
//
//
//int num1;
//cout << "Enter number 1 -> " << endl;
//cin >> num1;
//
//int num2;
//cout << "Enter number 2 -> " << endl;
//cin >> num2;
//
//int num3;
//cout << "Enter number 3 -> " << endl;
//cin >> num3;
//
//int _2_are_the_same = (num1 == num2 && num2 != num3) + (num2 == num3 && num1 != num2) + (num1 == num3 && num2 != num3);
//
//switch (_2_are_the_same)
//{  case 1:
//	cout << "Two of them are equal to each other\n";
//	break;
//
//default:
//	cout << "Two of them aren't equal to each other\n";
//	break;
//}

//6.Дано 3 числа. Визначити чи всі числа непарні. Числа вводяться з клавіатури
//int num1;
//cout << "Enter number 1 -> " << endl;
//cin >> num1;
//
//int num2;
//cout << "Enter number 2 -> " << endl;
//cin >> num2;
//
//int num3;
//cout << "Enter number 3 -> " << endl;
//cin >> num3;
//
//if (num1 % 2 != 0 && num2 % 2 != 0 && num3 % 2 != 0)
//cout << "Numbers are odd" << endl;
//else
//cout << "Numbers or number aren't odd"<<endl;
//
//
//
//int num1;
//cout << "Enter number 1 -> " << endl;
//cin >> num1;
//
//int num2;
//cout << "Enter number 2 -> " << endl;
//cin >> num2;
//
//int num3;
//cout << "Enter number 3 -> " << endl;
//cin >> num3;
//
//int odd = (num1 % 2 != 0 && num2 % 2 != 0 && num3 % 2 != 0);
//
//switch (odd)
//{
//case 1 :
//	cout << "Numbers are odd" << endl;
//	break;
//
//default:
//	cout << "Numbers or number aren't odd" << endl;
//	break;
//}

//На додаткові 12 балів(за бажанням) :
////	7.Дано два числа.Якщо вони різні, то поміняти іх місцями.
//int num1;
//cout << "Enter 1 number: " << endl;
//cin >> num1;
//int num2;
//cout << "Enter 2 number: " << endl;
//cin >> num2;
//
//if (num1 != num2)
//cout << "Revers -> " << num2 << " " << num1 << endl;
//else
//cout <<"Numbers are same"<<endl;
//
//int num1;
//cout << "Enter 1 number: " << endl;
//cin >> num1;
//int num2;
//cout << "Enter 2 number: " << endl;
//cin >> num2;
//
//int odd = (num1 != num2);
//
//switch (odd)
//{  
//case 1:
//	cout << "Revers -> " << num2 << " " << num1 << endl;
//	break;
//default:
//	cout << "Numbers are same" << endl;
//	break;
//}


//8.Дано натуральне число а(а > 100 && a < 999).Напишіть програму, що визначає кількість цифр в цьому числі,
//	суму його цифр, і яка виводить на екран першу и останню цифру через два пропуски.
//	777 = 3 числа, сума, сума = 21

//int a ;
//cout << "Enter number >100 and <999: ";
//cin >> a;
//if (a < 100 || a >999){
//	cout << "Error";
//	return 0;
//	
//}
//
//int first = a / 100;
//int second = a / 10 % 10;
//int third = a % 10;
//int sum = (first + second + third);
//
//
//cout <<"Count numbers = 3" << endl; 
//cout << "Summa: " << sum << endl;
//cout << "First: " << first << "  Last: " << third << endl;



//int a;
//
//cout << "Enter number >100 and <999: ";
//cin >> a;
//
//int error = (a < 100 || a >999);
//
//switch (error)
//{
//case 1:
//	cout << "Error";
//	break;
//default:
//	int first = a / 100;
//	int second = a / 10 % 10;
//	int third = a % 10;
//	int sum = first + second + third;
//	cout << "Count numbers = 3" << endl;
//	cout << "Summa: " << sum << endl;
//	cout << "First: " << first << "  Last: " << third << endl;
//	break;
//}

// //9.Дано час(години, хвилини, секунди). Визначити чи час допустимий( наприклад, 25.61.60 – недопустимий).
//
//int hour;
//cout << "Enter count hour: ";
//cin >> hour;
//
//int minutes;
//cout << "Enter count minutes: ";
//cin >> minutes;
//
//int seconds;
//cout << "Enter count seconds: ";
//cin >> seconds;
//
//int result = (hour >=0 && hour < 24) + (minutes >=0 && minutes <= 59) + (seconds >=0 && seconds <= 59);
//
//
//switch (result)
//{  case 3:
//	cout << "time" << " " << hour << "." << minutes << "." << seconds<<" " << "is acceptable";
//	break;
//default:
//	cout << "time" << " " << hour << "." << minutes << "." << seconds << " " << "isn't acceptable";
//	break;
//}


 //10.Написати програму яка в залежності від введеної години виводить: 
 // good night, good day, good evening, good morning.

//int time;
//cout << "Enter time of day: ";
//cin >> time;
//
//if (time >= 0 && time <= 5) {
//	cout << "good night";
//}
//else if (time >= 6 && time <=11) {
//	cout << " good morning";
//}
//else if (time >=12 && time <=17) {
//	cout << "good day";
//}
//else if (time >=18 &&time <= 23) {
//	cout << "good evening";
//}
//else {
//	cout << "Error";
//}
//
//int time;
//cout << "Enter time of day: ";
//cin >> time;
//
//int time_of_day = (time >= 0 && time <= 5) * 1 + (time >= 6 && time <= 11) * 2 + (time >= 12 && time <= 17) * 3 + (time >= 18 && time <= 23) * 4;
//
//switch (time_of_day)
//{	
//case 1 :
//	cout << "good night";
//	break;
//case 2:
//	cout << " good morning";
//	break;
//case 3 :
//	cout << "good day";
//	break;
//case 4:
//	cout << "good evening";
//	break;
//
//default:
//	cout << "Error";
//	break;
//}


//11.Написати програму, яка обчислює та виводить мінімум з трьох введених користувачем чисел 
//int number1;
//cout << "Ener number 1: ";
//cin >> number1;
//
//int number2;
//cout << "Ener number 2: ";
//cin >> number2;
//
//int number3;
//cout << "Enter number 3: ";
//cin >> number3;
//
//
//if (number1 < number2 && number1 < number3) {
//	cout << "number1 - the least  of all";
//}
//else if (number1 > number2 && number2 < number3) {
//	cout << "number2 - the least  of all";
//}
//else if (number1 > number3 && number2 > number3) {
//	cout << "number3 - the least  of all";
//}
//else if (number1 == number3 || number2 == number3|| number2 == number1) {
//	cout << "They are equal to each other ";
//}
//else {
//	cout << "Error";
//}
//
//
//int number1;
//cout << "Ener number 1: ";
//cin >> number1;
//
//int number2;
//cout << "Ener number 2: ";
//cin >> number2;
//
//int number3;
//cout << "Enter number 3: ";
//cin >> number3;
//
//int numbers = (number1 < number2 && number1 < number3) * 1 + (number1 > number2 && number2 < number3) * 2 + (number1 > number3 && number2 > number3) * 3; 
//switch (numbers)
//{
//case 1:
//	cout << "number1 - the least  of all";
//	break;
//case 2:
//	cout << "number2 - the least  of all";
//	break;
//case 3:
//	cout << "number3 - the least  of all";
//	break;
//
//default:
//	cout << "Error";
//	break;
//}														   
//
////
//return 0;
//}








