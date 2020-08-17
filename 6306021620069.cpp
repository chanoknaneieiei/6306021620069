#include <iostream>
using namespace std;
int CalAge(int);
int main()
{
	int year;
	for(int i = 1; i <= 3 ;i++)
	{
		cout << "Enter your year "<< i << " : ";
		cin  >> year;
		int Age=CalAge(year);
		cout<< "Age " << i<<" : "<<Age<<endl;
		cout<<"----------------------------------------"<<endl;
	}
	cout<<"Thank You"<<endl;
	return(0);
}

int CalAge(int year)
{
	int Age= 2563-year	;
		return(Age);
}