#include <iostream>

using namespace std;

class One{
public:
  void display ()
  {
    cout << "La méthode display de la classe One est exécutée\n";
  }
};

class Two {
public:
  void display ()
  {
    cout << "La méthode display de la classe Two est exécutée\n";
  }
};

int main ()
{
  Two b;
  b.display();
  return 0;
}

