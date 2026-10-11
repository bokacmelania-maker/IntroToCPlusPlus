#include <iostream>
#include <fstream> // універсальний для читання і запису

using namespace std;

//const char* file = "D://MyHumanDatabase.txt";
//struct Human
//{
//private:
//	char name[50];
//	char surname[50];
//	int age;
//
//public:
//	void Show()
//	{
//		cout << "Name : " << name << "\nSurname : " << surname << "\nAge : " << age << endl;
//	}
//	void Fill()
//	{
//		cout << "Enter name "; cin >> name;
//		cout << "Enter surname "; cin >> surname;
//		cout << "Enter age "; cin >> age;
//	}
//	void Copy(Human h)//Copy копіює дані з іншої людини h у поточну (ту, для якої викликали метод).
//	{
//		strcpy_s(name, h.name);
//		strcpy_s(surname, h.surname);
//		age = h.age;
//	}
//	void SaveToFile()
//	{
//		ofstream out(file, ios_base::app);//save to file
//		out << name;
//		out << ":";
//		out << surname;
//		out << ":";
//		out << age;
//		out << "|";
//		out.close();
//	}
//	void FillFromFile(char* nameF, char* surnameF, int ageF)
//	{
//		strcpy_s(name, nameF);
//		strcpy_s(surname, surnameF);
//		age = ageF;
//	}
//};
//int Menu(){
//	
//
//
//	int choice;
//	cout << "1. Add person" << endl;
//	cout << "2. Show people" << endl;
//	cout << "0. Exit" << endl;
//	cin >> choice;
//	return choice;
//}
////enum  --> const int ADD
////enum  --> const int SHOW
////enum  --> const int EXIT
//enum MENU { EXIT, ADD, SHOW };
//void AddNewHuman(Human*& arr, int& size)
//{
//	Human* temp = new Human[size + 1];
//	for (int i = 0; i < size; i++)
//	{
//		temp[i].Copy(arr[i]);
//	}
//	temp[size].Fill();
//	delete[]arr;
//	arr = temp;
//	size++;
//	arr[size - 1].SaveToFile();
//}
//void ShowPeople(Human* h, int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		h[i].Show();
//	}
//}
//void ReadFromFile(Human*& arr, int& size)

//3
struct Book
{
    int id;
    char name[50];
    char author[30];
    char publisher[30];
    char genre[30];
    int year;
    float price;
};

void Record_book_collec(Book& book, const char* booksfile) { //const означає, що функція це ім'я не змінює.
ofstream out(booksfile, ios_base::out);// без лапок booksfile, бо це змінна з шляхом,(параметр функції), а не сам текст.
									   //booksfile - беремо значення зі змінної 
	if (out.is_open())
	{
		out << book.id << endl;	//out << працює як cout <<, тільки пише не на екран, а у файл.
		out << book.name << endl;
		out << book.author << endl;
		out << book.publisher << endl;
		out << book.genre << endl;
		out << book.year << endl;
		out << book.price << endl;
		out.close();
	}
	else
		cout << "File no open!" << endl;
}

//4
void ReadBookFromFile(Book*& arr, int& size, const char* booksfile)// *& - arr це посилання (&) на вказівник (*) на Book
{
	ifstream inBook(booksfile, ios_base::in);// inBook - це змінна типу ifstream(через неї відбувається читання з файла);booksfile - ім'я файла
	if (inBook.is_open())
	{
		Book readBook;                       
		inBook >> readBook.id;
		inBook.ignore();
		inBook.getline(readBook.name, 50);
		inBook.getline(readBook.author, 30);
		inBook.getline(readBook.publisher, 30);
		inBook.getline(readBook.genre, 30);
		inBook >> readBook.year;
		inBook >> readBook.price;
		inBook.close();

		Book* temp = new Book[size + 1];     
		for (int i = 0; i < size; i++)
		{
			temp[i] = arr[i];                
		}
		temp[size] = readBook;              
		delete[] arr;
		arr = temp;
		size++;
	}
	else
		cout << booksfile << " file not found!" << endl;
}

