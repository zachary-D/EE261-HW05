#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

using std::string;

int main()
{
	string input;

	while (input != "end")
	{
		cout << "Please enter a character, or type 'end' to end the program." << endl;
		cout << " >"; 
		std::getline(cin, input);

		//Remove spaces from the string
		/*{
			int loc = 0;	//The last position a space was found
			do
			{
				loc = input.find(' ', loc);
				if (loc != string::npos)		//When a space is found,
				{
					//Set the string to be equal to the section of the string
					//leading up to the space combined with the section after
					//the space to the end
					input = input.substr(0, loc) + input.substr(loc + 1);
				}
			} while (loc != string::npos);	//Loop until no more spaces are present
		}*/

		string conv;	//The letter input, converted into the ICAO alphabet-word system

		//If the input is a single character, and the character is a-z or A-Z
		if (input.size() == 1 && ( ('a' <= input[0] && input[0] <= 'z') || ('A' <= input[0] && input[0] <= 'Z') ) )	
		{
			//Convert the letter to lowercase
			char letter = tolower(input[0]);

			//Pair the letter with its codeword
			switch(letter)
			{
			case 'a':
				conv = "Alpha";
				break;
			case 'b':
				conv = "Bravo";
				break;
			case 'c':
				conv = "Charlie";
				break;
			case 'd':
				conv = "Delta";
				break;
			case 'e':
				conv = "Echo";
				break;
			case 'f':
				conv = "Foxtrot";
				break;
			case 'g':
				conv = "Golf";
				break;
			case 'h':
				conv = "Hotel";
				break;
			case 'i':
				conv = "India";
				break;
			case 'j':
				conv = "Juliet";
				break;
			case 'k':
				conv = "Kilo";
				break;
			case 'l':
				conv = "Lima";
				break;
			case 'm':
				conv = "Mike";
				break;
			case 'n':
				conv = "November";
				break;
			case 'o':
				conv = "Oscar";
				break;
			case 'p':
				conv = "Papa";
				break;
			case 'q':
				conv = "Quebec";
				break;
			case 'r':
				conv = "Romeo";
				break;
			case 's':
				conv = "Sierra";
				break;
			case 't':
				conv = "Tango";
				break;
			case 'u':
				conv = "Uniform";
				break;
			case 'v':
				conv = "Victor";
				break;
			case 'w':
				conv = "Whiskey";
				break;
			case 'x':
				conv = "X-ray";
				break;
			case 'y':
				conv = "Yankee";
				break;
			case 'z':
				conv = "Zulu";
				break;
			default:
				conv = "INVALID ARGUMENT";
				break;

			}

			cout << conv << endl;
		}
		else if (input != "end")
		{
			cout << "I'm sorry, I don't understand \"" << input << "\".  Please try again." << endl;
		}
		cout << endl;
	}






	return 0;
}