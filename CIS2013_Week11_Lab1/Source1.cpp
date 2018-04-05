#include<iostream>
#include<cstring>
using namespace std;

class BirthDate {
public:
	int year;
	int month;
	int day;
	void print() {
		cout << month << "/" << day << "/" << year;
	}
};

int main(){

	BirthDate bob;
	cout << "Enter the Bobs birthday day: ";
	cin >> bob.day;

	cout << "Enter the Bobs birthday month: ";
	cin >> bob.month;

	cout << "Enter the Bobs birthday year: ";
	cin >> bob.year;

	cout << "Bobs dirthday is ";
	bob.print;
	cout << endl;
}

