#include<iostream>
using namespace std;
const int MAX = 100;
void printPrincipalDiagonal(int mat[][MAX], int n)
{
    cout << "Principal Diagonal: ";
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Condition for principal diagonal
            if (i == j){
                cout << mat[i][j] << ", ";
                sum = sum + mat[i][j];
            }
        }
    }
    cout<<"Sum of Principal Diagonal: "<<sum<<endl; 
    cout << endl;
}
void printSecondaryDiagonal(int mat[][MAX], int n)
{
    cout << "Secondary Diagonal: ";
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
 
            // Condition for secondary diagonal
            if ((i + j) == (n - 1)){
                cout << mat[i][j] << ", ";
                sum = sum + mat[i][j];
            }
        }
    }
    cout<<"Sum of Secondary Diagonal: "<<sum<<endl;
    cout << endl;
}
int main(){
    int n = 4;
    int a[][MAX] = { { 1, 2, 3, 4 },
                     { 5, 6, 7, 8 },
                     { 1, 2, 3, 4 },
                     { 5, 6, 7, 8 } };
 
    printPrincipalDiagonal(a, n);
    printSecondaryDiagonal(a, n);
    return 0;
}