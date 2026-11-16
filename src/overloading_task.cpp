#include <iostream>
#include "Complex.h"

using namespace std;
     // c=5+c
Complex operator+(int x, const Complex& c) {

return Complex(c.getReal() + x, c.getImg());
}
// c=5-c
Complex operator-(int x, const Complex& c) {

return Complex(c.getReal() - x, c.getImg());
}
// c=5*c
Complex operator*(int x, const Complex& c) {

return Complex(c.getReal() *x, c.getImg());
}
  // c=5/c
Complex operator/(int x, const Complex& c) {
return Complex(c.getReal() / x, c.getImg());
}
    //cout << c 
    ostream& operator<<(ostream& o ,const Complex& c){
      o<<c.getReal()<<c.getImg();
      return o;
    }
    // cin>> c
     istream& operator>>(istream& in, Complex& c){
      int img, real;
      in>>real>>img;
      c.setReal(real);
      c.setImg(img);
      return in;
    }
int main(){
    Complex c1= Complex(1,2);
    Complex c2= Complex(3,4);
    Complex c3= Complex(5,6);

    c3= 5+c1;
    c2++;
    double c = (double)c1;
    cout<<++c2<<c2;
    cin >> c2[1];
    cout <<c2;
    return 0;
}