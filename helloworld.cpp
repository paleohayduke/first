// This is my first program, Hello World.
#include <iostream>
using namespace std;

int main()
{
	int length, width, area;
	char c;

	cout << "Hello World... and then some.\n\n";
	cout << "This program calculates the area of a rectangle.\n";

	// Ask the user to unput the rectangle's length and width
	cout << "Enter the length of the rectangle: ";
	cin >> length;
	cout << "Enter the width of the rectangle: ";
	cin >> width;

	// calculate and display the rectangle's area
	area = length * width;
	cout << "\n\nThe Area of the rectangle is " << area << endl;
	//system("pause");
	cout << "Enter a character to end the program: ";
	cin >> c;
	return 0;
}
