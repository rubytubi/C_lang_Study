#include <iostream>
using namespace std;

class Shape {
public:
  double area;
  void showArea();
};

class Circle : public Shape {
  int radius_35;
  double area_c;

public:
  Circle(int radius = 0);
  int getRadius() { return radius_35; }
  void setRadius(int radius) { radius_35 = radius; }
  void calculateArea() { area_c = radius_35 * radius_35 * 3.14; }
  double showArea() { return area_c; }
};

class Rectangle : public Shape {
  int width_35, height_35;
  double area_r;

public:
  Rectangle(int width, int height);
  int getWidth() { return width_35; }
  void setWidth(int width) { width_35 = width; }
  int getHeight() { return height_35; }
  void setHeight(int height) { height_35 = height; }
  void calculateArea() { area_r = width_35 * height_35; }
  double showArea() { return area_r; }
};

int main() {
  Circle circle(5);
  circle.calculateArea();
  cout << "반지름 5인 원의 면적: " << circle.showArea() << endl;
  Rectangle rect(5, 5);
  rect.calculateArea();
  cout << "가로, 세로 5인 사각형의 면적: " << rect.showArea() << endl;

  return 0;
}