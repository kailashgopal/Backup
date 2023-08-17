#include <iostream>

using namespace std;

class twodpoint{
private:
  int a = 5;
  int b = 10;
public:
  int &d = a;
  int c = 15;
  void fn(){
    a++;
    b++;
  }
  void display(){
    cout << a << ' ' << b << ' ' << c << '\n';
  }
};

int main(){
  twodpoint a;
  twodpoint b;
  a.d++;;
  a.display();

} 
