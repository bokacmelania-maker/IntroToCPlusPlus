#include <iostream>
#include < iomanip >
#include < Windows.h >

using namespace std;

//void SetColor(int color)
//{
//    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
//}
//
//void SetPos(int x, int y)
//{
//    COORD c;
//    c.X = x;
//    c.Y = y;
//    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
//}
 
 
//1
//void Count_letters(char letter[]) {
//    int a = 0, o = 0;
//    for (int i = 0; letter[i] != '\0'; i++)
//    {
//        if (letter[i] == 'a') {
//            a++; 
//       }
//        if (letter[i] == 'o') {
//            o++; 
//        }
//    }
//    if (a > o) {
//        cout << "Letter a"<<endl;
//    }
//    else if (a < o) {
//        cout << "Letter o" << endl;
//    }
//    else
//        cout << "a and o equally" << endl;
//}

//2
//void Count_Letters(char Letters[]) {
//    int numbers = 0;
//    int letters = 0;
//    int gaps = 0;
//    for (int i = 0; Letters[i] != '\0'; i++)
//    {
//        if (isdigit(Letters[i])) {
//            numbers++;
//            
//         }
//        if (isspace(Letters[i])) {
//            gaps++;
//           
//         }
//        if (isalpha(Letters[i])) {
//            letters++;
//            
//         }
//    }
//    cout <<"Count of numbers: "<< numbers << endl;
//    cout << "Count of gaps: " << gaps << endl;
//    cout << "Count of letters: " << letters << endl;
//}

//3
//void Big_Small(char big_small[]) {
//    for (int i = 0; big_small[i] != '\0'; i++)
//    {
//        if (isupper(big_small[i])) {
//            big_small[i] = (char)tolower(big_small[i]);
//        }
//        else if (islower(big_small[i])) {       //
//            big_small[i] = (char)toupper(big_small[i]);
//        }
//    }
//}

//4
//int Width( char width_row[]) {
//    int count = 0;
//    
//    while (width_row[count] != '\0'){
//        count++; 
//    }
//    return count;
//}

//5
//void DeleteSymbol(char source[], char result[], char symbol) { //
//    int index = 0;
//    for (int i = 0; source[i] != '\0'; i++)
//    {
//        if (source[i] != symbol) {
//            result[index] = source[i];
//            index++;
//        }
//    }
//    result[index] = '\0';  
//}

//6
//void check(char text[]) {
//    int whitespaces = 0; //Пробіли
//    int vowels = 0;   //Голосні
//    int consonants = 0;  //Приголосні
//    int punctuation = 0;
//    for (int i = 0; text[i] != '\0'; i++)
//    {
//        char reverse  = (char)tolower(text[i]);//
//        if (isspace(text[i])) {
//            whitespaces++;
//        }
//        else if (isalpha(text[i])) {
//            if (reverse == 'a' || reverse == 'e' || reverse == 'i' || reverse == 'o' || reverse == 'u' || reverse == 'y') {
//                vowels++;
//            }
//            else {
//                consonants++;
//            }
//        }
//        else if (text[i] == '!' || text[i] == '.') {
//            punctuation++;
//        }
//    }
//    cout << "Whitespaces: " << whitespaces << endl;//Пробіли
//    cout << "Vowels: " << vowels << endl; //Голосні
//    cout << "Consonants: " << consonants << endl;//Приголосні
//    cout << "Punctuation: " << punctuation << endl;//
//}

