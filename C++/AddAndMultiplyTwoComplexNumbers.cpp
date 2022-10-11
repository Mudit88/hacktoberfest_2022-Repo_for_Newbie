//C++ program to add and multiply two complex numbers

#include<iostream.h>
#include<conio.h>

//Creating class Complex
class Complex
{
  public:
    int real, img;

    //add function to add two matrices
    void add(Complex c1, Complex c2)
    {
      int x, y;
      x = c1.real + c2.real;
      y = c1.img + c2.img;
      cout<<"\n("<<c1.real<<"+"<<c1.img<<"i)+("<<c2.real<<"+"<<c2.img<<"i)=("<<x<<"+"<<y<<"i)";
    }

    //multiply function to multiply two complex numbers
    void multiply(Complex c1, Complex c2)
    {
      int x, y;
      x = c1.real * c2.real - c1.img * c2.img;
      y = c1.real * c2.img + c1.img * c2.real;
      cout<<"\n("<<c1.real<<"+"<<c1.img<<"i)*("<<c2.real<<"+"<<c2.img<<"i)=("<<x<<"+"<<y<<"i)";
    }

    //Overloading increment operator to increment complex number
    Complex operator ++()
    {
      Complex x;
      x.real = ++real;
      x.img = ++img;
      return x;
    }
};

void main ()
{
  clrscr();
  Complex a, b, c, d, e;
  cout<<"\nEnter real and imaginary part of first complex number:";
  cin>>a.real>>a.img;
  cout<<"\nEnter real and imaginary part of second complex number:";
  cin>>b.real>>b.img;
  c.add(a, b);
  d.multiply(a, b);
  cout<<"\n++("<<a.real<<"+"<<a.img<<"i)=(";
  ++a;
  cout<<a.real<<"+"<<a.img<<"i)";
  
  getch();
}
