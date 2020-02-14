// Section 6
// Primitive Types

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
	/***************************************************************************
	 * Character Type
	 * ************************************************************************/

	char middleInitial {'A'}; // Notice the single quotes around characters
	cout << "My middle initial is " << middleInitial << "." << endl;

	/***************************************************************************
	 * Integer Type
	 * ************************************************************************/

	unsigned short int examScore {55}; // Same as unsigned short examScore {55}
	cout << "My exam score was " << examScore << "." << endl;

	int countriesRepresented {65};
	cout << "There were " << countriesRepresented << " countries represented "
	"in my meeting." << endl;

	long peopleInFlorida {20610000};
	cout << "There are about " << peopleInFlorida << " people in Florida."
        << endl;

	long peopleOnEarth = {7'600'000'000'000};
	cout << "There are " << peopleOnEarth << " on Earth." << endl;

	long long distanceToAlphaCentauri {9'461'000'000'000};
	cout << "The distance to Alpha Centauri is " << distanceToAlphaCentauri << " kilometers." << endl;

	/****************************************************************************
	 * Floating Point Types
	****************************************************************************/

	float carPayment {401.23};
	cout << "My car payment is $" << carPayment << "." << endl;

	double pi {3.14159};
	cout << "PI is " << pi << endl;

  long double large_amount {2.7e20};
  cout << large_amount << " is a very large number" << endl;

  /****************************************************************************
	 * Boolean type
	****************************************************************************/

  bool game_over {false};
  cout << "The value of game_over is " << game_over << "." << endl;

  /****************************************************************************
	 * Overflow example
	****************************************************************************/

  short value1 {30000};
  short value2 {1000};
  short product {value1 * value2};

  cout << "The product of " << value1 << " and " << value2 << " is " << product << "." << endl ;

	return 0;
}