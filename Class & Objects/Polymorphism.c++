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
// #include<iostream>
// using namespace std;
// class A{
//     public:
//     int a,b;
//     int add(){
//         return a+b;
//     }
    
//     void operator + (A &obj){
//         // int value1 = this -> a;
//         // int value2 = obj.a;
//         // cout<<"Output "<<value2 - value1 <<endl;
//         cout<<"Heloo World"<<endl;
//     }
//     void operator() () {
//         cout<<"This is Bracket "<< this->a <<endl;
//     }
// };
// int main()
// {
//     A obj1, obj2;
//     obj1.a = 4;
//     obj2.a = 7;
//     obj1 + obj2;

//     obj1();
//     return 0;
// }

//Run Time Polymorphism
//Method Overriding/ Function overriding 
// #include<iostream>
// using namespace std;
// class Animal{
//     public:
//     void speak(){
//         cout<<"Speaking"<< endl;
//     }
// };
// class Dog: public Animal{
//     public:
//     void speak(){
//         cout<<"Barking"<<endl;
//     }
// };
// int main()
// {
//     Dog obj;
//     obj.speak();
//     return 0;
// }

// //Virtual Function/ Virtual base class
// #include<iostream>
// using namespace std;
// class A{
//     public:
//     void display(){
//         cout<<"Base class without virtual function"<<endl;
//     }
//     // virtual void display(){
//     //     cout<<"Base class with virtual functiom"<<endl;
//     // }
//     // virtual void display() = 0;  //pure virtual function
// };
// class B: public A{
//     public:
//     void display(){
//         cout << "Derived Class is invoked"<<endl;    
//     }
// };
// int main()
// {
//     A *a;  //pointer of base class
//     B b;  //object of derived class
//     a = &b;
//     a->display();   //Late binding occurs
//     return 0;
// }


//Solution to call the base class function in method overriding
// #include<iostream>
// using namespace std;
// class Animal{
//     public:
//     void speak(){
//         cout<<"Speaking"<< endl;
//     }
// };
// class Dog: public Animal{
//     public:
//     void speak(){
//         cout<<"Barking"<<endl;
//         // Animal::speak();  //Calls function of base class
//     }
// };
// int main()
// {
//     Dog obj;
//     obj.speak();
//     obj.Animal::speak();   //Calls function of base class
//     return 0;
// }