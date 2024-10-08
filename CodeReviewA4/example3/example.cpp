#include <iostream>
#include <cmath>
#include <sstream>


using namespace std;

struct Tetrahedron {
    int side;

    //  NOT ALLOWED! Function changes the members. It should have only necessary members
    //  Tetrahedron(int side) : side(side)
    //  {
    //  	volume = pow(side,3)*sqrt(2)/12;
    //  	area = pow(side,2)*sqrt(3);
    //  	circumradius = side*sqrt(6)/4;
    //  	inradius = side*sqrt(6)/12;
    //  }

    Tetrahedron(int side) : side(side) {}

    float calculateVolume() const { return pow(side,3)*sqrt(2)/12; }
    float calculateArea() const { return pow(side,2)*sqrt(3); }
    float calculateCircumradius() const { return side*sqrt(6)/4; }
    float calculateInradius() const { return side*sqrt(6)/12; }

};

string formatTetrahedron(const Tetrahedron& tetrahedron)
{
  stringstream output;
  output << "Tetrahedron: " << endl;
  output << "Volume: " << tetrahedron.calculateVolume() << endl;
  output << "Area: " << tetrahedron.calculateArea() << endl;
  output << "Circumradius: " << tetrahedron.calculateCircumradius() << endl;
  output << "Inradius: " << tetrahedron.calculateInradius() << endl;

  return output.str();
}

int main (int argc, char *argv[])
{
  Tetrahedron tetrahedron(2);

  cout << formatTetrahedron(tetrahedron) << endl;

  return 0;
}