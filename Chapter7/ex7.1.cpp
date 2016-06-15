#include <fstream>
#include <sstream>
#include <iostream>

using namespace std;

class Text
{
  string content;
public:
  Text();
  Text(string filename);
  string contents(){ return content; }
};

Text::Text(){}

Text::Text(string filename)
{
  ifstream file(filename);
  stringstream buffer;
  buffer << file.rdbuf();
  content = buffer.str();
}

int main(int argc, char* argv[])
{
  Text t("ex7.1.cpp");
  cout << t.contents() << endl;
}
