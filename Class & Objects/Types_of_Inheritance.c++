// Types of Inheritance
// #include<iostream>
// using namespace std;
// class Animal{        //parent class
//     public:
//     int age;
//     int weight;

//     public:
//     void speak(){
//         cout<<"Speaking"<<endl;
//     }
// };
// class Human{       //parent class
//     public:
//     void smile(){
//         cout<<"smiling"<<endl;
//     } 
// };
// class Dog: public Animal{  //Single Inheritance
//     public:
//     void bark(){
//         cout<<"Barking"<<endl;
//     }
// };
// class BabyDog: public Dog{    //Multilevel Inheritance
//     public:
//     void weep(){
//         cout<<"Weeping"<<endl;
//     }
// };
// class kid: public Human, public Animal{   //Multiple Inheritance
    
// } ;
// int main()
// {
//     // Dog d;
//     BabyDog d;
//     kid c;
//     c.speak();
//     c.smile();
//     d.bark();
//     d.weep(); 
//     return 0;
// }

//Hirerchical Inheritance
// #include<iostream>
// using namespace std;
// class A{
//     public:
//     void func1(){
//         cout<<"Inside function 1"<<endl;
//     }
// };
// class B: public A{
//     public:
//     void func2(){
//         cout<<"Inside function 2"<<endl;
//     }
// };
// class C: public A{
//     public:
//     void func3(){
//         cout<<"Inside function 3"<<endl;
//     }
// };
// int main()
// {
//     A obj1;
//     obj1.func1();

//     B obj2;
//     obj2.func1();
//     obj2.func2();

//     C obj3;
//     obj3.func3();
//     obj3.func3();

//     return 0;
// }

//Inheritance Ambiguity
// #include<iostream>
// using namespace std;
// class A{
//     public:
//     void func(){
//         cout<<"I am A"<<endl;
//     }
// };
// class B{
//     public:
//     void func(){
//         cout<<"I am B"<<endl;
//     }
// };
// class C: public A, public B{

// };
// int main()
// {
//     C obj;
//     // obj.func();
//     obj.A :: func();  //scope resolution operator
//     return 0;
// }

// C++ program demonstrating ambiguity in Multipath Inheritance 
#include <iostream> 
using namespace std; 
class A { 
    public: 
	    int a; 
}; 
class B : public A { 
    public: 
	    int b; 
}; 
class C : public A { 
    public: 
	    int c; 
}; 
class D : public B, public C { 
    public: 
	    int d; 
}; 
int main() 
{ 
	D obj; 
	// obj.a = 10;				 // Statement 1, Error 
	// obj.a = 100;				 // Statement 2, Error 

	obj.B::a = 10; // Statement 3 
	obj.C::a = 100; // Statement 4 
	obj.b = 20; 
	obj.c = 30; 
	obj.d = 40; 

	cout << " a from ClassB : " << obj.B::a; 
	cout << "\n a from ClassC : " << obj.C::a; 
	cout << "\n b : " << obj.b; 
	cout << "\n c : " << obj.c; 
	cout << "\n d : " << obj.d << '\n'; 
}