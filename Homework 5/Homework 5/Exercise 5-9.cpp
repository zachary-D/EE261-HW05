#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int first;
	int second;
	int third;
	int fourth;

	int * current;		//The value currently being addressed

	int lowest;			//The number of the lowest value
	int * lowest_pntr = &first;	//A pointer to the lowest value

	for (int inputCount = 1; inputCount <= 4; inputCount++)
	{
		switch (inputCount)
		{
		case 1:
			current = &first;
			break;
		case 2:
			current = &second;
			break;
		case 3:
			current = &third;
			break;
		case 4:
			current = &fourth;
			break;
		default:
			current = &fourth;
			break;
		}


		do
		{
			cout << "Please enter input " << inputCount << endl;
			cin >> *current;

			if (!(0 <= *current && *current <= 10))
			{
				cout << "That value is invalid." << endl;
			}
			

		} while (!(0 <= *current && *current <= 10));

		if (*current < *lowest_pntr)		//Check to see if the newest value is lower than the others
		{
			lowest = inputCount;
			lowest_pntr = current;
		}
		cout << endl;
	}

	int sumOfScores = 0;

	if (lowest != 1) sumOfScores += first;
	if (lowest != 2) sumOfScores += second;
	if (lowest != 3) sumOfScores += third;
	if (lowest != 4) sumOfScores += fourth;

	double average = (double)sumOfScores / 3;

	cout << "The average is " << average << endl;

	cin.get();
	cin.get();

	return 0;
}