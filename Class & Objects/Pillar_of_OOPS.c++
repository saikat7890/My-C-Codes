//Encapsulation
// #include<iostream>
// using namespace std;
// class Human{
//     public:
//         string name;
//         int age;
//         int height;
//         int weight;
//     public:
//     int getAge(){
//         return this->age;
//     }
//     void setWeight(int w){
//         this->weight = w;
//     }
// };
// class Male: public Human{   //Inheritance
//     public:
//     string color;
//     void sleep(){
//         cout<<"Male Sleeping" << endl;
//     }
// };
// int main()
// {
//     // Student first;
//     Male object1;
//     cout<< object1.age <<endl;
//     cout<< object1.weight <<endl;
//     cout<< object1.height <<endl;
//     cout<< object1.color <<endl;
//     object1.setWeight(85);
//     cout<< "Set weight"<<object1.weight <<endl;
//     object1.sleep();
//     return 0;
// }


// Polymorphism
// Compile Time Polymorphism
// // Function Overloading
// #include<iostream>
// using namespace std;
// class A{
//     public:
//     void sayHello(){
//         cout<<"Hello Love Babbar"<<endl;
//     }
//     int sayHello(int a){
//         cout<<"Hello Love Babbar"<<endl;
//         return a;
//     }
//     void sayHello(string name){
//         cout<<"Hello Love Babbar"<< name<<endl;
//     }
// };
// int main()
// {
//     A obj;
//     obj.sayHello();
//     return 0;
// }
//Operator Overloading
#include<iostream>
using namespace std;
class A{
    public:
    int a,b;
    int add(){
        return a+b;
    }
    
    void operator + (A &obj){
        // int value1 = this -> a;
        // int value2 = obj.a;
        // cout<<"Output "<<value2 - value1 <<endl;
        cout<<"Heloo World"<<endl;
    }
    void operator() () {
        cout<<"This is Bracket "<< this->a <<endl;
    }
};
int main()
{
    A obj1, obj2;
    obj1.a = 4;
    obj2.a = 7;
    obj1 + obj2;

    obj1();
    return 0;
}