#include <iostream>
#include <string>
#include <sstream>


using std::cin;
using std::cout;
using std::endl;

using std::string;



int main()
{
	string planet;
	float weight;

	while (planet != "end")
	{
		std::stringstream convert;

		do //Get the user's weight
		{
			if (convert.fail())
			{
				cout << "I'm sorry, I don't understand that input." << endl;
				convert = std::stringstream();
				convert.clear();
			}

			cout << "Please enter your weight" << endl << " >";
			string input;
			cin >> input;

			convert << input;
			convert >> weight;

		} while (convert.fail());

		cout << "Please enter a planet, or 'end' to end the program" << endl << " >";
		cin >> planet;

		//Convert planet to lowercase
		for (auto iter = planet.begin(); iter != planet.end(); iter++)
		{
			*iter = tolower(*iter);
		}

		float conv;	//The conversion rate

		//Set the conversion rate according to 'planet'
		if (planet == "mercury") conv = 0.4155;
		else if (planet == "venus") conv = 0.8975;
		else if (planet == "earth") conv = 1;
		else if (planet == "moon") conv = 0.166;
		else if (planet == "mars") conv = 0.3507;
		else if (planet == "jupiter") conv = 2.5374;
		else if (planet == "saturn") conv = 1.0677;
		else if (planet == "uranus") conv = 0.8947;
		else if (planet == "neptune") conv = 1.1794;
		else if (planet == "pluto") conv = 0.0899;
		else {
			cout << "I'm sorry, that planet is invalid" << endl;
			continue;
		}
		
		float convertedWeight = weight * conv;	//Calculate the weight

		//Convert the first character to uppercase
		planet[0] = toupper(planet[0]);



		cout << weight << "lbs on " << planet << " is " << convertedWeight << "lbs" << endl << endl;


	}


	return 0;
}