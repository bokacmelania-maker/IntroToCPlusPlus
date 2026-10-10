#include <iostream>
#include <iomanip>
using namespace std;
//
////struct Date
////{
////	int day;
////	int month;
////	int year;
////	char month_name[15];
////};
////struct Worker
////{
////	char name[20];
////	char surname[20];
////	char position[20];
////	double salary;
////	Date birthdate;
////	Date hiredate;
////
////};
////Worker InputWorker(Worker worker)
////{
////	cout << "Enter name : "; cin >> worker.name;
////	cout << "Enter surname : "; cin >> worker.surname;
////	cout << "Enter position : "; cin >> worker.position;
////	cout << "Enter salary : "; cin >> worker.salary;
////
////	cout << "Birthdate day : "; cin >> worker.birthdate.day;
////	cout << "Birthdate month : "; cin >> worker.birthdate.month;
////	cout << "Birthdate year : "; cin >> worker.birthdate.year;
////
////	cout << "Hiredate day : "; cin >> worker.hiredate.day;
////	cout << "Hiredate month : "; cin >> worker.hiredate.month;
////	cout << "Hiredate year : "; cin >> worker.hiredate.year;
////	return worker;
////}
////void ShowWorker(Worker& worker)
////{
////	cout << "\nName : " << worker.name << endl;
////	cout << "Surname : " << worker.surname << endl;
////	cout << "Position : " << worker.position << endl;
////	cout << "Salary : " << worker.salary << endl;
////	cout << "Birthdate : " << worker.birthdate.day << "/" <<
////		worker.birthdate.month << "/" << worker.birthdate.year << endl;
////
////	cout << "Hiredate : " << worker.hiredate.day << "/" <<
////		worker.hiredate.month << "/" << worker.hiredate.year << endl << endl;
////}
//
////1
////struct Washing_machine
////{
////	char firm[20];
////	char color[20];
////	int width;
////	int length;
////	int height;
////	int power;
////	int spin_speed;
////	int heating_temperature;
////};
//
////2
////struct Iron
////{
////	char firm[20];
////	char model[20];
////	char color[20];
////	int min_temperature;
////	int max_temperature;
////	bool steam_supply;
////	int power;
////};
//
////3
////struct Boiler
////{
////	char company[20];
////	char color[20];
////	int power;
////	int volume;
////	int heating_temperature;
////};
//
////4
union digit_or_word {  // обєднання
	char word[9];
	int digit;

};
struct Car
{
	char color[20];
	char model[20];
	digit_or_word Num_Word;//номер машини: (digit) або (word)
	bool num_true_digit_false; // true - в union лежить число, false - слово
};

Car InitCar(Car car) {
	cout << "Enter color of car: "<<endl;
	cin >> setw(20)>> car.color;
	cout<<"Enter model of car"<<endl;
	cin >> setw(20) >> car.model;
	int type;
	cout << "Enter type: 0 - digit, 1- word" << endl;cin >> type;
	if (type == 0) {//якщо число 
		cout << "Enter number car: "; cin >> car.Num_Word.digit;
		car.num_true_digit_false = true;
	}
	else if (type == 1) { //якщо буква 
		cout << "Enter word car: "; cin >> car.Num_Word.word;
		car.num_true_digit_false = false;
	}
	else
		cout << "Error" << endl;

	return car;
}

void ShowCar(Car& car) {
	cout << "Color: " << car.color << endl;
	cout << "Model: " << car.model << endl;
	if (car.num_true_digit_false == 1) { // true ==1(digit)
		cout << "Number: "<< car.Num_Word.digit<<endl;
	}
	else if (car.num_true_digit_false == 0) { //false == (0)word)
		cout << "Word: "<< car.Num_Word.word<<endl;
	}
	
}
void EditCar(Car cars_10[], int count) {
	int num;
	cout << "Enter number car to edit: ";
	cin >> num;

	if (num >= 1 && num <= count) {
		cars_10[num - 1] = InitCar(cars_10[num - 1]); 
	}
	else
		cout << "Error" << endl;
	
}

void ShowAllCars(Car cars[], int count) {
	for (int i = 0; i < count; i++)
	{
		cout << "Car " << i + 1 << endl;
		ShowCar(cars[i]);
	}
}

