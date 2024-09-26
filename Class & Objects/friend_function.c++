// //Friend function
// #include<iostream>
// using namespace std;
// class abc{
//     private:
//     int a;
//     protected:
//     int b;
//     public:
//     abc(){
//         a = 10;
//         b = 99;
//     }
//     friend void friendFunction(abc);
// };
// void friendFunction(abc obj1){
//     cout <<"Value of a: "<<obj1.a<<endl;
//     cout <<"Value of b: "<<obj1.b<<endl;
// }
// int main(){
//     abc m;
//     friendFunction(m);
//     return 0;
// }

// //Friend Class
#include<iostream>
using namespace std;
class abc{
    private:
    int a;
    protected:
    int b;
    public:
    abc(){
        a = 10;
        b = 99;
    }
    friend class F;
};
class F{
    public:
    void display(abc& t){
        cout <<"Value of a: "<<t.a<<endl;
        cout <<"Value of b: "<<t.b<<endl;
    }
};
int main(){
    abc m;
    F obj;
    obj.display(m);
    return 0;
}


// #include<iostream>
// using namespace std;
// // class Ankit;
// class Ankush{
//     private:
//     int money = 10;
//     friend void rohit(Ankush,Ankit);
// };
// class Ankit{
//     private:
//     int money = 20;
//     friend void rohit(Ankush,Ankit);
// };
// void rohit(Ankush r1,Ankit r2){
//     cout<<"Sum "<<r1.money + r2.money;
// }

// int main()
// {
//     Ankush obj1;
//     Ankit obj2;
//     rohit(obj1,obj2);
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Ankit;  // Forward declaration of Ankit

// class Ankush {
// private:
//     int money = 10;
//     friend void rohit(Ankush, Ankit);  // Friend function declaration
// };

// class Ankit {
// private:
//     int money = 20;
//     friend void rohit(Ankush, Ankit);  // Friend function declaration
// };

// // Friend function definition
// void rohit(Ankush r1, Ankit r2) {
//     cout << "Sum: " << r1.money + r2.money << endl;
// }

// int main() {
//     Ankush obj1;
//     Ankit obj2;
//     rohit(obj1, obj2);
//     return 0;
// }
