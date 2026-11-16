  #include "Complex.h"
 #include <iostream>
using namespace std;

  Complex::Complex(int real , int img){
        this->img = img;
        this->real = real;
        cout <<"complex created\n";
    }
int Complex::  getReal()const{
        return real;
    }
       int Complex:: getImg()const{
        return img;
    }
    void Complex:: setReal(int real){
        this->real=real;
    }
     void Complex:: setImg(int img){
        this->img=img;
    }
      // +
      // c=c+c
      Complex Complex:: operator+( const Complex & o)const{
        return Complex(this->real+ o.getReal(),this->img+o.getImg());
      }
      // c=c+5
      Complex Complex::operator+(int x)const{
        return Complex(this->real+x,this->img);
      }
    // -
     // c=c-c
      Complex Complex:: operator-( const Complex & o)const{
        return Complex(this->real- o.getReal(),this->img-o.getImg());
      }
      // c=c-5
       Complex Complex::operator-(int x)const{
        return Complex(this->real-x,this->img);
      }
      
    // *
     // c=c*c
      Complex Complex::operator*( const Complex & o)const{
        return Complex(this->real*o.getReal(),this->img*o.getImg());
      }
      // c=c*5
       Complex Complex::operator*(int x)const{
        return Complex(this->real*x,this->img);
      }
      
    // /
     // c=c/c
      Complex Complex::operator/( const Complex & o)const{
        return Complex(this->real/ o.getReal(),this->img/o.getImg());
      }
      // c=c/5
       Complex Complex::operator/(int x)const{
        return Complex(this->real/x,this->img);
      }
    
    //Casting operator (double)
    Complex::operator double() const {return real;}
    //Prefix vs postfix ++
    // prefix ++c doesnt have paramter
    Complex& Complex::operator ++(){
      this->real++;

      this->img++;
      return *this;

    }
    // postfix c++ has paramter
    Complex Complex::operator ++(int x){
      Complex temp =*this;
      this->real++;

      this->img++;
      return temp;

    }

  
    // =
    Complex& Complex::operator=(const Complex& c){
      real = c.real;
      img = c.img;
      return *this;
    }
    // comparisson > <
    bool Complex::operator>(const Complex& c){
      if(this->real >c.real && this->img > c.img){
        return 1;
      }else{
        return 0;
      }
    }
    // [] subscript operator, () , == , !=
    // [] 0-> real , 1-> img
    int& Complex::operator[](int index){
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
    bool Complex::operator!=(const Complex& c){
      if(real == c.real && img == c.img){
        return false;
      }else{
        return true;
      }


    }
     bool Complex::operator==(const Complex& c){
      if(real == c.real && img == c.img){
        return true;
      }else{
        return false;
      }


    }