void FindCar(Car cars[], int count) {
	int type;
	cout << "Search by: 0 - digit, 1 - word: ";
	cin >> type;

	if (type == 0) {
		int digit;
		cout << "Enter number: ";
		cin >> digit;
		for (int i = 0; i < count; i++) {
			if (cars[i].num_true_digit_false == true && cars[i].Num_Word.digit == digit) {
				ShowCar(cars[i]);
			}
		}
	}
	else {
		char word[9];
		cout << "Enter word: ";
		cin >> setw(9) >> word;
		for (int i = 0; i < count; i++) {
			if (cars[i].num_true_digit_false == false && strcmp(cars[i].Num_Word.word, word) == 0) {
				ShowCar(cars[i]);
			}
		}
	}
}

int main()
{
//	//Додаткове завдання на додаткові 12 балів
//	//	Завдання 4
//	//	Реалізувати структуру "Машина" (колір, модель, номер).Номер машини може бути
//	//	або п'ятизначним номером, або словом до 8 символів.
//	//	Рекомендації: номер реалізувати як об'єднання.
//	//	Створити екземпляр структури "Машина" і реалізувати для нього такі функції :
//	//Заповнення машини;
//	//Друк машини.
//	//	Створити масив із 10 екземплярів структури "Машина" і реалізувати для нього такі функції :
//	//Редагувати машину;
//	//Друк усіх машин;
//	//Пошук машини за номером.
//
	Car newcar = {};
	newcar = InitCar(newcar);
	ShowCar(newcar);
	
	const int count = 10;
	Car cars_10[count] = {};

	for (int i = 0; i < count; i++)
	{
		cout << "Car " << i + 1 << endl;
		cars_10[i] = InitCar(cars_10[i]);
	}

	ShowAllCars(cars_10, count);

	EditCar(cars_10, count);

	ShowAllCars(cars_10, count);

	FindCar(cars_10, count);
	

//
//
//	//Завдання 1. Реалізувати структуру «Пральна машинка»
//		//(фірма, колір, ширина, довжина, висота, потужність, швид -
//		//	кість віджиму, температура нагріву).Створіть екземпляр
//		//	структури і проілюструйте роботу з ним(і мейні створити
//		//		об * єкт, задати значення для всіх полів, вивести на екран.)
//		//cout << "Task1" << endl;
//		//cout << " " << endl;
//		//cout << "Washing_machine" << endl;
//		//Washing_machine washingMachine = { "samsung","black",70,66,90,2200,1200,95 };
//		//cout << "Firm: " << washingMachine.firm << endl;
//		//cout << "Color: " << washingMachine.color << endl;
//		//cout << "Width: " << washingMachine.width << endl;
//		//cout << "Length: " << washingMachine.length << endl;
//		//cout << "Height: " << washingMachine.height << endl;
//		//cout << "Power: " << washingMachine.power << endl;
//		//cout << "Spin speed: " << washingMachine.spin_speed << endl;
//		//cout << "Heating temperature: " << washingMachine.heating_temperature << endl;
//		//cout << " " << endl;
//
//	//Завдання 2. Реалізувати структуру «Праска»(фірма,
//	//модель, колір, мінімальна температура, максимальна
//	//температура, подача пари так / ні, потужність).Створіть
//	//екземпляр структури і проілюструйте роботу з ним.
//		//cout << "Task2" << endl;
//		//cout << " " << endl;
//		//cout << "iron1 -> TRUE" << endl;
//		//Iron iron1 = { "philips","FV8064E0","silver",75,200,true,2600 };
//		//cout << "Firm: " << iron1.firm << endl;
//		//cout << "Model: " << iron1.model << endl;
//		//cout << "Color: " << iron1.color << endl;
//		//cout << "Min_temperature: " << iron1.min_temperature << endl;
//		//cout << "Max_temperature: " << iron1.max_temperature << endl;
//		//cout << "Steam supply: ";//
//		//	if (iron1.steam_supply == true)
//		//		cout << "yes" << endl;
//		//	else
//		//		cout << "no" << endl;
//		//cout << "Power: " << iron1.power << endl;
//		//cout << " " << endl;
//		//cout << "iron2 -> FALSE" << endl;
//		//Iron iron2 = { "Rowenta","DW9240","blue",70,205,false,3100 };
//		//cout << "Firm: "  << iron2.firm << endl;
//		//cout << "Model: " << iron2.model << endl;
//		//cout << "Color: " << iron2.color << endl;
//		//cout << "Min_temperature: " << iron2.min_temperature << endl;
//		//cout << "Max_temperature: " << iron2.max_temperature << endl;
//		//cout << "Steam_supply: ";//
//		//if (iron2.steam_supply == true)
//		//	cout << "yes" << endl;
//		//else
//		//	cout << "no" << endl;
//		//cout << "Power: " << iron2.power << endl;
//
//	//Завдання 3. Реалізувати структуру «Бойлер»(
//	// фірма, колір, потужність, обсяг, температура нагріву).Створіть
//	//екземпляр структури і проілюструйте роботу з ним.
//		//cout << "Task3" << endl;
//		//cout << " " << endl;
//		//Boiler boiler = {"Ariston","White",3000,50,80};
//		//cout << "Company: " << boiler.company << endl;
//		//cout << "Color: " << boiler.color << endl;
//		//cout << "Power: " << boiler.power << endl;
//		//cout << "Volume: " << boiler.volume << endl;
//		//cout << "Heating_temperature: " << boiler.heating_temperature << endl;
//
////--------------------------
//
//	//int string char double float bool long   long long
//	//int number = 100;
//	//Date birthdate = { 25,12,2000,"December" };
//	//cout << "------------ My birthday -------------------" << endl;
//	//cout << "Day : " << birthdate.day << endl;
//	//cout << "Month : " << birthdate.month << endl;
//	//cout << "Year : " << birthdate.year << endl;
//	//cout << "Month name : " << birthdate.month_name << endl;
//
//
//	//Date friend_birthday;
//	//cout << "Enter day : "; cin >> friend_birthday.day;
//	//cout << "Enter month : "; cin >> friend_birthday.month;
//	//cout << "Enter year : "; cin >> friend_birthday.year;
//	//cout << "Enter month_name : "; cin >> friend_birthday.month_name;
//	//cout << "------------ Friend birthday -------------------" << endl;
//	//cout << "Day : " << friend_birthday.day << endl;
//	//cout << "Month : " << friend_birthday.month << endl;
//	//cout << "Year : " << friend_birthday.year << endl;
//	//cout << "Month name : " << friend_birthday.month_name << endl;
//
//
//	//Worker worker = { "Oleg","Kozak","manager",117000,{11,5,1999},{2,2,2022} };
//	//ShowWorker(worker);
//
//	//Worker newWorker = {};
//	//newWorker = InputWorker(newWorker);
//	//ShowWorker(newWorker);
//
//
//	//Date event = { 26,10,2026, "October" };
//	//cout << event.day << endl;
//	//cout << event.month << endl;
//	//cout << event.year << endl;
//	//cout << event.month_name << endl;
//
//	//Date new_event;// empty
//	//new_event = event;
//	//cout << new_event.day << endl;
//	//cout << new_event.month << endl;
//	//cout << new_event.year << endl;
//	//cout << new_event.month_name << endl;
//
//	////Date* ptr = nullptr;
//	////ptr = &event;
//	//Date* ptr = &event;
//
//	//cout << ptr << endl;
//	//cout << (*ptr).day << endl;
//	//cout << ptr->day << endl;
//	//cout << (*ptr).month << endl;
//	//cout << ptr->year << endl;
//	//cout << ptr->month_name << endl;
//
//	//int a;//4b
//	//char b;//1b
//	//double c;//8b
//	//int* p;//4b
//	//cout << "sizeof int --> " << sizeof(int) << endl;
//	//cout << "sizeof int --> " << sizeof(a) << endl;
//	//cout << "sizeof char --> " << sizeof(b) << endl;
//	//cout << "sizeof double --> " << sizeof(c) << endl;
//	//cout << "sizeof p --> " << sizeof(p) << endl;
//	//cout << "sizeof p --> " << sizeof(int*) << endl;
//	//cout << "sizeof p --> " << sizeof(double*) << endl;
//	//cout << "sizeof date --> " << sizeof(event) << endl;
//	//cout << "sizeof worker --> " << sizeof(worker) << endl;
//
} //