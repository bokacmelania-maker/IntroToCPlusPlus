#include <iostream>

using namespace std;

//void Hello()
//{
//    cout << "Hello world" << endl;
//}
//void sayHello();//prototype function
//void Star(int count)//1500
//{
//    for (int i = 0; i < count; i++)
//    {
//        cout << "* ";
//    }
//    cout << endl;
//}
//void AnyLine(char symbol, int count)
//{
//    for (int i = 0; i < count; i++)
//    {
//        cout << symbol << " ";
//    }
//    cout << endl;
//}
//int myPow(int number, int step)//5**4
//{
//    int pow = 1;
//    for (int i = 0; i < step; i++)
//    {
//        pow *= number;
//    }
//    //cout << "Pow number " << number << " = " << pow << endl;
//    return pow;
//}
//int Max(int a, int b)
//{
//    /*if (a > b)
//        return a;
//    else
//        return b;*/
//    return (a > b) ? a : b;
//}
//int Min(int a, int b)
//{
//    return (a < b) ? a : b;
//}
//void Second()
//{
//    cout << "Second function working" << endl;
//}
//void First()
//{
//    cout << "First function start" << endl;
//    Second();
//    cout << "First function end" << endl;
//}
//void Change(int a, int b)
//{
//    cout << "a = " << a << " . b = " << b << endl;
//    int temp = a;
//    a = b;
//    b = temp;
//    cout << "a = " << a << " . b = " << b << endl;
//}
//void InitArray(int arr[], int size)
//{
//    for (int i = 0; i < size; i++)
//    {
//        arr[i] = rand() % 100;
//    }
//}
//void ShowArray(int arr[], int size)
//{
//    for (int i = 0; i < size; i++)
//    {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//}
//int SummaArray(int arr[], int size)
//{
//    int summa = 0;
//    for (int i = 0; i < size; i++)
//    {
//        summa += arr[i];
//    }
//    return summa;
//}
//void InitMatrix(int arr[][7], int rows, int cols)
//{
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < cols; j++)
//        {
//            arr[i][j] = rand() % 90 + 10;
//        }
//    }
//}
//void ShowMatrix(int arr[][7], int rows, int cols)
//{
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < cols; j++)
//        {
//            cout << arr[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//int A = 100;
//void setA()
//{
//    A = 99;
//}
//void Show()
//{
//    cout << A << endl;
//}
//void setSecond()
//{
//    int A = 77;
//    cout << A << endl;
//}

//                                   прототипи функцій
//1
void rectangle(int arr[][8], int N, int K);
//2
int factorial(int Number);
//3
void simple(int NUMBER);
//4
int kyb(int NumbeR);
//5
int max(int a, int b);
//6
void TrueFalse(int NUmber);
//+12
//1
void min_max(int arr1[], int size);
//2
void arr_reverse(int arr[], int size);
//3
int Simple(int arr[], int size);




//----------------------------------MAIN------------------------------------------------------------------
int main()
{
    srand(time(0));
    ////  IsLeap(int year)  return true;
    //// if (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)
    //// day_in_month = [31,28,31,30,31,30,.....]
    ////21 05 2001 (дні)   -  16 09 2026(дні)  --> day month year

    //int A = 10;
    //cout << A << endl;
    //cout << ::A << endl;
    //::A = 333;
    //cout << ::A << endl;
    //setA();
    //Show();
    //setSecond();
    //Show();

    ///*  int a = 5;
    //  if (a == 5)
    //  {
    //      int b = 3;
    //      cout << b << endl;
    //      cout << a << endl;
    //  }
    //  cout << a << endl;
    //  cout << b << endl;*/


    //const int rows = 5;
    //const int cols = 7;
    //int array[rows][cols];
    //InitMatrix(array, rows, cols);
    //ShowMatrix(array, rows, cols);


    //const int size = 10;
    //int arr[size];
    //InitArray(arr, size);
    //ShowArray(arr, size);
    //int summa = SummaArray(arr, size);
    //cout << "Summa elements array = " << summa << endl;

    //int a = 4, b = 7;
    //cout << "a = " << a << " . b = " << b << endl;
    //Change(a, b);
    //cout << "a = " << a << " . b = " << b << endl;

    //First();
    //cout << "MAx element : " << Max(8, 120) << endl;
    //cout << "MAx element : " << Max(18, 1) << endl;
    //cout << "Min element : " << Min(18, 1) << endl;
    //cout << "Min element : " << Min(18, 100) << endl;
    //cout << "Res : " << myPow(5, 2) << endl;
    //int res = myPow(5, 4);
    //cout << "Pow returned " << res << endl;
    //AnyLine('$', 65);
    //AnyLine('#', 5);
    //AnyLine('@', 15);
    //Star(5);
    //Star(15);
    //Star(50);

    //Hello();
    //sayHello();
    //sayHello();
    //sayHello();
    //sayHello();

//-----------------------------------------------------------------
//1 
    cout << "Task 1" << endl;
    const int N = 4;
    const int K = 8;
    int Arr[N][K];

    rectangle(Arr, N, K);
    cout << " " << endl;
//2
    cout << "Task 2" << endl;
    int Number;
    cout << "Enter the number you want to calculate the factorial of: ";
    cin >> Number;
    cout << "Factorial number " << Number <<" " << "is " << factorial(Number) << endl;
    cout << " " << endl;
//3
    cout << "Task 3" << endl;
    simple(5);
    simple(13);
    simple(0);
    cout << " " << endl;
//4
    cout << "Task 4" << endl;
    int NumbeR;
    cout << "Enter the number you want to cube: ";
    cin >> NumbeR;

    cout << "Kyb number " << NumbeR << " " << "is " << kyb(NumbeR) << endl;
    cout << " " << endl;
//5
    cout << "Task 5" << endl;
    int a;
    cout << "Enter number: ";
    cin >> a;
    int b;
    cout << "Enter number: ";
    cin >> b;
    if (a == b) {
        cout << "Numbers are the same" << endl;    
    }
    else {
        cout << "Max element with " << a << " " << "and " << b << " " << " is " << max(a, b) << endl;
    }
    cout << " " << endl;
    
//6
    cout <<"Task 6"<<endl;
    int NUmber;
    cout << "Enter whatever number(-x or x): ";
    cin >> NUmber;
    cout << "Number " << NUmber << " is ";
    TrueFalse(NUmber); //виводим з нового рядка, бо VOID - не повертає значення яке можна було б вивести  
    cout << endl;
    cout << " " << endl;
//+12
    cout << "+12" << endl;
    cout << "" << endl;

//1
    cout << "Task 1" << endl;
    int arr1[5] = { 1,2,3,4,5 };
    min_max(arr1, 5); //void
    cout << " " << endl;
//2
    cout << "Task 2" << endl;
    int AAr[10]{10,9,8,7,6,5,4,3,2,1 };
    cout << "before:"<<endl;
    for (int i = 0; i < 10; i++) {
        cout << AAr[i] << " ";
    }
    cout << endl;
    cout << "after:  "<< endl;
    arr_reverse(AAr, 10); //void
    for (int i = 0; i < 10; i++) {
        cout << AAr[i] << " ";
    }
    cout << endl;
    cout << " " << endl;
//3
    cout << "Task 3" << endl;
    int arr[10] = { 0,15,13,49,2,44,10,-1,3,22 };
    cout << "Simple numbers: " << Simple(arr, 10) << endl;

    return 0;

} // --------------------------------------------------------------------------------------------------------

