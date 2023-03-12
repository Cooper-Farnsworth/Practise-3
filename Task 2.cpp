#include "rational.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "¬ведите количество вводимых дробей: ";
	cin >> n;
	rational* arr = new rational[n];
	for (int i = 0; i < n; i++) {
		int a, b;
		cout << "¬ведите числитель и знаменатель дроби: ";
		cin >> a >> b;
		arr[i].set(a, b);
	}
	for (int i = 0; i < n; i++) {
		arr[i].show();
		cout << endl;
	}
	delete[] arr;
	return 0;
}