#include<iostream>
using namespace std;

class  complex 
{
    int real;
    int imag;
    public:
    complex();
    complex(int , int);
    void print();
    complex operator+(complex );
    complex operator-(complex );
    complex operator*(complex);
    bool operator==(complex);
    friend istream& operator>>(istream &in ,complex&);
    friend ostream& operator<<(ostream &out ,const complex&);
};
complex :: complex()
{
    real =0;
    imag= 0;
}
complex :: complex(int r,int i)
{
    real = r;
    imag = i;
}
void complex :: print()
{
    cout << real << imag;
}
 complex complex :: operator+(complex c)
{
    complex temp;
    temp.real = this->real + c.real;
    temp.imag = this->imag + c.imag;
    return temp;
}
complex complex:: operator-(complex c)
{
    complex temp;
    temp.real= this->real - c.real;
    temp.imag= this->imag - c.imag;
    return temp;
}
complex complex :: operator*(complex c)
{
    complex temp;
    temp.real = (this->real * c.real) + (this->imag * c.imag);
    temp.imag = (this->imag * c.imag) - (this->real * c.real);
    return temp;
}
bool complex :: operator==(complex c)
{
    if( this->real == c.real && this->imag == c.imag)
    {
        cout << " yes ,its  a complex number"<< endl;
        return true;
    }
    else 
    {
        return false;
    }
}
istream& operator>>(istream &in , complex &c )
{
    in >> c.real >> c.imag;
    return in;
}
ostream& operator<<(ostream &out,const complex &c)
{
    out << c.real << " i" << c.imag ;
    return out;
}

int main()
{
    complex c1 (1,2) , c2(3,4);
    complex c3,c4,c5,c6;
    c3= c1+c2;
    cout << c3;
}