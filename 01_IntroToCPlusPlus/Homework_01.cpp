#include <iostream>
using namespace std;
int main()
{
//3
	float  diagonal;
	cout << "Enter a TV diagonal (inch) - > ";
	cin >> diagonal;

	float cm = 2.54;
	float overal = diagonal * cm;
	
	cout << "TV diagona"<<overal <<"cm"<< endl;

//4
	float g;
	cout << "Витрата корму за 1 день (г) -> ";
	cin >> g;
	float kg = g /1000;
	float day = kg * 30;
	cout << "Закупівля корму на 30 днів(кг) -> " << day<<endl;
//homework 1
	float num_1;
	cout << "Enter first num: ";
	cin >> num_1;
	float num_2;
	cout << "Enter second num: ";
	cin >> num_2;
	float num_3;
	cout << "Enter third num: ";
	cin >> num_3;
	float overal_sum = num_1 + num_2 + num_3;
	cout << num_1 << " + " << num_2 << " + " << num_3 << " = " << overal_sum << endl;
//2
	float a;
	cout << "Enter first num : ";
	cin >> a;

	float b;
	cout << "Enter second num:";
	cin >> b;

	float ab = (a+b)/2;

	cout << "Arithmetic mean of two numbers:" << ab << endl;
//3
	float kilometers;
	cout << "Enter km: ";
	cin >> kilometers;

	float meters = kilometers * 1000;

	cout << kilometers << "кілометрів = " << meters << "метрів" << endl;

//4
	const float price1 = 25.99;
	const float price2 = 35.99;
	const float price3 = 45.99;
	const float price4 = 55.99;

	int amount1;
	cout << "Enter count of products price1";
	cin >> amount1;

	int amount2;
	cout << "Enter count of products price2";
	cin >> amount2;

	int amount3;
	cout << "Enter count of products price3";
	cin >> amount3;

	int amount4;
	cout << "Enter count of products price4";
	cin >> amount4;


	float over_price1 = price1 * amount1;
	float over_price2 = price2 * amount2;
	float over_price3 = price3 * amount3;
	float over_price4 = price4 * amount4;

	float over_price = over_price1 + over_price2 + over_price3 + over_price4;
	
	cout << "Вартість всієї  покупки ->" << over_price << endl;

	return 0;
}