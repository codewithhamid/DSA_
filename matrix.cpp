#include<iostream>
using namespace std;

class matrix
{
    int **mat;
    int row;
    int col;
    public:
    matrix();
    matrix(int ,int);
    matrix operator+(matrix);
    matrix operator-(matrix);
   // matrix operator*(matrix);
    friend istream& operator>>(istream& in ,matrix&);
    friend ostream& operator<<(ostream&  out ,const matrix& );
    
   
};
matrix :: matrix()
{
    row = 3;
    col =3;
    mat= new int*[row];
    for(int i=0 ;i < row;i++)
    {
        mat[i]= new int[col];
    }
}
matrix:: matrix(int r ,int c)
{
    row = r;
    col = c;
    mat = new int*[row];
    for(int i=0;i<r;i++)
    {
        mat[i] = new int[c];
    }

}
matrix matrix :: operator+(matrix m)
{
    matrix temp;
    temp.row = row;
    temp.col= col;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            temp.mat[i][j]= this->mat[i][j]+m.mat[i][j];

        }
    }
    return temp;

}
matrix matrix:: operator-(matrix m)
{
    matrix temp;
    temp.row= row;
    temp.col = col;
    for(int i=0;i<row;i++)
    {
        for(int j=0; i<col ;j++)
        {
            temp.mat[i][j]= this->mat[i][j]- m.mat[i][j];

        }
    }
    return temp;
}
// matrix matrix:: operator*(matrix m)
// {
//     matrix temp;
//     temp.row= row;
//     temp.col= col;
//     for(int i=0;i<row;i++)
//     {
//         for(int j=0;j<col ;j++)
//         {
//             temp.mat[i][j]= this->mat[i][j]* m.mat[i][j];

//         }
//     }
//     return temp;
// }
istream& operator>>(istream& in ,matrix& m)
{
    for(int i=0 ;i <m.row;i++)
    {
        for(int j=0 ;j<m.col;j++)
        {
            in >> m.mat[i][j];     

        }
    }
   
}
ostream& operator<<(ostream&  out ,const matrix& m)
{
    for(int i=0 ;i<m.row;i++)
    {
        for(int j=0;j< m.col ;j++)
        {
            out << m.mat[i][j] << endl;
        }
    }
}
int main()
{
    matrix m1(2,2),m2(2,2);
    matrix m3;
    cout <<"Enter the value in matrix 1:"<<endl;
    cin >> m1;
    cout <<"Enter the value in matrix 2:"<<endl;
    cin >> m2;
    cout << "addition of two matrices are :"<<endl;
    m3 = m1+m2;
    cout << m3;
    return 0;
}