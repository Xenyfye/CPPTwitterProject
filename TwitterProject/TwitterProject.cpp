
#include <iostream>
using namespace std;

int choice1;


int main()
{

	do
	{
		cout << "Twitter Dictionary\n\n";

		cout << "3 - Add\n";
		cout << "2 - Edit\n";
		cout << "1 - Delete\n";
		cout << "0 - Quit\n";

		cin >> choice1;

		switch (choice1)
		{
		case 3:
			cout << "You typed 3\n";
			break;
		case 2:
			cout << "You typed 2\n";
			break;
		case 1:
			cout << "You typed 1\n";
			break;
		case 0:
			cout << "You typed 0\n";
			break;
		default:
			continue;
			break;
		}
	}

	while (choice1 != 0);

	return 0;
	cout << "Test";
}