#include <iostream>
#include <ctime>
using namespace std;


int* enter(int n) {
	srand(time(NULL));
	int* mas = new int[n];
	for (int i = 0; i < n; i++) {
		*(mas + i) = rand() + 100;
	}
	return mas;

}
void print(int* a, int n) {
	for (int i = 0; i < n; i++) {
		cout << *(a + i) << " ";
	}
}
void error() {
	cout << "There are some numbers" << endl;
}
int searchNum(int* mas, int num, int n) {
	int* seq = new int[n];
	for (int i = 0; i < n; i++) {
		*(seq + i) = *(mas + i);
	}
	int max = 0, poz = 0;
	for (int i = 0; i < n; i++) {
		int k = 0;
		int dig = 0;
		while (*(seq + i)) {
			dig = *(seq + i) % 10;
			if (dig == num) {
				k++;
			}
			*(seq + i) = *(seq + i) / 10;
		}
		if (k > max) {
			max = k;
			poz = i;
		}

	}
	return *(mas + poz);
}

int main()
{
	cout << "Enter size of mas: ";
	int n;
	cin >> n; //Ввод размера массива
	int* mas = enter(n); //Создание массива
	print(mas, n);//Вывод массива
	cout << endl << "Enter number: ";
	int num;
	cin >> num;//Цифра 
	cout << searchNum(mas, num, n);

	return 0;
}

