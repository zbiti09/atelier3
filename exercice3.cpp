#include <iostream>
using namespace std;

//**********COMPLEX CLASS************************
class Complex{

private:
 double real,imag;

public:
 Complex(){
  real=imag=0;
 }
 ///////////////////////////////////////////////////
 Complex(double r){
  real=r;
  imag=0;
 }
    ///////////////////////////////////////////////////
 Complex(double r, double i){
  real=r;
  imag=i;
 }
    ///////////////////////////////////////////////////
 Complex(Complex &obj){
  real=obj.real;
  imag=obj.imag;
 }
    ///////////////////////////////////////////////////
 Complex add(Complex c){
        Complex Add;
  Add.real = real + c.real;
  Add.imag = imag + c.imag;
        return Add;
 }
    ///////////////////////////////////////////////////
 Complex sub(Complex c){
  Complex Sub;
  Sub.real = real - c.real;
  Sub.imag = imag - c.imag;
  return Sub;
 }
    ///////////////////////////////////////////////////
 Complex mult(Complex c){
        Complex Mult;
  Mult.real = real*c.real - imag*c.imag;
  Mult.imag = real*c.imag - c.real*imag;
  return Mult;
 }
    ///////////////////////////////////////////////////
 Complex div(Complex c){
  Complex Div;
  Div.real = (real*c.real + imag*c.imag)/(c.real*c.real + c.imag*c.imag);
  Div.imag = (imag*c.real + real*c.imag)/(c.real*c.real + c.imag*c.imag);
  return Div;
 }
    ///////////////////////////////////////////////////
 void print(){
        cout<<reel<<"+"<<image<<"i"<<endl<<endl;
 }
    ///////////////////////////////////////////////////
 double getReal() const{
  return real;
 }
    ///////////////////////////////////////////////////
 double getImag() const{
  return imag;
 }
    ///////////////////////////////////////////////////
 void setReal(double re){
  real = re;

 }
    ///////////////////////////////////////////////////
 void setImag(double im){
        imag = im;
 }
 ///////////////////////////////////////////////////

};

//***************MAIN***************************
int main()
{
 double real1,imag1,real2,imag2;

 cout<<"Entrez le partie r�elle du premier nombre: ";
    cin>>real1;
 cout<<"Entrez la partie imaginaire du premier nombre: ";
 cin>>imag1;
    Complex obj1(real1,imag1);
 obj1.print();

 cout<<" Entrez le partie r�elle du deuxi�me nombre:: ";
 cin>>real2;
 cout<<" Entrez la partie imaginaire du deuxi�me nombre ";
    cin>>imag2;
    Complex obj2(real2,imag2);
 obj2.print();

 Complex c;
 c = obj1.add(obj2);
 cout<<"Addition est : ("<<c.getReal()<<")+("<<c.getImag()<<")i"<<endl;
 c= obj1.sub(obj2);
 cout<<endl<<"Soustraction est : ("<<c.getReal()<<")+("<<c.getImag()<<")i"<<endl;

 c= obj1.mult(obj2);
 cout<<endl<<"Multiplication est : ("<<c.getReal()<<")+("<<c.getImag()<<")i"<<endl;

 c= obj1.div(obj2);
 cout<<endl<<"Division est : ("<<c.getReal()<<")+("<<c.getImag()<<")i"<<endl;
 return 0;
}

