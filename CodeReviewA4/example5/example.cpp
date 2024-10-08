#include <iostream>
#include <cmath>
#include <sstream>

using namespace std;

struct Ikosaeder {
    int side;

    Ikosaeder(int side) : side(side) {}

    //  "const" : Function may not change member variables
    float calculateVolume() const { return 5*pow(side,3)*(3+sqrt(5))/12; };
    float calculateArea() const { return 5*pow(side,2)*sqrt(3); };
    float calculateCircumradius() const { return side/4.0*sqrt(2*(5+sqrt(5))); };
    float calculateInradius() const { return side*sqrt(3)*(3+sqrt(5))/12; };

};

string formatIkosaeder(const Ikosaeder& ikosaeder)
{
    stringstream output;
    output << "IKOSAEDER: " << endl;
    output << "Volume: " << ikosaeder.calculateVolume() << endl;
    output << "Area: " << ikosaeder.calculateArea() << endl;
    output << "Circumradius: " << ikosaeder.calculateCircumradius() << endl;
    output << "Inradius: " << ikosaeder.calculateInradius() << endl;

    return output.str();
}

int
main (int argc, char *argv[])
{
  Ikosaeder ikosaeder(5);
  cout << formatIkosaeder(ikosaeder) << endl;
  return 0;
}