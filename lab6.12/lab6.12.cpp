#include <iostream>
#include <time.h>
#include <iomanip>
#include <Windows.h>

using namespace std;

void array1(int* r, const int n, const int min, const int max, int i)
{
	r[i] = min + rand() % (max - min + 1);
	if (i < n - 1)
		array1(r, n, min, max, i + 1);
}

void array2(int* r, const int n, int i)
{
	if ((r[i] % 2 == 0) || (r[i] % 7 != 0))
		cout << 0 << "; ";
	else
		cout << r[i] << "; ";
	if (i < n - 1)
		return array2(r, n, i + 1);
}


void mas(int* r, const int n, int i)
{
	cout << " " << r[i] << "; ";
	if (i < n - 1)
		mas(r, n, i + 1);
	else
		cout << endl;
}

int sum(int* r, const int n, int i, int S)
{
	if ((r[i] % 2 == 0) || (r[i] % 7 != 0))
		S += r[i];
	if (i < n - 1)
		return sum(r, n, i + 1, S);
	else
		return S;
}

int number(int* r, const int n, int i, int j)
{
	if ((r[i] % 2 == 0) || (i % 7 != 0))
		j++;
	if (i < n - 1)
		return number(r, n, i + 1, j);
	else
		return j;
}

int main()
{
	srand((unsigned)time(NULL));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int n = 26;
	int r[n];
	int min = 3;
	int max = 92;
	array1(r, n, min, max, 0);
	cout << "Масив із рандомних чисел:";
	mas(r, n, 0);
	cout << "Модифікований масив: ";
	array2(r, n, 0);
	cout << endl;
	cout << "Сума елементів масиву: " << sum(r, n, 0, 0) << endl;
	cout << "Кількість елементів масиву: " << number(r, n, 0, 0) << endl;

	return 0;
}