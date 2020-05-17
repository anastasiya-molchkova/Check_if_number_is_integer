/* Напишите программу, которая проверяет, является ли введенная пользователем строка целым числом. */

#include <iostream>
#include <clocale>  // для вывода на кириллице

using std::cout; using std::cin; using std::endl;

// самописная функция вычисления модуля числа
double absolute(double number)
{
	if (number >= 0) return number;
	else return -number;
}

// получаем от пользователя количество чисел в последовательности
void check()
{
	cout << "Введите строку: ";
	double answer;
	cin >> answer;
	if (cin.fail()|| (absolute(answer - static_cast<int>(answer)) > 0))
	{
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Введённая строка - не целое число." << endl;
	}
	else cout << "Вы ввели целое число." << endl;
}

int main()
{
	setlocale(LC_CTYPE, "rus"); // для вывода на кириллице
	while (true) check();
	return 0;
}