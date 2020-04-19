#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

static const char alphanum[] =
"0123456789"
"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
"abcdefghijklmnopqrstuvwxyz";
int ssize = sizeof(alphanum) - 1;

int main()
{
	int length;
	cout<<"How many characters do you want?"<<endl;
	cin>>length;

	cout<<"Password: ";

	for (int i = 0; i < length; i++) {
		cout << alphanum[rand() % ssize];
	}

	cout<<"\n\nThis program has been written by jerskisnow!"<<endl;

	system("pause");


	return 0;
}
