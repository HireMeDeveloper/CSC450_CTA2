#include <iostream>
using namespace std;

int main(){
	bool cont = true;
	string string1 = "";
	string string2 = "";

	while (cont){
		cout << "Enter the first string: ";
		cin >> string1;

		cout << "Enter the second string: ";
		cin >> string2;

		string combined = string1 + string2;

		cout << "The combined string is: " << combined << endl;

		do {
			cout << endl << "Would you like to run it again? Y/N";
			string input;
			cin >> input;

			for (char &c : input){
				c = tolower(c);
			}

			if (input == "y" || input == "n"){
				cont = (input == "y");
				break;
			}
		} while (true);
	}
}
