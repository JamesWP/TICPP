// compile with CPPFLAGS+=-std=c++11
#include <iostream>

using namespace std;

class Shape
{
public:
  virtual void draw()
  {
    cout << "Shape::draw" << endl;
  }
};

class Circle: public Shape
{
public:
  void draw()
  {
    cout << "Circle::draw" << endl;
  }
};

class Square: public Shape
{
public:
  void draw()
  {
    cout << "Square::draw" << endl;
  }
};

class Triangle: public Shape
{
public:
  void draw()
  {
    cout << "Triangle::draw" << endl;
  }
};

int main(int argc, char* argv[])
{
  Shape shapes[] = {
    Triangle(),
    Square(),
    Circle(),
    Shape()
  };
  
  for(auto& s:shapes)
    s.draw();
}
