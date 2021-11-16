// ConsoleApplication2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.


#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	const int n = 30;

	//zadanie 1
	cout << "Zadanie 1\n\n";

	int tab1[10] = { 3, 6, 9, 12, 15, 18, 21, 24, 27, 30 };

	for (int i = 0; i < 10; i++) {
		cout << tab1[i] << "\t";
	}cout << "\n\n";

	//zadanie 2
	cout << "\n\nZadanie 2\n\n";

	for (int i = 0; i < 10; i+=2) {
		cout << tab1[i] << "\t";
	}cout << "\n\n";

	//zadanie 3
	cout << "\n\nZadanie 3\n\nPodaj wartosc a\n";

	int tab2[n];
	int a;

	cin >> a;
	tab2[0] = a;
	for (int i = 1; i < n; i++) {
		tab2[i] = tab2[i-1] - 5;
	}

	for (int i = 0; i < n; i++) {
		cout << tab2[i] << "\t";
	}cout << "\n\n";

	//zadanie 4
	cout << "\n\nZadanie 4\n\n";

	int tab[n];
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		tab[i] = rand() % 74 - 23;
	}
	int min = tab[0];

	for (int i = 0; i < n; i++) {
		cout << tab[i] << "\t";
	}cout << "\n\n";
	for (int i = 1; i < n; i++) {
		if (tab[i] < min) min = tab[i];
	}
	cout << "Minimalna wartosc owej tablicy to " << min << "\n";

	//zadanie 5
	cout << "\n\nZadanie 5\n\nPodaj dwie pierwsze wartosci\n";

	int tab4[n];
	cin >> tab4[0] >> tab4[1];
	for (int i = 2; i < n; i++) {
		tab4[i] = tab4[i - 2] + tab4[i - 1];
	}

	for (int i = 0; i < n; i++) {
		cout << tab4[i] << "\t";
	}cout << "\n\n";

	/*zadanie 6*/
	cout << "\n\nZadanie 6\n\n";

	int tab3[20] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (int i = 10; i < 20; i++) {
		tab3[i] = tab3[i - 10];
	}

	for (int i = 0; i < 20; i++) {
		cout << tab3[i] << "\t";
	}cout << "\n\n";

	//Zadanie 7
	cout << "\n\nZadanie 7\n\n";

	const int o = 3, p = 3;
	int tab5[o][p] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
	int sum = 0;
	for (int i = 0; i < o; i++) {
		sum += tab5[i][i];
	}

	for (int i = 0; i < o; i++) {
		for (int j = 0; j < p; j++) {
			cout << tab5[i][j] << "\t";
		}cout << "\n";
	}
	cout << "\nsuma wynosi " << sum;

	//Zadanie 8
	cout << "\n\nZadanie 8\n\n";

	int tab6[o][p] = { {10, 20, 30}, {40, 50, 60}, {70, 80, 90} };
	int tab7[o][p];

	cout << "tab5\n";
	for (int i = 0; i < o; i++) {
		for (int j = 0; j < p; j++) {
			cout << tab5[i][j] << "\t";
		}cout << "\n";
	}cout << "\n";

	cout << "tab6\n";
	for (int i = 0; i < o; i++) {
		for (int j = 0; j < p; j++) {
			cout << tab6[i][j] << "\t";
		}cout << "\n";
	}cout << "\n";
	
	cout << "dodawanie . . .";
	for (int i = 0; i < o; i++) {
		for (int j = 0; j < p; j++) {
			tab7[i][j] = tab5[i][j] + tab6[i][j];
		}cout << "\n";
	}
	
	cout << "tab7\n";
	for (int i = 0; i < o; i++) {
		for (int j = 0; j < p; j++) {
			cout << tab7[i][j] << "\t";
		}cout << "\n";
	}
}	