//void sayHello()  //
//{
//    cout << "Hello world" << endl;
//}


//Завдання 1. Написати функцію, що виводить на екран прямокутник з висотою N і шириною K
void rectangle(int Arr[][8], int N, int K)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < K; j++)
        {
            cout << "= ";
        }
        cout << endl;
    }
}
//Завдання 2. Написати функцію, яка обчислює факторіал переданого їй числа.
int factorial(int Number) {
    int result = 1;
    if (Number <= 0) {
        cout << "Number must be greater than 0" << endl;
        return 0;
    }
    for (int i = 1; i <= Number; i++)
    {
        result *= i;
    }
    return result;
}

//Завдання 3 Написати функцію, яка перевіряє, чи є передане їй число простим. Число називається простим, якщо
//воно ділиться без залишку тільки на себе та на одиницю.
void simple(int NUMBER) {
    if (NUMBER < 2) {
        cout << NUMBER << " isn't simple" << endl;
        return;
    }

    int counters = 0;
    for (int j = 1; j <= NUMBER; j++) {
        if (NUMBER % j == 0) {
            counters++;
        }
    }

    if (counters == 2) {
        cout << NUMBER << " is simple" << endl;
    }
    else {
        cout << NUMBER << " isn't simple" << endl;
    }
}
//Завдання 4. Написати функцію, яка повертає куб числа.
int kyb(int NumbeR) {
    int result = NumbeR * NumbeR * NumbeR;
    return result;
}

//Завдання 5. Написати функцію для знаходження найбільшого з двох чисел
int max(int a, int b) {
    return (a > b) ? a : b;
}

//Завдання 6. Написати функцію, яка повертає істину, якщо
//передане значення додатне, та брехню, якщо від’ємне.
void TrueFalse(int NUmber) {
    if (NUmber < 0 || NUmber == 0 ) {
       cout<<"False";
    }

    else {
        cout << "True";
    }
   
}
//+12
//Завдання 1. Написати функцію, що визначає мінімум
//і максимум(значення й номер) елементів переданого їй
//масиву.

void min_max(int arr1[], int size) {
    int min_number = arr1[0];
    int min_index = 0;

    int max_number = arr1[0];
    int max_index = 0;

    for (int i = 1; i < size; i++) {

        if (arr1[i] < min_number) {
            min_number = arr1[i];
            min_index = i;
        }

        if (arr1[i] > max_number) {
            max_number = arr1[i];
            max_index = i;
        }
    }

    cout << "Min = " << min_number << endl;
    cout << "Min index = " << min_index << endl;
    cout << "Max = " << max_number << endl;
    cout << "Max index = " << max_index << endl;
}


//Завдання 2. Написати функцію, яка міняє порядок елементів переданого їй масиву на протилежний.
void arr_reverse(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

//Завдання 3. Написати функцію, яка повертає кількість
/*простих чисел у переданому їй масиві*/

int Simple(int arr[], int size) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] < 2) {
            continue;
        }

        int counters = 0;

        for (int j = 1; j <= arr[i]; j++) {
            if (arr[i] % j == 0) {
                counters++;
            }
        }

        if (counters == 2) {
            count++;
        }
    }
    return count;
}


