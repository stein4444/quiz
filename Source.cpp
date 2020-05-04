#include<iostream>
#include "Quize.h"
using namespace std;

int main() {
	init();
	int action = 0;
	do
	{
		cout << "If you want to add new quize press - 1" << endl;
		cout << "If you want to show and pass quiz press - 2" << endl;
		cout << "3. Exit" << endl;
		cout << endl;
		cout << "Select action: ";
		cin >> action;
		switch (action)
		{
		case 1: {
			addQuiz();
		}break;

		case 2: {
			showQuizes();
			passQuiz();
		}break;

		case 3: {
			cout << "Bye Bye" << endl;
		}break;

		default:
		{
			cout << "Error try again" << endl;
		}
		break;
		}
	} while (action != 3);

	return 0;
}