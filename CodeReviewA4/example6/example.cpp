#include <iostream>
#include <cmath>
#include <sstream>

using namespace std;

struct Dodekaeder {
	int side;

	Dodekaeder(int side) : side(side) {}

	//  "const" : Function may not change member variables
	float calculateVolume() const { return pow(side,3)*(15+7*sqrt(5))/4.0; };
	float calculateArea() const { return 3*pow(side,2)*sqrt(5*(5+2*sqrt(5))); };
	float calculateCircumradius() const { return side*sqrt(3)*(1+sqrt(5))/4.0; };
	float calculateInradius() const { return side*sqrt(10*(25+11*sqrt(5)))/20.0; };

};

string formatDodekaeder(const Dodekaeder& dodekaeder)
{
	stringstream output;
	output << "DODEKAEDER: " << endl;
	output << "Volume: " << dodekaeder.calculateVolume() << endl;
	output << "Area: " << dodekaeder.calculateArea() << endl;
	output << "Circumradius: " << dodekaeder.calculateCircumradius() << endl;
	output << "Inradius: " << dodekaeder.calculateInradius() << endl;

	return output.str();
}

int
main (int argc, char *argv[])
{
  Dodekaeder dodekaeder(2);
  cout << formatDodekaeder(dodekaeder) << endl;
  return 0;
}