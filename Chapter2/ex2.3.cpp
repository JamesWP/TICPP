#include <fstream>
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
  if(argc<2)
  {
    cout << "Usage: ex2.3 [file-name ...]" << endl;
    return 1;
  }
  
  ifstream file;
  
  file.open(argv[1]);
  
  if(!file.good())
  {
    cout << "Error opening file " << argv[1] << endl;
    return 1;
  }
  
  string word;
  int numWords = 0;
  while(file>>word) numWords++;
  
  cout << numWords << endl;
  
  return 0;
}