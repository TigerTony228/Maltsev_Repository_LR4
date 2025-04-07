 #include <iostream>
 #include <cmath>
 #include <iomanip>
 
 using namespace std;
 
 void proverka(float& number)
 {
     while ((!(cin >> number) || (cin.peek() != '\n')))
     {
         cin.clear();
         while (cin.get() != '\n');
         {
             cout << "введите корректное число" << endl;
         }
     }
 }
 
 void proverka(int& number)
 {
     while ((!(cin >> number) || (cin.peek() != '\n')))
     {
         cin.clear();
         while (cin.get() != '\n');
         {
             cout << "введите корректное число" << endl;
         }
     }
 }
 
 void task1(float& x)
 {
    cout << "введите вещественное число х: ";
    proverka(x);
 }
 
 void task2(int& y)
 {
    cout << "введите натуральное число y: ";
    proverka(y);
 }
 
 void task3(float&x, int&y)
 {

 }
 
 void task4(float&x, int&y)
 {

 }
 
 void menu()
 {
     int number;
     float x=0;
     int y=0;
 
     do {
         cout << "1. ввести вещественное число x" << endl;
         cout << "2. ввести натуральное число y" << endl;
         cout << "3. округлить х до y разрядов" << endl;
         cout << "4. отбросить целую часть от х" << endl;
         cout << "5. выход" << endl;
         cout << "введите номер задания(от 1 до 4) или 5 для выхода из программы: ";
 
         int number;
 
         proverka(number);
 
         switch (number)
         {
         case 1:
             task1(x);
             break;
 
         case 2:
             task2(y);
             break;
 
         case 3:
             task3(x,y);
             break;
 
         case 4:
             task4(x,y);
             break;
 
         case 5:
             cout << "выход" << endl;
             exit(0);
 
         default: menu();
         }
     } while (number != 5);
 }
 
 int main()
 {
     setlocale(LC_ALL, "Russian");
     menu();
 
     return 0;
 }