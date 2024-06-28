#include <iomanip>
#include <iostream>
using namespace std;

class Color {
public:
  int red;
  int green;
  int blue;

  Color();
  Color(int r, int g, int b);

  void setColor(int r, int g, int b);
  void show();
};

inline Color ::Color() : Color(255, 255, 255){};

inline Color ::Color(int r, int g, int b) {
  red = r;
  green = g;
  blue = b;
}

inline void Color::setColor(int r, int g, int b) {
  red = r;
  green = g;
  blue = b;
}

inline void Color::show() {
  cout << "(r, g, b) = (" << right << setw(3) << red << " " << right << setw(3)
       << green << ", " << setw(3) << blue << ")" << endl;
}

int main() {
  Color screenColor(255, 0, 0);
  Color colors[3];
  Color *p;

  p = &screenColor;
  cout << "screenColor";
  p->show();
  cout << endl;

  p = colors;
  p++->setColor(255, 0, 0);
  p++->setColor(0, 255, 0);
  p->setColor(0, 0, 255);

  for (int i = 2; i >= 0; i--) {
    cout << "colors -> " << i;
    (p--)->show();
  }

  return 0;
}
