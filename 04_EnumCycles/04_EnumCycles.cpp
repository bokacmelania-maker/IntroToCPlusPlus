#include <iostream>
using namespace std;

int main()
{
	//const int USA = 1;
	//const int France = 33;
	//const int Ukraine = 380;
	//const int Italy = 39;
	//const int Australia = 61;


	////enum (const int) - це набір іменованих цілочисельних констант.
	//enum countries { USA = 1 , France = 33, Ukraine = 380,
	//	Italy = 39, Australia = 61};
	//cout << USA << endl;
	//cout << Ukraine << endl;
	////USA = 15; - const variable

	//enum coins {
	//	penny = 1, nickel = 5, dime = 10,
	//	quarter = 25, half = 50, dollar_coin = 100
	//};

	//enum genres { Comedy, Fantasy, Novel, Opovidania, FairyTales };

	//int a;
	//genres genre;
	//genre = Comedy;

	//string g;
	//g = "Comedy";
	//g = "Novel";
	//g = "Opovidania";
	//g = "Blablablabla";
	//g = "superpuperbook";





	//cout << Comedy << endl;
	//cout << Fantasy << endl;
	//cout << Novel << endl;
	//cout << Opovidania << endl;
	//cout << FairyTales << endl;
	//int coin;
	//cout << "Enter value of American coin : ";
	//cin >> coin;
	//switch (coin)
	//{
	//case penny:cout << "Penny is 1 cent" << penny << endl;break;
	//case nickel:cout << "Nickel is 5 cent" << endl;	break;
	//case dime:cout << "Dime is 10 cent" << endl;break;
	//case quarter:cout << "Quarter is 25 cent" << endl;break;
	//case half:cout << "Half is 50 cent" << endl;break;
	//case dollar_coin:cout << "dollar_coin is 100 cent" << endl;break;
	//default:cout << "Unknown coin" << endl;	break;
	//}


	//while (true)//Цикл з передумовою
	//{

	//}
	//do//Цикл з постумовою
	//{

	//} while (true);
	//for (size_t i = 0; i < length; i++)Цикл з параметрами
	//{

	//}
	//int counter = 20;
	//while (counter < 15)
	//{
	//	++counter;//increment
	//	cout << "I did " << counter << " set of squats." << endl;
	//}

	//int seats = 20;
	//do
	//{
	//	++seats;//increment
	//	cout << "I did " << seats << " set of squats." << endl;

	//} while (seats < 15);



	//float a, b, res;
	//char key;
	/*
	cout << "Enter a : "; cin >> a;
	cout << "Enter b : "; cin >> b;
	cout << "\tChoose the operation : " << endl;;
	cout << " [+] - add number" << endl;
	cout << " [-] - sub number" << endl;
	cout << " [*] - multy number" << endl;
	cout << " [/] - div number" << endl;
	cout << " [e] - exit" << endl;
	cin >> key;
	//Ctrl+A Ctrl+K Ctrl + F - formatting

	while (key != 'e')
	{
		switch (key)
		{
		case 'e':
			cout << "Have a nice day!!! Goodbye" << endl;
			break;

		default:
			cout << "Error choice!!!!" << endl;
			break;
		case '+':
			res = a + b;
			cout << "Resualt = " << res << endl;
			break;
		case '-':
			res = a - b;
			cout << "Resualt = " << res << endl;
			break;
		case '*':
			res = a * b;
			cout << "Resualt = " << res << endl;
			break;
		case '/':
			res = a / b;
			cout << "Resualt = " << res << endl;
			break;
		}
		cout << "Enter a : "; cin >> a;
		cout << "Enter b : "; cin >> b;
		cout << "\tChoose the operation : " << endl;;
		cout << " [+] - add number" << endl;
		cout << " [-] - sub number" << endl;
		cout << " [*] - multy number" << endl;
		cout << " [/] - div number" << endl;
		cout << " [e] - exit" << endl;
		cin >> key;
	}
	*/
	/*
	do
	{

		cout << " [+] - add number" << endl;
		cout << " [-] - sub number" << endl;
		cout << " [*] - multy number" << endl;
		cout << " [/] - div number" << endl;
		cout << " [e] - exit" << endl;
		cout << "\tChoose the operation : ";
		cin >> key;
		cout << "Enter a : "; cin >> a;
		cout << "Enter b : "; cin >> b;
		switch (key)
		{
		case 'e':
			cout << "Have a nice day!!! Goodbye" << endl;
			break;

		default:
			cout << "Error choice!!!!" << endl;
			break;
		case '+':
			res = a + b;
			cout << "Resualt = " << res << endl;
			break;
		case '-':
			res = a - b;
			cout << "Resualt = " << res << endl;
			break;
		case '*':
			res = a * b;
			cout << "Resualt = " << res << endl;
			break;
		case '/':
			res = a / b;
			cout << "Resualt = " << res << endl;
			break;
		}

	} while (key != 'e');



	for (int i = 0; i < 10; i++)
	{
		cout << i << " ";
	}
	cout << endl;
	for (int i = 1; i <= 10; i++)
	{
		cout << i << " ";
	}
	cout << endl;
	int i;
	for (i = 1; i <=10 ; i+=2)
	{
		cout << i << " ";
	}
	cout << endl;
	float x = 1;
	for (; x <= 2; x+=0.2)
	{
		cout << x << " ";
	}
	cout << endl;
	for (int i = 0; i < 5;   )
	{
		cout << i << " ";
		i++;
	}
	cout << endl;
	for (int i = 0; ; i++)
	{
		cout << i << " ";
		if (i == 5)
			break;
	}

	int magicNumber = 2;
	cout << "\n===============================" << endl;
	cout << "\tMy magic number between 1 and 10" << endl;
	cout << "===============================" << endl;
	int user = 0;
	for (int i = 1; i <= 5; i++)
	{
		cout << "Your number ??? --> ";
		cin >> user;
		if (user == magicNumber)
		{
			cout << "Congratulation!!! You are winner!!!!" << endl;
			break;
		}
		else
		{
			cout << "That's not my number!!!" << endl;
		}

		if (i == 5) {
			cout << "You lose! Try againg later!!!" << endl;
		}

	}
		*/

//Класна
//1.Вивести на екран цілі числа від 1 до 100. - while
//int counter = 0;
//while (counter<100)
//{
//	++counter;
//	cout << counter << endl;
//}

//2.Вивести на екран додатні парні числа, які не перевищують 200, та їх кількість. - while
//int start = 2;
//int count = 0;
//while (start <=200){
//	cout << start<<" ";
//	start += 2;
//	count++;
//
//}
//cout<<endl<<"Count:" << count;

//3.Дано N(N > 0).Вводяться N чисел.Знайти суму парних серед цих чисел. - while
//int count_numbers;
//cout << "Enter count numbers:";
//cin >> count_numbers; 
//int i = 0;
//int number;
//int sum = 0;
//while (i < count_numbers)
//{
//	i++;
//	cout << "Enter " << i << "number ";
//	cin >> number;
//	if (number %2 == 0)
//	sum += number;
//}
//cout << "Summa numbers =" << sum << endl;
// 
//4. Годинник б, є щогодини стільки разів, скільки зараз годин.Написати програму, яка підрахує, скільки разів проб, є годинник за 12 годин. for
//int total = 0;
//    for (int hour = 1; hour <= 12; hour++) {
//        total += hour;   
//    }
//cout << "Number of clock strikes in 12 hours: " << total << endl;



//5. Користувач з клавіатури послідовно вводить цілі числа.Щойно користувач ввів 0, необхідно показати на екрані суму всіх введених чисел. for
//int numbers;
//cout << "Enter numbers: \n";
//int sum = 0;
//
//for (; ;)	//(ініціалізація ; умова ; крок)
//{
//	cin >> numbers;
//	if (numbers == 0) {
//		break;
//	}
//	sum += numbers;
//}
//cout << "Summa numbers =" << sum << endl;



// ДЗ
//1.Вивести на екран цілі числа від 14 до 123. - while

//int counter = 13;
//while (counter < 123)
//{
//	counter++;
//	cout << counter << endl;
//}


//2.Вивести на екран додатні непарні числа, які не перевищують 100. - while
//int odd = 1;
//while (odd <= 100) {
//	cout << odd << " ";
//	odd += 2;
//}
//cout << endl;

//3.Дано N (N>0). Вводяться N чисел. Знайти кількість від’ємних серед них. - while

//int count_numbers;
//cout << "Enter count numbers:";
//cin >> count_numbers; 
//int i = 0;
//int number;
//int sum = 0;
//while (i < count_numbers)
//{
//	i++;
//	cout << "Enter " << i << "number ";
//	cin >> number;
//	if (number %2 == 0)
//	sum += number;
//}
//cout << "Summa numbers =" << sum << endl;
////


//4.Вводяться 8 чисел. Знайти добуток та середнє арифметичне цих чисел. - while
//int numbers = 0;
//int all_numbers;
//int dobytok = 1;
//int arithmetic = 0;
//while (numbers < 8) {
//	numbers++;
//	cout << "Enter number: " << endl;
//	cin >> all_numbers;
//	dobytok *= all_numbers;
//	arithmetic += all_numbers;
//
//}					  
//cout << "Dobytok = " << " " << dobytok << endl;
//cout << "Arithmetic mean = " << " " << arithmetic / 8 << endl;

//5.Вивести на екран цілі непарні  числа : 100 98 96 94...4  2 1. - do..while
//int numbers = 100;
//do {
//	cout << numbers<<' ';
//	numbers -=2;
//}
//
//while (numbers >= 1);
//cout << 1;

//6.Написати програму яка обчислює добуток п’яти чисел, які вводяться з клавіатури. - do..while
//int number = 0;
//int count = 1;
//int numbers = 0;
//
//do
//{
//	cout << "Enter number :" << endl;
//	cin >> numbers;
//	count *= numbers;
//	number++;
//
//} while (number<5);
//cout << "Dobytok =" << count << endl;




//На +12 балів :
//7.Напишіть програму знаходження суми чисел менше 50 і кратних 4,використовуючи всі два типи циклів.


//----------for---------------
int sum1 = 0;
for (int i = 0; i < 50; i++)
{
	if (i % 4 == 0) {
		sum1 += i;
	}
}
cout << "Summa numbers : " << sum1 << endl;
//------while------------
int j = 0;
int sum2 = 0;
while (j < 50)
{
	if (j % 4 == 0) {
		sum2 += j;
	}
	j++;
}
cout << "Sum numbers : " << sum2 << endl;
//----do...while-----------
int l = 0;
int sum3 = 0;
do
{
	if (l % 4 == 0) {
		sum3 += l;
	}
	l++;
} while (l < 50);
cout << "Summa numbers : " << sum3 << endl;


 
//8. Вивести на екран усі числа від нуля до введеного користувачем числа.
//int counter = 0;
//int some_number;
//cout << "Enter some number: ";
//cin >> some_number;
//while (counter<some_number)
//{
//	++counter;
//	cout << counter << endl;
//}


//9. Користувач вводить дві межі діапазону, ви-
//вести на екран усі числа з цього діапазону.Передбачити,
//щоб користувач міг вводити межі діапазону в довільному
//порядку.
//■ вивести всі парні числа з діапазону.
//■ вивести всі непарні числа з діапазону.
//■ вивести всі числа, кратні семи.

int start;
cout << "Enter start number: ";
cin >> start;

int end;
cout << "Enter end number: ";
cin >> end;

if (start > end)
{
	int reverse = start;
	start = end;
	end = reverse;
}

cout << "\nAll numbers: ";
for (int i = start; i <= end; i++)
{
	cout << i << " ";
}

cout << "\nEven numbers:" ;
for (int i = start; i <= end; i++)
{
	if (i % 2 == 0) {
		cout << i << " ";
	}
}

cout << "\nOdd numbers:";
for (int i = start; i <= end; i++)
{
	if (i % 2 != 0) {
		cout << i << " ";
	}
}

cout << "\nNumbers multiples(/) 7 : ";
for (int i = start; i <= end; i++)
{
	if (i % 7 == 0) {
		cout << i << " ";
	}
}
cout << endl;





/*10. Користувач вводить дві межі діапазону.По -
рахувати суму всіх чисел діапазону*/
//int summa = 0;
//int start;
//cout << "Enter some number: ";
//cin >> start;
//int end;
//cout << "Enter some number: ";
//cin >> end;
//
//while (start <= end)
//{
//	summa += start;
//	cout << start << endl;
//	++start;
//}
//
//cout << "Summa = " << summa << endl;


//11. Користувач з клавіатури вводить числа.По -
//рахувати їхню суму і вивести на екран, щойно користувач
//введе нуль.

//int numbers;
//cout << "Enter numbers: \n";
//int sum = 0;
//
//for (;;)
//{
//	cin >> numbers;
//	if (numbers == 0) {
//		break;
//	}
//	sum += numbers;
//}
//cout << "Summa numbers =" << sum << endl;







//
}
