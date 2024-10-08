#include <iostream>
#include <cmath>
#include <sstream>

using namespace std;

// WITH PURE FUNCTIONS:
struct Cube
{
    const int side;

    // Only initializing Cube
    Cube(int side) : side(side) {}

    // "const" function is not allowed to change member variables
    int calculateVolume() const { return pow(side, 3); };
    int calculateArea() const { return 6*pow(side,2); };
    float calculateDiagonal() const { return side*sqrt(3); };
    float calculateInradius() const { return side/2; };
    float calculateCircumradius() const { return side/2*sqrt(3); };

};

string formatCube(const Cube& cube)
{
  stringstream output;

  output << "Volume: " << cube.calculateVolume() << endl;
  output << "Area: " << cube.calculateArea() << endl;
  output << "Diagonal: " << cube.calculateDiagonal() << endl;
  output << "Inradius: " << cube.calculateInradius() << endl;
  output << "Circumradius: " << cube.calculateCircumradius() << endl;

  return output.str();
}


int
main (int argc, char *argv[])
{
    Cube cube(5);
    string output = formatCube(cube);
    cout << output << endl;
    return 0;
}