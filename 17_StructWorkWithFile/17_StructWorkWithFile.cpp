#include <iostream>
#include <conio.h>	
#include <iomanip> 
using namespace std;

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

void ShowBook(Book& book) {	
	
	cout << "Id: " << book.id << endl;
	cout << "Name: " << book.name << endl;
	cout << "Author: " << book.author << endl;
	cout << "Publisher: " << book.publisher << endl;
	cout << "Genre: " << book.genre << endl;
	cout << "Year: " << book.year << endl;
	cout << "Price: $" << book.price << endl;
	cout << "---------------------------------------" << endl;
}

void SearchByName(char name[], Book* books, int size) {
	for (int i = 0; i < size; i++)
	{
		if (strcmp(books[i].name, name) == 0)
			ShowBook(books[i]);
	}
}

void SearchByAuthor(char author[], Book* books, int size) {
	bool found = false;
	for (int i = 0; i < size; i++)
	{
		if (strcmp(books[i].author, author) == 0) {
			ShowBook(books[i]);
			found = true;
		}
	}
	if (!found) {
		cout << "No books found by this author!" << endl;
	}
}

void SearchByPublisher(char publisher[], Book* books, int size) {
	for (int i = 0; i < size; i++)
	{
		if (strcmp(books[i].publisher, publisher) == 0)
			ShowBook(books[i]);
	}
}

void SearchByGenre(char genre[], Book* books, int size) {
	for (int i = 0; i < size; i++)
	{
		if (strcmp(books[i].genre, genre) == 0)
			ShowBook(books[i]);
	}
}

void ChangePrice(Book* books, int size, int id) {
	for (int i = 0; i < size; i++)
	{
		if (books[i].id == id) {
			ShowBook(books[i]);
			cout << "Enter new price: " << endl;
			cin >> books[i].price;
			return;
		}
	}
	cout << "Book not found!" << endl;
}

void ChangeData(Book* books, int size, int id) {
	for (int i = 0; i < size; i++)
	{
		if (books[i].id == id) {
			ShowBook(books[i]);
			cout << "Enter new name: " << endl;
			cin.getline(books[i].name, 50);
			cout << "Enter new author: " << endl;
			cin.getline(books[i].author, 30);
			cout << "Enter new publisher: " << endl;
			cin.getline(books[i].publisher, 30);
			cout << "Enter new genre: " << endl;
			cin.getline(books[i].genre, 30);
			cout << "Enter new year: " << endl;
			cin >> books[i].year;
			cout << "Enter new price: " << endl;
			cin >> books[i].price;
			return;
		}
	}
	cout << "Book not found!" << endl;
}

void AddBook(Book* books, int& size, int max_size) {
	if (size >= max_size) {	
		cout << "Your upload limit has been used(20), massif is full !" << endl;
		return;
	}
	books[size].id = (size == 0) ? 0 : books[size - 1].id + 1;	

	cout << "Enter name: " << endl;
	cin.getline(books[size].name, 50);
	cout << "Enter author: " << endl;
	cin.getline(books[size].author, 30);
	cout << "Enter publisher: " << endl;
	cin.getline(books[size].publisher, 30);
	cout << "Enter genre: " << endl;
	cin.getline(books[size].genre, 30);
	cout << "Enter year: " << endl;
	cin >> books[size].year;
	cout << "Enter price: " << endl;
	cin >> books[size].price;

	size++;
	cout << "Book added!" << endl;
}

void DeleteBook(Book* books, int& size, int id) {
	for (int i = 0; i < size; i++)
	{
		if (books[i].id == id) {
			for (int j = i; j < size - 1; j++)
			{
				books[j] = books[j + 1];
			}
			size--;
			cout << "Book deleted!" << endl;
			return;
		}
	}
	cout << "Book not found!" << endl;
}

//---------------------
int main() {

	int choice;
	int id;
	char query[50];
	const int MAX_SIZE = 20;
	int size = 10;
	Book* books = new Book[MAX_SIZE];

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

	do
	{
		system("cls");
		cout << "---------Menu------------" << endl;
		cout << left;// вирівнювання тексту по лівому краю
		cout << setw(22) << "Show all books" << "[1]" << endl;
		cout << setw(22) << "Search by author" << "[2]" << endl;
		cout << setw(22) << "Search by name" << "[3]" << endl;
		cout << setw(22) << "Search by publisher" << "[4]" << endl;
		cout << setw(22) << "Search by genre" << "[5]" << endl;
		cout << setw(22) << "Change price" << "[6]" << endl;
		cout << setw(22) << "Change book data" << "[7]" << endl;
		cout << setw(22) << "Add new book" << "[8]" << endl;
		cout << setw(22) << "Delete book" << "[9]" << endl;
		cout << setw(22) << "Exit" << "[0]" << endl;  

		cout << endl;
		cout << "Enter your choice:" << endl;
		
		cin >> choice;
		cin.ignore();

		switch (choice)
		{
		case 0:
			cout << "Bye. Have a nice day!" << endl;
			break;
		case 1:
			for (int i = 0; i < size; i++)
			{
				ShowBook(books[i]);
			}
			break;
		case 2:
			cout << "Enter author:" << endl;
			cin.getline(query, 50);
			SearchByAuthor(query, books, size);
			break;
		case 3:
			cout << "Enter name:" << endl;
			cin.getline(query, 50);
			SearchByName(query, books, size);
			break;
		case 4:
			cout << "Enter publisher:" << endl;
			cin.getline(query, 50);
			SearchByPublisher(query, books, size);
			break;
		case 5:
			cout << "Enter genre:" << endl;
			cin.getline(query, 50);
			SearchByGenre(query, books, size);
			break;
		case 6:
			cout << "Enter book's id: " << endl;
			cin >> id;
			ChangePrice(books, size, id);
			break;
		case 7:
			cout << "Enter book's id: " << endl;
			cin >> id;		
			cin.ignore();
			ChangeData(books, size, id);
			break;
		case 8:
			AddBook(books, size, MAX_SIZE);
			break;
		case 9:
			cout << "Enter book's id: " << endl;
			cin >> id;
			DeleteBook(books, size, id);
			break;
		default:
			cout << "Error choice" << endl;
			break;
		}
		cout << "Press any key " << endl;
		int Continue = _getch();  

	} while (choice != 0);

	delete[] books;
	return 0;
}