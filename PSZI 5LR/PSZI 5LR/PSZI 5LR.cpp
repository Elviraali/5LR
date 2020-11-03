#include <iostream>
#include <time.h>
using namespace std;

void main()
{
	int N;
	cout << "Vvedite dlinu parolia:\n";  //выводим сообщение
	N = 6; //считываем длину пароля
	srand(time(NULL)); //инициализируем генератор случайных чисел
	char* pass = new char[N + 1]; //выделяем память для строки пароля
	for (int i = 0; i < N; ++i)
	{
		switch (rand() % 2) //генерируем случайное число от 0 до 1
		{
		case 0: //если ноль
			pass[i] = rand() % 10 + '0'; //вставляем в пароль случайную цифру
			break;
		case 1: //если единица
			pass[i] = rand() % 26 + 'а'; //вставляем случайную маленькую букву
			break;
		}
	}
	pass[N] = 0; //записываем в конец строки признак конца строки
	cout << pass; //выводим пароль на экран
}
