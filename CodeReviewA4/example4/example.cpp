#include <iostream>
#include <cmath>
#include <sstream>

using namespace std;

struct Octahedron {
  int side;
  float volume, area, inradius, circumradius;

  Octahedron(int side) : side(side) {
  	volume=pow(side,3)*sqrt(2)/3;
  	area=2*pow(side,2)*sqrt(3);
  	circumradius=side*sqrt(2)/2;
  	inradius=side*sqrt(6)/6;
  }

  float calculateVolume() const { return pow(side,3)*sqrt(2)/3; };
  float calculateArea() const { return 2*pow(side,2)*sqrt(3); };
  float calculateCircumradius() const { return side*sqrt(2)/2; };
  float calculateInradius() const { return side*sqrt(6)/6; };
};

string formatOctahedron(const Octahedron& octahedron)
{
    stringstream output;
    output << "OCTAHEDRON: " << endl;
    output << "Volume: " << octahedron.calculateVolume() << endl;
    output << "Area: " << octahedron.calculateArea() << endl;
    output << "Circumradius: " << octahedron.calculateCircumradius() << endl;
    output << "Inradius: " << octahedron.calculateInradius() << endl;

    return output.str();
}

int
main (int argc, char *argv[])
{

  Octahedron octahedron(2);
  cout << formatOctahedron(octahedron) << endl;
  return 0;
}