// C++11_Beginner.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
//Составить программу, которая будет считывать введённое пятизначное число.После чего, 
////каждую цифру этого числа необходимо вывести в новой строке.
//В этой задаче нужно воспользоваться операцией — остаток от деления %, 
//пример использования которой показан в статье — арифметические операции, в самом низу.
//1 цифра равна 1
//2 цифра равна 0
//3 цифра равна 8
//4 цифра равна 1
//5 цифра равна 9


#include <iostream>
#include <string>

using namespace std;

void nameOfProgramm() {
    setlocale(0, "ru");

    string programmName = "           Деление числа на разряды";
    string insertSent = "Введите пятизначное число: ";
    cout << programmName;
    cout << endl;
    cout << insertSent;
}

int Count(int a) {
    return abs(a) < 10 ? 1 : (1 + Count(a / 10));
}

void insertNumberAndDivideByCategory() {
    int randomNumber;
    cin >> randomNumber;

    int countOfNumber = Count(randomNumber);
    

    if(countOfNumber < 5) {
        cout << "Введите пятизначное число" << endl;
        insertNumberAndDivideByCategory();
    }

    else {
        cout << "1 цифра равна " << randomNumber / 10000 << endl ;
        cout << "2 цифра равна " << (randomNumber / 1000)%10 << endl;
        cout << "3 цифра равна " << (randomNumber / 100)%10 << endl;
        cout << "4 цифра равна " << (randomNumber / 10)%10 << endl;
        cout << "5 цифра равна " << randomNumber % 10 << endl;
    }

}




int main()
{
    nameOfProgramm();
    insertNumberAndDivideByCategory();
   

    system("pause");
    return 0;
    
}

