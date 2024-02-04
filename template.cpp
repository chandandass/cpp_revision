
#include <iostream>

using namespace std;

template <typename T>
T print(T a, T b) {
  return a + b;
}

int main() {

  int a = print(10, 20);
  cout<< "a :"<<a<<endl;
  float f = print<float>(2.1f,3.5f);
  cout<<"f :"<<f<<endl;

  return 0;
}
