// // Overloading ++ ,-- Operator
// #include<iostream>
// using namespace std;
// class Count{
//     private:
//     int value;
//     public:
//     Count(){     //default constructor
//         value=5;
//     }
//     // void operator ++(){     //prefix
//     //     ++value;
//     // }
//     Count operator ++(){
//         Count temp;
//         temp.value = ++value;
//         return temp;
//     }
//     void operator ++(int){    //postfix
//         value++;
//     }
//     void display(){
//         cout<<"Display: "<<value<<endl;
//     }
// };
// int main()
// {
//     Count x;

//     x++;  //postfix
//     x.display();
//     ++x;  //prefix
//     x.display();
//     return 0;
// }

// Overloading +,-,*,/ Operator
// #include<iostream>
// using namespace std;
// class demo{
//     int a;
//     public:
//     void getdata(){
//         cout<<"Enter No. "<<endl;
//         cin>>a;
//     }
//     void putdata(){
//         cout<<"Value of a: "<<a<<endl;
//     }
//     //plus operator overload
//     demo operator+ (demo bb){
//         demo cc;
//         cc.a = a + bb.a;
//         return cc;
//     }
// };
// int main()
// {
//     demo aa,bb,cc;
//     aa.getdata();
//     bb.getdata();
    
//     cc = aa + bb;
//     aa.putdata();
//     bb.putdata();
//     cc.putdata();
//     return 0;
// }

// Stream Insertion and extraction Operator Overloading << & >>
#include<iostream>
using namespace std;
class Student{
    char name[20];
    int roll;
    public:
    friend ostream& operator<< (ostream& out,Student s1);
    friend istream& operator>> (istream& in,Student& s1);
};
ostream& operator<< (ostream& out,Student s1){
    out<<"\nName: "<<s1.name<<"\nRoll No: "<<s1.roll;
    return out;
}
istream& operator>> (istream& in,Student& s1){
    cout<<"\nName: ";
    in>>s1.name;
    cout<<"\nRoll  number: ";
    in>>s1.roll;

    return in;
}
int main()
{
    Student s1;
    cout<<"Enter details of object\n";
    cin>>s1;     //operator >>(cin,s1)
    cout<<"Details are:\n";
    cout<<s1;    //operator <<(cout,s1)
    return 0;
}


// #include<iostream> 
// using namespace std; 
// class Test {
//     int x; 
//     public: 
//     // Test(int x=0):x(x)
//     // { 

//     // } 
//     friend istream& operator >>(istream& input, Test& obj); 
//     friend ostream& operator <<(ostream& output, Test& obj); 
// }; 
// istream& operator >>(istream& input, Test& obj) { 
//     input >> obj.x; 
//     return input; 
// } 
// ostream& operator <<(ostream& output, Test& obj) { 
//     output << obj.x; 
//     return output; 
// } 
// int main() {
//     Test t; 
//     cin>>t; 
//     cout<<t; 
//     return 0; 
// } 


// Overloading Assignment (=) Operator
//It is done by Deep copy
// #include<iostream>
// using namespace std;
// class ABC{
//     int *p;
//     public:
//     ABC(int x=0){
//         p = new int(x);   //This dynamically allocates memory for an integer on the heap using the new operator
//                           // and initializes the allocated memory with the value specified in the parentheses, 
//                           //in this case, the value of x.

//     }
//     void set(int a){
//         *p = a;
//     }
//     void display(){
//         cout<<*p<<endl;
//     }
// };
// int main()
// {
//     ABC object1(3);
//     object1.display();
//     ABC object2;
//     object1 = object2;
//     object2.set(5);
//     object2.display();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Boss{
//     public:
//     int *age;
    
//     // Boss(){
//     //     age = new int;
//     // }
//     Boss(int a=0){
//         age = new int;
//         *age = a;
//     }
//     void print(){
//         cout<<"Age : "<<*age<<endl;
//     }
// };
// int main(){
//     Boss p1(23);    
//     p1.print();
//     Boss p2;
//     p2 = p1;
//     p2.print();
//     Boss p3(65);
//     p3 = p1;
//     p3.print();
    
//     return 0;
// }





