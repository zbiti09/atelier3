#include <iostream>

using namespace std;

class One{
public:
  void display ()
  {
    cout << "La m�thode display de la classe One est ex�cut�e\n";
  }
};

class Two {
public:
  void display ()
  {
    cout << "La m�thode display de la classe Two est ex�cut�e\n";
  }
};

int main ()
{
  Two b;
  b.display();
  return 0;
}

