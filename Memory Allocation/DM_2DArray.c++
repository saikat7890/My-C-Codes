#include<iostream>
using namespace std;
int main()
{
    int row;
    cin >>row;
    int col;
    cin >>col;
    //creating 1D array dynamically
    //int* arr = new int[n];

    //creating 2D array dynamically
    int** arr = new int*[row];
    for (int i = 0; i < row; i++){
        arr[i] = new int[col];
    }
    
    //taking input
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cin >> arr[i][j];
        }
    }
    //output
    cout << endl;
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cout << arr[i][j] << " ";
        }cout << endl;

    }
    
    //releasing memory
    for (int i = 0; i < row; i++){
        delete [] arr[i];
    }

    delete []arr;
    
    return 0;
}

// ##homework = lcm of two numbers using recursion----