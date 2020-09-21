#include <iostream>
#include <time.h>
using namespace std;
int Guess(int);
int main()
{
	int ran,Round;
	srand(time(NULL));

	ran = rand() % 9 + 1;

	cout << "###Welcome to guessing number game###" << endl;
	cout << "Secret number has been chosen" << endl;

	Round = Guess(ran);

	cout << "The secret number is " << ran << "" << endl;
	cout << "You made " << Round << " guesses" << endl;


}
int Guess(int ran) 
{	int n,Round;

	for (Round = 1;; Round++) {
		cout << "Guess the number (1 to 10) : ";
		cin >> n;
		if (n < ran)

			cout << "The secret number is lower" << endl;

		else if (n > ran)

			cout << "The secret number is higher" << endl;

		else
		{
			cout << "Congratulations!" << endl;
			break;
		}
	}
	return Round;
}	