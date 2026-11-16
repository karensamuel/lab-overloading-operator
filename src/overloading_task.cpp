#include <iostream>
using namespace std;
class Complex{
    int real;
    int img;

    public:
    Complex(int real , int img){
        this->img = img;
        this->real = real;
        cout <<"complex created\n";
    }
    int getReal()const{
        return real;
    }
     int getImg()const{
        return img;
    }
    void setReal(int real){
        this->real=real;
    }
     void setImg(int img){
        this->img=img;
    }
    // +
      // c=c+c
      Complex operator+( const Complex & o)const{
        return Complex(this->real+ o.getReal(),this->img+o.getImg());
      }
      // c=c+5
      Complex operator+(int x)const{
        return Complex(this->real+x,this->img);
      }
    // -
     // c=c-c
      Complex operator-( const Complex & o)const{
        return Complex(this->real- o.getReal(),this->img-o.getImg());
      }
      // c=c-5
       Complex operator-(int x)const{
        return Complex(this->real-x,this->img);
      }
      
    // *
     // c=c*c
      Complex operator*( const Complex & o)const{
        return Complex(this->real*o.getReal(),this->img*o.getImg());
      }
      // c=c*5
       Complex operator*(int x)const{
        return Complex(this->real*x,this->img);
      }
      
    // /
     // c=c/c
      Complex operator/( const Complex & o)const{
        return Complex(this->real/ o.getReal(),this->img/o.getImg());
      }
      // c=c/5
       Complex operator/(int x)const{
        return Complex(this->real/x,this->img);
      }
    
    //Casting operator (double)
    operator  double() const {return real;}
    //Prefix vs postfix ++
    // prefix ++c doesnt have paramter
    Complex& operator ++(){
      this->real++;

      this->img++;
      return *this;

    }
    // postfix c++ has paramter
    Complex operator ++(int x){
      Complex temp =*this;
      this->real++;

      this->img++;
      return temp;

    }

    // =
    Complex& operator=(const Complex& c){
      real = c.real;
      img = c.img;
      return *this;
    }
    // comparisson > <
    bool operator>(const Complex& c){
      if(this->real >c.real && this->img > c.img){
        return 1;
      }else{
        return 0;
      }
    }
    // [] subscript operator, () , == , !=
    // [] 0-> real , 1-> img
    int& operator[](int index){
      if(index == 0){
        return real;
      }else if(index == 1){
        return img;
      }else{
        cout<<"invalid index";
      }
    }
    //== , !=
    // q : does & matter here?
    bool operator!=(const Complex& c){
      if(real == c.real && img == c.img){
        return false;
      }else{
        return true;
      }


    }
     bool operator==(const Complex& c){
      if(real == c.real && img == c.img){
        return true;
      }else{
        return false;
      }


    }

};

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
    c3= c2=c1;
    c2++;
    double c = (double)c1;
    cout<<++c2<<c2;
    cin >> c2[1];
    cout <<c2;
    return 0;
}