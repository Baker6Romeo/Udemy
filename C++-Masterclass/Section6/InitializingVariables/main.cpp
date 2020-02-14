#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// This program will calculate the area of a room in square feet.

int main(){
	
	cout << "Enter the width of the room: ";
	int roomWidth {0};
	cin >> roomWidth;
	
	cout << "Enter the length of the room: ";
	int roomLength {0};
	cin >> roomLength;
	
	cout << "The area of the room is " << roomWidth * roomLength << " square feet." << endl;	
	
	return 0;
}