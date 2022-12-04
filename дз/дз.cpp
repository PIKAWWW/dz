#include <iostream>
#include <string>
using namespace std;

class Dz5_2 {
public:

	void A() {
		float a;
		cout << "Введите a: ";
		cin >> a;

		float sum = 0;
		float n = 0;
		float _n = 0;

		do {
			_n = n++;
			if (_n != 0)
				sum += 1 / _n;
		} while (sum <= a);

		cout << "a) " << sum << endl << "b) " << _n << endl;
	}

	void B() {
		string n;
		cout << "Введите n: ";
		cin.ignore();
		getline(cin, n);
		int sum = 0;

		cout << "a)" << n.size() << endl;

		for (int i = 0; i < n.size(); i++)
			sum += int(n[i]) - int('0');
		cout << "b)" << sum << endl;

		cout << "c)" << n[0] << endl;
	}

	void C() {}

	void D() {
		string _n;
		int n;
		cout << "Введите n: ";
		getline(cin, _n);

		n = stoi(_n) * stoi(_n);
		_n = to_string(n);

		for (int i = 0; i < _n.size(); i++)
			if (_n[i] == '3') {
				cout << "Входит" << endl;
				return;
			}
		cout << "Не входит" << endl;
	}

	void E() {
		cout << "Введите m: ";
		int m;
		cin >> m;
		int maxs_chislo = 1;

			if (m > 0)
				while (maxs_chislo < m) {
					maxs_chislo *= 4;
				}
			cout << maxs_chislo / 4 << endl;
	}

	void F() {
		int n;
		cout << "Введите n: ";
		cin >> n;
		int min_chislo = 1;

		while (min_chislo < n) {
			min_chislo <<= 1;
		}
		cout << min_chislo << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "RUS");

	Dz5_2 dz5_2;

	dz5_2.A();
	dz5_2.B();
	dz5_2.D();
	dz5_2.E();
	dz5_2.F();
}