//-----------------------------------------------
int main(){

//1.Вводитися рядок. Яких букв у рядку більше ’а’ чи ’о’ ?
    //char letters[200];
    //cout << "Enter letters: "<<endl;
    //cin.getline(letters, 200);
    //Count_letters(letters);

//2.Вводиться рядок. Порахувати кількість латинських букв, цифр та пробілів у рядку.
    //char Letters[200];
    //cout << "Enter some  letters ,numbers, whitespaces: "<<endl;
    //cin.getline(Letters, 200);
    //Count_Letters(Letters);

 //3.Дано рядок. Замінити у рядку всі великі букви на малі і навпаки.
    //char big_small[] = { 'G','O','O','D','B','Y','E',' ','h','e','l','l','o','\0' };
    //Big_Small(big_small);
    //cout << big_small << endl;

//4.Написати функцію, яка отримує рядок і повертає довжину рядка. 
//Без використання функції strlen()
    //char width_row[200];
    //cout << "Enter some text: " << endl;
    //cin.getline(width_row, 200);
    //cout << Width(width_row) << endl;//


//На додаткові 12 балів
//5 * **.Дано рядок.Видалити із рядка заданий символ.Результат розмістити у новому рядку.
    //char source[] = { 'i','^','#','$','A','1','2','f','P','q','b','\0' };
    //char result[200];
    //char symbol = '$';
    //DeleteSymbol(source, result, symbol);
    //cout << result << endl;

//6 * **.Розробити програму, яка зчитує з екрану рядок, а потім видає статистику :
//кількість пробільних символів(whitespaces), голосних, приголосних, знаків пунктуації.
//Введення передбачається англомовним.
//Hello
//Helo
    //char text[200];
    //cout << "Enter text (English): " << endl;
    //cin.getline(text, 200);
    //check(text);


//Табличка

    cout << " " << endl;

    cout << (char)218 << string(4,(char)196)<<(char)194 << string(10,(char)196)<<(char)194<<string(25,(char)196)<< (char)194 << string(13, (char)196)<< (char)194 << string(16, (char)196) << (char)191<<endl;
    cout << (char)179 << " No " << (char)179<<"  Item\t" << (char)179<<"\tDescription\t  "<<(char)179<<"   Quantity  "<<(char)179<<"\tPrice\t " << (char)179 << endl;
    cout << (char)179  <<"    "<< (char)179 <<"\t\t"<< (char)179<<"\t\t\t  "<< (char)179<<"\t\t"<< (char)179<<"\t\t "<< (char)179<<endl ;
    cout << (char)195<<string(4, (char)196)<<(char)197<<string(10, (char)196)<<(char)197<<string(25, (char)196)<<(char)197<<string(13, (char)196)<<(char)197<<string(16, (char)196)<<(char)180<<endl;
    cout << (char)179 << "    " << (char)179 << "\t\t" << (char)179 << "\t\t\t  " << (char)179 << "\t\t" << (char)179 << "\t\t " << (char)179 << endl;
    
    cout << (char)179 << " 1  " << (char)179 <<"  P196    " << (char)179 <<"     Samsung Color TV    " << (char)179<<"\t1\t"<< (char)179<<"  $ 829.00\t " << (char)179<<endl;
    cout << (char)179 << " 2  " << (char)179 << "  P020    " << (char)179 << "     Uniden Handset      " << (char)179 << "     1       " << (char)179 << "  $ 29.00       " << (char)179 << endl; 
    cout << (char)179 << " 3  " << (char)179 <<"  P111    " << (char)179 <<"     Folder Blank\t  " << (char)179<<"\t1\t"<< (char)179<<"  $ 2.70\t " << (char)179<<endl;

    cout << (char)179 << "    " << (char)179 << "\t\t" << (char)179 << "\t\t\t  " << (char)179 << "\t\t" << (char)179 << "\t\t " << (char)179 << endl;
    cout << (char)179 << "    " << (char)179 << "\t\t" << (char)179 << "\t\t\t  " << (char)179 << "\t\t" << (char)179 << "\t\t " << (char)179 << endl;
    cout << (char)179 << "    " << (char)179 << "\t\t" << (char)179 << "\t\t\t  " << (char)179 << "\t\t" << (char)179 << "\t\t " << (char)179 << endl;
    cout << (char)179 << "    " << (char)179 << "\t\t" << (char)179 << "\t\t\t  " << (char)179 << "\t\t" << (char)179 << "\t\t " << (char)179 << endl;

    cout << (char)195 << string(4, (char)196) << (char)197 << string(10, (char)196) << (char)197 << string(25, (char)196) << (char)197 << string(13, (char)196) << (char)197 << string(16, (char)196) << (char)180 << endl;
    cout << (char)179 << "    " << (char)179 << "\t\t" << (char)179 << "\t\t\t  " << (char)179 << "\t\t" << (char)179 << "\t\t " << (char)179 << endl;

    cout << (char)192 << string(4, (char)196) << (char)193 << string(10, (char)196) << (char)193 << string(25, (char)196) << (char)193 << string(13, (char)196) << (char)193 << string(16, (char)196) << (char)217 << endl;


    //C-style --- string
   // cout << "Hello" << endl;
   // cout << "" << endl;
   // char letter = 'a';// 1b

   // char word[] = { 'H','e','l','l','o','\0'};// нуль термвнатор що б виводилося лише те що ми вказали
   // for (int i = 0; i < 6; i++)
   // {
   //     cout << word[i];
   // }
   // cout << endl;

   // char mystring[] = "string";
   // cout << mystring << "has" << sizeof(mystring) << "characters" << endl;

   //for (int i = 0; i < sizeof(mystring); i++)
   // {
   //     cout << " letter "<< mystring[i]<<"has code:"<<
   //         static_cast<int>(mystring[i]) << endl;
   // }

   // //mystring = "cat"; //error
   // mystring[1] = 'p';
   // cout << mystring << endl;

   // char name[15] = "Max"; // автомачинно додавася нуль термінатор "Max\0"
   // cout << "My name is " << name << endl;

   // //char your_name[255];
   // //cout << "Enter name" ;
   // //cin.getline(your_name, 225); //МОЖНА писати з пробілами
   // ////cin >> your_name;// НЕ можна писати з пробілами
   // //cout << "Your name is: " << your_name << endl;

   // char text[] = "Print this!";
   // char dest[50];
   // strcpy_s(dest, text);//copy variable(dest,source)
   // cout << text << endl;
   // cout << dest << endl;

   // cout << "Sizeof:" << sizeof(dest) << endl;// 50
   // cout << "Strnlen:" << strnlen(dest,50) << endl;//  50

   // char arr[255] = "Returns the head of a list.";
   // cout << arr << endl;
   // //cout << "Enter any text: "; cin >> arr;
   // //cout << "Enter any text: "; cin.getline(arr,225) >> arr;
   // cout << arr << endl;

   // _strupr_s(arr); // букви до верхнього регістру
   // cout << arr << endl;

   // _strlwr_s(arr); // букви до верхнього регістру
   // cout << arr << endl;

   // _strrev(arr); // букви до верхнього регістру
   // cout << arr << endl;

   // cout << "Copy arrays: " << endl;
   // char  arr2[255];
   // strcpy_s(arr2, arr);
   // cout << "Copy: " <<arr2<< endl;

   // arr2[4] = '\0';
   // cout << "Copy: " << arr2 << endl;

   // cout << "Add to array: " << endl;
   // cout << arr << endl;
   // strcat_s(arr, "........."); //
   // cout << arr << endl;
   // cout << "Enter any text: "; cin >> arr2;
   // strcat_s(arr, arr2);
   // cout << arr << endl;

   // char any_word[] = "White111";
   // cout << any_word[0] <<" "<<isalnum(any_word[0])<< endl; // перевіряє чи число чи буква
   // cout << any_word[5] <<" "<<(bool)isalnum(any_word[5])<< endl;

   // // letter or number
   // cout << any_word[0] << " " << isalpha(any_word[0]) << endl; // перевіряє чи число чи буква
   // cout << any_word[5] << " " << (bool)isalpha(any_word[5]) << endl;
   // // is number
   // cout << any_word[0] << " " << isdigit(any_word[0]) << endl; // перевіряє чи число чи буква
   // cout << any_word[5] << " " << (bool)isdigit(any_word[5]) << endl;
   // // is big letter
   // cout << any_word[0] << " " << isupper(any_word[0]) << endl; // перевіряє чи число чи буква
   // cout << any_word[5] << " " << (bool)isupper(any_word[5]) << endl;
   // // is small letter
   // cout << any_word[0] << " " << islower(any_word[0]) << endl; // перевіряє чи число чи буква
   // cout << any_word[5] << " " << (bool)islower(any_word[5]) << endl;
   // // 
   // cout << any_word[0] << " " << (char)tolower(any_word[0]) << endl; // перевіряє чи число чи буква
   // cout << any_word[5] << " " << (char)tolower(any_word[5]) << endl;
   // // 
   // cout << any_word[2] << " " << (char)toupper(any_word[2]) << endl; // перевіряє чи число чи буква
   // cout << any_word[5] << " " << (char)toupper(any_word[5]) << endl;
   // cout << any_word[5] << " " << (char)isspace(any_word[5]) << endl;//


   // double x = -5, y = 2.7, z = 3.14;
   // cout << setw(5)<<x  << endl;
   // cout << setw(5)<< y << endl;
   // cout<< setw(5) << z << endl;


   // SetColor(5);
   // cout << "Hello" << endl;
   // SetColor(7);

   // for (int i = 0; i < 15; i++)
   // {
   //     SetColor(i);
   //     cout << "Hello" << endl;
   // }
   // Sleep(3000);
   // system("cls");//clear console
   // srand(time(0));
   // //for (int i = 0; i < 150; i++)
   // //{
   // //    SetPos(rand()%30, rand() % 30);
   // //    SetColor(rand() % 16);
   // //    cout << "* ";
   // //    Sleep(250);
   // //}

   // for (int i = 0; i < 255; i++)
   // {
   //     cout << i << "---> " << (char)i << endl;
   // }

   
} //

