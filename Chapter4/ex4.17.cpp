

int main(int argc, char* argv[])
{
  int* intPointer = new int;
  long* longPointer = new long;
  char* charArray = new char[100];
  float* floatArray = new float[100];
  
  delete intPointer;
  delete longPointer;
  delete[] charArray;
  delete[] floatArray;
  return 0;
}