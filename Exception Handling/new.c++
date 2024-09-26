#include<iostream>
using namespace std;
int main()
{
    double numerator, denominator, divide;
    cout<< "Enter numerator: "; 
    cin>> numerator; 
    cout<< "Enter denominator: "; 
    cin>> denominator; 
    try{
        if(denominator == 0){
            throw 0;
        }
        divide = numerator/denominator;
        cout<<numerator<<"/"<<denominator<<"="<<divide<<endl;
    }
    catch(int num){
        cout<<"Error: Cannot divide by "<< num <<endl;
    }
    return 0;
}