int main()
{
	//Запис тексту у файл
	//	1.Створи програму, яка записує у файл text.txt 5 рядків тексту, введених користувачем.
	//	Обов* язково перевірити чи файл існує

	char some_text[250];// спільний буфер (для 1 і 2)


	ofstream out("text.txt", ios_base::out);
	if (out.is_open()) {

		for (int i = 0; i < 5; i++)
		{
			cout << "Enter some text:";
			cin.getline(some_text, 250);
			out << some_text << endl;
		}
		out.close();
		cout << "Text save to file!!!" << endl;
	}
	else {
		cout << "Text not saved to file!!!" << endl;
	}



	//Читання з файлу
	//2.Створи програму, яка відкриває файл text.txt і виводить весь його вміст на екран.
	//Обов* язково перевірити чи файл існує та зчитати інформацію до кінця файлу

	cout << "\nFile content: " << endl;
	ifstream in("text.txt", ios_base::in);

	if (in.is_open())
	{
		while (!in.eof())
		{
			in.getline(some_text, 250);
			if (in.eof()) break;
			cout << some_text << endl;
		}
		in.close();
	}
	else {
		cout << "file not found" << endl;
	}


	//3. Записати колекцію книг зроблену на попередній парі до файлу
	Book books[10];
	books[0] = { 0, "The Pillars of the Earth", "Ken Follett", "RM", "Historical Fiction", 2023, 520 };
	books[1] = { 1, "1984", "George Orwell", "Folio", "Dystopia", 2021, 250 };
	books[2] = { 2, "The Last Wish", "Andrzej Sapkowski", "KSD", "Fantasy", 2022, 340 };
	books[3] = { 3, "Dune", "Frank Herbert", "KSD", "Sci-Fi", 2020, 450 };
	books[4] = { 4, "Harry Potter and the Philosopher's Stone", "J.K. Rowling", "A-ba-ba-ga-la-ma-ga", "Fantasy", 2021, 390 };
	books[5] = { 5, "The Hobbit", "J.R.R. Tolkien", "Astrolabe", "Fantasy", 2022, 320 };
	books[6] = { 6, "The Adventures of Sherlock Holmes", "Arthur Conan Doyle", "A-ba-ba-ga-la-ma-ga", "Detective", 2019, 480 };
	books[7] = { 7, "The Great Gatsby", "F. Scott Fitzgerald", "Vivat", "Classic", 2023, 280 };
	books[8] = { 8, "To Kill a Mockingbird", "Harper Lee", "KM-Books", "Classic", 2022, 310 };
	books[9] = { 9, "Murder on the Orient Express", "Agatha Christie", "KSD", "Detective", 2021, 260 };
	Record_book_collec(books[0], "books0.txt");
	Record_book_collec(books[1], "books1.txt");
	Record_book_collec(books[2], "books2.txt");
	Record_book_collec(books[3], "books3.txt");
	Record_book_collec(books[4], "books4.txt");
	Record_book_collec(books[5], "books5.txt");
	Record_book_collec(books[6], "books6.txt");
	Record_book_collec(books[7], "books7.txt");
	Record_book_collec(books[8], "books8.txt");
	Record_book_collec(books[9], "books9.txt");

	//4. Зчитати колекцію книг з файлу
	
	int size = 0;
	Book* booksRead = new Book[size];

	ReadBookFromFile(booksRead, size, "books0.txt");
	ReadBookFromFile(booksRead, size, "books1.txt");
	ReadBookFromFile(booksRead, size, "books2.txt");
	ReadBookFromFile(booksRead, size, "books3.txt");
	ReadBookFromFile(booksRead, size, "books4.txt");
	ReadBookFromFile(booksRead, size, "books5.txt");
	ReadBookFromFile(booksRead, size, "books6.txt");
	ReadBookFromFile(booksRead, size, "books7.txt");
	ReadBookFromFile(booksRead, size, "books8.txt");
	ReadBookFromFile(booksRead, size, "books9.txt");

	for (int i = 0; i < size; i++)
	{	 // і- номер книги
		cout << booksRead[i].id << endl << booksRead[i].name << endl << booksRead[i].author << endl
			<< booksRead[i].publisher << endl << booksRead[i].genre << endl
			<< booksRead[i].year << endl << booksRead[i].price << endl << "------------------" << endl;
	}

	delete[] booksRead;







	///*Human human = {};
	//human.Fill();
	//human.Show();*/

	//int size = 0;
	//Human* people = new Human[size];

	//ReadFromFile(people, size);
	//bool isExit = false;

	///*while (!isExit){
	//	switch (Menu())
	//	{
	//	case EXIT:isExit = true; break;
	//	case ADD:AddNewHuman(people, size);	break;
	//	case SHOW:ShowPeople(people, size);	break;
	//	}
	//}*/
	//delete[]people;



	//iostream    //cout   cin
	// test.txt
	// test.png

	// open file
	// read file
	// write file
	// close file
	// ofstream out;//save to file
	// out.open("test.txt", ios_base::out);

	// /*
	// ofstream out("test.txt", ios_base::out);
	// ofstream out("test.txt", ios_base::app);
	// if (out.is_open())
	// {
	//	 out << "Hello world ***************" << endl;
	//	 out << "Hello world ***************" << endl;
	//	 out << "Hello world ***************" << endl;
	//	 out << "Hello world ***************" << endl;
	//	 cout << "Save to file!!!" << endl;
	// }
	// else
	// {
	//	 cout << "File not exist" << endl;
	// }
	// out.close();

	// */
	// ifstream in;//read from file
	// in.open("test.txt", ios_base::in);
	// /*
	// char buff[50];
	// ifstream in("test.txt", ios_base::in);
	// if (in.is_open())
	// {
	//	 while (!in.eof())
	//	 {
	//		 in.getline(buff, 50);//in >> buff;
	//		 cout << buff << endl;
	//	 }

	// }
	// else
	//	 cout << "File not exist!" << endl;
	// in.close();
	// */
	 


}