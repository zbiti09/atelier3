#include <iostream>
using namespace std;

class Animal{

public:
	const char* name;
	int age;
	Animal(const char* myname) : name (myname){};
	void set_value(int age_value){age = age_value;};	
};

class Zebra : public Animal{
public:
	const char* origin;
	Zebra (const char* myname, const char* myorigin) : Animal (myname), origin (myorigin){};
	void display_info(){cout << "Je suis: "<< name << " , j'ai: " << age << " et je suis de: "<< origin<< endl;};

};

class Dolphin : public Animal{
public:
	const char* origin;
	Dolphin (const char* myname, const char* myorigin) : Animale (myname), origin (myorigin){};
	void display_info(){cout << "Je suis: "<< name << " , j'ai: " << age << " et je suis de: "<< origin<< endl;};

};

int main()
{	
	const char* name = "anita";
	const char* origin = "pamplona";
	Zebra zeb(name, origin);
	zeb.set_value(23);
	zeb.display_info();
	return 0;
}

