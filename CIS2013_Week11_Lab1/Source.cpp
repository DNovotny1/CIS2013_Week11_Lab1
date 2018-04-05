#include<iostream>
#include<cstring>
using namespace std;

struct myDate {
	int day;
	int month;
	int year;
};

void printmyDate(myDate d) {
	cout << d.month << "/" << d.day << "/" << d.year;
}


int main() {

	int d;

	myDate bob_Bday;
	myDate tom_Bday;
	cout << "Enter the Bobs birthday day: ";
	cin >> bob_Bday.day;

	cout << "Enter the Bobs birthday month: ";
	cin >> bob_Bday.month;

	cout << "Enter the Bobs birthday year: ";
	cin >> bob_Bday.year;
	
	cout << "Bobs dirthday is ";
	printmyDate(bob_Bday);
	cout << endl;

	cin >> d;
}

