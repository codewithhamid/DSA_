#include<iostream>
using namespace std;

class fraction 
{
    int num ;
    int deno ;
    public:
    fraction();
    fraction(int ,int );
    fraction operator+(fraction );
    fraction operator-(fraction );
    fraction operator*(fraction );
    bool  operator== (fraction);
    void operator+=(const fraction);
    void operator-=(const fraction);
     friend void simplification(fraction&);
    friend istream& operator>>(istream& in,fraction&);
    friend ostream& operator<<(ostream& out,const fraction&);

    


};
fraction :: fraction()
{
    num = 0 ;
    deno = 0;

}
fraction :: fraction(int n, int d)
{
  num = n;
  deno = d;

}
fraction fraction  :: operator+(fraction c)
{ 
   fraction temp ;
   temp.num= (this->num * c.deno)+(c.num * this->deno);
   temp.deno = this->deno * c.deno;
   return temp;
}
fraction fraction :: operator-(fraction c)
{
    fraction temp;
    temp.num = (this->num *c.deno ) - (c.num * this->deno);
    temp.deno = this-> deno * c.deno;
    return temp;

}
fraction fraction:: operator*(fraction c)
{
    fraction temp;
    temp.num = this-> num * c.num;
    temp.deno = this -> deno * c.deno;
    return temp;

}
bool fraction:: operator==(fraction c)
{
    if( this->num == c.num && this->deno == c.deno )
    {
        return true;
    }
    else 
    {
        return false;
    }

}
void fraction :: operator+=(fraction c)
{
    this-> num =( this->num * c.deno) + ( c.num * this-> deno);
    this->deno = this->deno * c.deno;
}
void fraction :: operator-=(fraction c)
{ 
    this-> num =( this->num * c.deno) - ( c.num * this-> deno);
    this->deno = this->deno * c.deno;
} 

void simplification(fraction& f)
{
    int n,d;
    bool e = true;
    for (int i = (f.num * f.deno); i > 1;i--)
    { 
        if ((f.num % i == 0) && (f.deno % i == 0))
        {
            f.num = f.num / i;
            f.deno = f.deno / i;
        }
        else
        {
            e = false;
        }
    }
}

ostream& operator<<(ostream& out,const fraction& f)
{
    out << f.num << "/" << f.deno;
    return out;
}

istream& operator>>(istream& in,fraction& f)
{
    in >> f.num >>f.deno;
    return in;
}
int main ()
{
    fraction  f1( 2,2), f2(1,2);
    fraction f3;
    f3 = f1 + f2;
    cout << f3;



    return 0;
   
}