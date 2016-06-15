
#include <iostream>

using namespace std;

class MyClassSep
{
public:
  void test(){}
  void test(int){}
  void test(int, int){}
  void test(int, int, int){}
};

class MyClassSingle
{
public:
  void test(int a = 0, int b = 1, int c = 2){}
};

int main()
{
  MyClassSep s;

  s.test();
  s.test(1);
  s.test(1,2);
  s.test(1,2,3);
  
  MyClassSingle i;

  i.test();
  i.test(1);
  i.test(1,2);
  i.test(1,2,3);

}
