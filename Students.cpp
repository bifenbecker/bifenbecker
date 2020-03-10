#include <iostream>

using namespace std;

struct students {
	char surname[20];
	char name[20];
	char patro[20];
	int age;
	int course;
	char perf[20];
};
void in(students* mas, int n) {
	cin.ignore();
	for (int i = 0; i < n; i++) {
		cout << "Surname: ";
		cin.getline(mas[i].surname, 20);

		cout << "Name: ";
		cin.getline(mas[i].name, 20);

		cout << "Patronymic: ";
		cin.getline(mas[i].patro, 20);

		cout << "Age: ";
		cin >> mas[i].age;
		cin.ignore();

		cout << "Course: ";
		cin >> mas[i].course;
		cin.ignore();

		cout << "Academic perfomance: ";
		cin.getline(mas[i].perf, 20);
	}
}
void foo(students* mas, int num, int n) {
	int min = mas[0].age;
	int a;
	for (int i = 0; i < n; i++) {
		if (mas[i].course == num) {
			if (mas[i].age < min) {
				min = mas[i].age;
				a = i;
			}
		}
	}
	cout << mas[a].age << " " << mas[a].surname << " " << mas[a].name;
}

int main() {
	int n;
	cin >> n;
	students* mas = new students[n];
	in(mas, n);
	int numCourse;
	cout << "Enter number of course: ";
	cin >> numCourse;
	foo(mas, numCourse, n);
	//int a = foo(mas, numCourse, n);
	//cout << mas[a].age << " " << mas[a].surname << " " << mas[a].name << endl;
	return 0;
}
