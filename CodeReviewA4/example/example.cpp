#include <iostream>
#include <cmath>
#include <sstream>

using namespace std;

struct Rectangle
{
  const int a, b, c;

  // Only initializing
  Rectangle(int a, int b, int c) : a(a), b(b), c(c) {}

//  "const" : Function may not change member variables
  int calculateVolume() const { return a * b * c; };
  int calculateArea() const { return 2 * (a * b + a * c + b * c); };
  float calculateDiagonal() const { return sqrt(pow(a, 2) + pow(b, 2) + pow(c, 2)); };

};

string formatRectangle(const Rectangle& rectangle)
{
  stringstream output;
  output << "RECTANGLE: " << endl;
  output << "Volume: " << rectangle.calculateVolume() << endl;
  output << "Area: " << rectangle.calculateArea() << endl;
  output << "Diagonal: " << rectangle.calculateDiagonal() << endl;

  return output.str();
}


int main (int argc, char *argv[])
{
  Rectangle rectangle(2, 3, 4);
  cout << formatRectangle(rectangle) << endl;

  return 0;
}
