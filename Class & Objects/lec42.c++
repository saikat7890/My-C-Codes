
// #include<iostream>
// // #include "Hero.c++"
// using namespace std;

// class Hero{
     
//     //properties
//     private:
//     int health;
    
//     public:
//     char level;

//     Hero() {         
//         cout << "Constructor Called." << endl;
//     }

//     // void print(){
//     //     cout << level << endl;
//     // }

//     int getHealth(){
//         return health;
//     }
//     char getLevel(){
//         return level;
//     }

//     void setHealth(int h){
//         health = h;
//     }
//     void setLevel(char ch){
//         level = ch;
//     }

// };

// int main()
// {
//     // //creation of object
//     // Hero ramesh;

//     // cout<<"Ramesh health is " << ramesh.getHealth() <<endl;
//     // //use setter
//     // ramesh.setHealth(70);
//     // // ramesh.level = 'A';
//     // ramesh.setLevel('B');

//     // cout << "size " << sizeof(ramesh) << endl;
//     // cout << "Health is " << ramesh.getHealth() << endl;
//     // cout << "Level is " << ramesh.getLevel() << endl;

//     //static alocation
//     Hero a;
//     a.setLevel('B');
//     a.setHealth(80);
//     cout << "Level is " << a.level <<endl;
//     cout << "Health is " << a.getHealth() <<endl;

//     //dynamically 
//     Hero *b = new Hero;
//     b->setLevel('A');
//     b->setHealth(50);
//     // cout << "Level is " << (*b).level <<endl;
//     // cout << "Health is " << (*b).getHealth() <<endl;
//     cout << "Level is " << b->level <<endl;
//     cout << "Health is " << b->getHealth() <<endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Hero{
//     private:
//     int health;
//     public:
//     char level;

//     //DEFAULT Constructor
//     Hero() {         
//         cout << "Default Constructor Called." << endl;
//     }
//     //Parameterised Constructor
//     Hero(int health){
//         cout <<"this - "<< this <<endl;
//         this -> health = health;
//     }
//     Hero(int health, char level){
//         this -> health = health;
//         this -> level = level;
//     }
//     //Copy Constructor
//     Hero(Hero& temp){     //pass by ref
//         cout << "Copy constructor called" << endl;
//         this -> health = temp.health;
//         this -> level = temp.level;
//     }
//     void print(){
//         cout<< "Health is "<< this->health << endl;
//         cout<< "Level is "<< this->level << endl;
//     }
//     int getHealth(){
//         return health;
//     }
//     char getLevel(){
//         return level;
//     }

//     void setHealth(int h){
//         health = h;
//     }
//     void setLevel(char ch){
//         level = ch;
//     }
// };
// int main(){

//     // Hero ramesh(10);
//     // cout << "Address of ramesh " << &ramesh <<endl;
//     // ramesh.getHealth();

//     // Hero temp(22, 'B');
//     // temp.print();

//     Hero S(70, 'C');
//     S.print();

//     Hero R(S);
//     R.print();
//     return 0;
// }


//Shallow Copy & Deep Copy
//Shallow Copy with default copy constructor
// #include <iostream>
// using namespace std;
// class box {
// private:
// 	int length;
// 	int breadth;
// 	int height;

// public:
// 	void set_dimensions(int length1, int breadth1,int height1){
// 		length = length1;
// 		breadth = breadth1;
// 		height = height1;
// 	}
// 	void show_data()
// 	{
// 		cout << " Length = " << length
// 			<< "\n Breadth = " << breadth
// 			<< "\n Height = " << height
// 			<< endl;
// 	}
// };
// int main()
// {
// 	box B1, B3;
// 	B1.set_dimensions(14, 12, 16);
// 	B1.show_data();

// 	// When copying the data of object at the time of initialization then copy is made through Default COPY CONSTRUCTOR
// 	box B2 = B1;
//     B2.set_dimensions(10,15,20);
// 	B2.show_data();

// 	B3 = B1;
// 	B3.show_data();
// 	return 0;
// }

//Deep copy
// #include<iostream>
// #include<string.h>
// using namespace std;
// class Hero{
//     public:
//     char *name;
//     int *age;

//     Hero(){
//         name = new char[100];
//         age =  new int;
//     }

//     Hero(Hero& temp){
//         // char *ch = new char[strlen(temp.name) + 1];
//         // strcpy(ch, temp.name);
//         // this->name = ch;

//         name = new char[strlen(temp.name) + 1];  //1 for null charecter
//         strcpy(name, temp.name);

//         age = new int;
//         *age = *(temp.age);
//     }

//     void setData(char n[], int a){
//         strcpy(this->name , n);
//         // *name = n;
//         *age = a;
//     }
//     void print(){
//         cout<<"Name: "<<name<<endl;
//         cout<<"Age: "<<*age<<endl;
//     }
// };
// int main()
// {
//     Hero e1,e2,e3;
//     e1.setData("Saikat", 21);
//     e1.print();
//     e2=e1;

//     e2.setData("Saikat Hazra", 30);
//     e2.print();

//     e3=e1;
//     e3.print();
//     return 0;
// }

//Destructor
#include<iostream>
using namespace std;
class ABC{
    public:
    ABC(){
        cout<<"Constructor called."<<endl;
    }

    ~ABC(){
        cout<<"Destructor called."<<endl;
    }
};
int main()
{
    //static
    ABC a;

    //Dynamic
    ABC *b = new ABC();
    //Manually destructor called
    delete b;

    return 0;
}