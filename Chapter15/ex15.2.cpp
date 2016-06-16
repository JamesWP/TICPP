// compile with CPPFLAGS+=-std=c++11
#include <iostream>

using namespace std;

class Shape
{
public:
  virtual void draw() = 0;
  virtual ~Shape(){}
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
  Shape* shapes[] = {
    new Triangle(),
    new Square(),
    new Circle()
  };
  
  for(auto& s:shapes)
    s->draw();

  delete shapes[0];
  delete shapes[1];
  delete shapes[2];
}
