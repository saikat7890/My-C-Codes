// Program of two Complex numbers
 #include<iostream>
 using namespace std;
 class Complex{
     private:
     int real,img;

    public:
    Complex(int real=0,int img=0){
        this->real=real;
        this->img=img;
    }
    void print(){
        cout<<real<<" + i"<<img<<endl;
    }
    Complex operator+ (Complex obj){
        Complex obj1;
        obj1.real = real + obj.real;
        obj1.img = img + obj.img;
        return obj1;
    }
    Complex operator- (Complex obj){
        Complex obj1;
        obj1.real = real - obj.real;
        obj1.img = img - obj.img;
        return obj1;
    }

    // Complex operator* (Complex obj){
    //     Complex obj1;
    //     obj1.real = real*obj.real - img*obj.img;
    //     obj1.img = real*obj.img + img*obj.real;
    //     return obj1;
    // }
    // Complex operator/ (Complex obj){
    //     Complex obj1;
    //     int denominator = obj.real*obj.real + obj.img*obj.img;
    //     obj1.real = (real*obj.real + img*obj.img)/denominator;
    //     obj1.img = (img*obj.real - real*obj.img)/denominator;
    //     return obj1;
    // }
};
int main()
{
    Complex first(3,4);
    Complex second(1,2);
    Complex result;

    result = first + second;
    result.print();
    // result = first * second;
    result.print();
    result = first - second;
    result.print();
    // result = first / second;
    result.print();
    return 0;
}

// Q2.
// #include<iostream>
// using namespace std;
// class Animal{
//     public:
//     virtual void makeSound(){
//         cout<<"Speak"<<endl;
//     };
// };
// class Lion: public Animal{
//     public:
//     void makeSound(){
//         cout<<"Roar"<<endl;
//     }
// };
// class Elephant: public Animal{
//     void makeSound(){
//         cout<<"Trumpet"<<endl;
//     }

// };
// int main()
// {
//     Animal *a1;
//     Lion a2;
//     Elephant a3;
//     int choice;
//     cin>>choice;
//     if(choice == 1){
//         a1 = &a2;
//         a1->makeSound();
//     }
//     else if(choice == 2){
//         a1 = &a3;
//         a1->makeSound();
//     }
//     else{
//         cout<<"Invalid Choice"<<endl;
//     }
//     return 0;
// }

// Q3.
// #include<iostream>
// using namespace std;
// class Distance{
//     private:
//     int feet;
//     float inch;
//     public:
//     void readDistance(){
//         cin >> feet;
//         cin >> inch;
//     }
//     void display(){
//         cout<<feet<<" "<<inch<<endl;
//     }
//     Distance operator+(Distance& temp){
//         Distance temp1;
//         temp1.feet = feet + temp.feet;
//         temp1.inch = inch + temp.inch;

//         //Adjust if inch exceeds 12
//         if(temp1.inch >= 12.0){
//             temp1.feet = temp1.feet + 1;
//             temp1.inch = temp1.inch - 12;
//         }

//         return temp1;
//     }
// };
// int main()
// {
//     Distance D1,D2,D3;
//     D1.readDistance();
//     D2.readDistance();

//     D3 = D1 + D2;

//     D3.display();
//     return 0;
// }

// Q4.2D matrix
// #include <iostream>
// using namespace std;
// class Matrix
// {
// private:
//     int **mat;
//     int rows;
//     int cols;

// public:
//     Matrix(int m, int n)
//     {
//         rows = m;
//         cols = n;
//         mat = new int *[rows];
//         for (int i = 0; i < rows; i++)
//         {
//             mat[i] = new int[cols];
//         }
//     }

//     void inputMatrix()
//     {
//         for (int i = 0; i < rows; ++i)
//         {
//             for (int j = 0; j < cols; ++j)
//             {
//                 cin >> mat[i][j];
//             }
//         }
//     }

//     Matrix operator+(Matrix other)
//     {
//         if (rows != other.rows || cols != other.cols)
//         {
//             cout << "MAtches diff matrix" << endl;
//             return Matrix(0, 0);
//         }

//         Matrix result(rows, cols);
//         for (int i = 0; i < rows; i++)
//         {
//             for (int j = 0; j < cols; j++)
//             {
//                 result.mat[i][j] = mat[i][j] + other.mat[i][j];
//             }
//         }
//         return result;
//     }

//     void displayMatrix() const
//     {
//         for (int i = 0; i < rows; ++i)
//         {
//             for (int j = 0; j < cols; ++j)
//             {
//                 cout << mat[i][j] << " ";
//             }
//             cout << endl;
//         }
//     }
// };
// int main()
// {
//     int m, n;
//     cin >> m >> n;
//     Matrix matrix1(m, n);
//     matrix1.inputMatrix();
//     Matrix matrix2(m, n);
//     matrix2.inputMatrix();
//     Matrix result = matrix1 + matrix2;
//     cout << "Addition of two matrices:" << endl;
//     result.displayMatrix();
//     return 0;
// }

// Q5.
// #include<iostream>
// using namespace std;
// class ArraySorter{
//     private:
//     int *a;
//     int size;
//     public:
//     ArraySorter(int size){
//         a = new int[size];
//     }
// };

// int main()
// {
//     return 0;
// }