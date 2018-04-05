#include<iostream>
#include<cstring>
using namespace std;

class BirthDate {
private:
	int year;
	int month;
	int day;

public:
	void print() {
		cout << month << "/" << day << "/" << year;
	}

	void set(int d, int m, int y) {
		year = y;
		month = m;
		day = d;
	}
};

int main(){

	BirthDate bob;
	/*cout << "Enter the Bobs birthday day: ";
	cin >> bob.day;

	cout << "Enter the Bobs birthday month: ";
	cin >> bob.month;

	cout << "Enter the Bobs birthday year: ";
	cin >> bob.year;*/

	cout << "Bobs dirthday is ";
	bob.print;
	cout << endl;

	BirthDate tom;
	tom.set(1, 2, 1992);
	tom.print;

}

