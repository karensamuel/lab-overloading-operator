class Complex{
    int real;
    int img;

    public:
    Complex(int real , int img);
    int getReal()const;
     int getImg()const;
    void setReal(int real);
     void setImg(int img);
    // +
      // c=c+c
      Complex operator+( const Complex & o)const;
      // c=c+5
      Complex operator+(int x)const;
    // -
     // c=c-c
      Complex operator-( const Complex & o)const;
      // c=c-5
       Complex operator-(int x)const;
      
    // *
     // c=c*c
      Complex operator*( const Complex & o)const;
      // c=c*5
       Complex operator*(int x)const;
    // /
     // c=c/c
      Complex operator/( const Complex & o)const;
      // c=c/5
       Complex operator/(int x)const;
    
    //Casting operator (double)
    operator  double() const ;
    //Prefix vs postfix ++
    // prefix ++c doesnt have paramter
    Complex& operator ++();
    // postfix c++ has paramter
    Complex operator ++(int x);

    // =
    Complex& operator=(const Complex& c);
    // comparisson > <
    bool operator>(const Complex& c);
    // [] subscript operator, () , == , !=
    // [] 0-> real , 1-> img
    int& operator[](int index);
    //== , !=
    // q : does & matter here?
    bool operator!=(const Complex& c);
     bool operator==(const Complex& c);

};