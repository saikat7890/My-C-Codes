// #include <iostream>

// #include <cstdio>

// #include <cmath>

// // Include headers as needed

// using namespace std;

// class Person{
//     public:
//     string c;
//     string n;
//     int e;
//     int l;

// };

// class Actor : public Person{
//     public:
//     Actor(string name, string color, int eye, int year){
//         c=color;
//         n=name;
//         e = eye;
//         l = year;
//     }
//     void toString(){
//         cout<<"The person "<<n<<" Actor. He is"<<c<<" incolor, has "<<e<<"eyes and debut in"<<l<<endl;

//     }
// };

// class Actress : public Person{
//     public:
//     Actress(string name, string color, int eye, int year){
//         c=color;
//         n=name;
//         e = eye;
//         l = year;
//     }
//     void toString(){
//         cout<<"The person "<<n<<" Actress. He is"<<c<<" incolor, has "<<e<<"eyes and debut in"<<l<<endl;

//     }
// };
// int main(){
//     string c;
//     string n;
//     int e;
//     int l;
//     cin >> n;
//     cin >> c;
//     cin >> e;
//     cin >> l;
//     Actor m(n, c, e, l);
//     // cin.ignore();

//     cin >> n;
//     cin >> c;
//     cin >> e;
//     cin >> l;
//     Actress j(n, c, e, l);

//     m.toString();
//     j.toString();
//     return 0;
// }

// Q2
#include <iostream>

#include <cstdio>

#include <cmath>

// Include headers as needed

using namespace std;

class Matrix
{

private:
    int m, n;

    int arr[20][20];

public:
    Matrix(int x = 0, int y = 0)
    {

        m = x;

        n = y;
    }

    void readmat()
    {

        for (int i = 0; i < m; i++)
        {

            for (int j = 0; j < n; j++)
            {

                cin >> arr[i][j];
            }
        }
    }

    Matrix operator+(Matrix mat1)
    {

        Matrix temp;

        temp.m = m;

        temp.n = n;

        for (int i = 0; i < m; i++)
        {

            for (int j = 0; j < n; j++)
            {

                temp.arr[i][j] = arr[i][j] + mat1.arr[i][j];
            }
        }

        return temp;
    }

    void display()
    {

        for (int i = 0; i < m; i++)
        {

            for (int j = 0; j < n; j++)
            {

                cout << arr[i][j] << " ";
            }
        }

        cout << endl;
    }
};