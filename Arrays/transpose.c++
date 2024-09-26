// #include <iostream>
// using namespace std;

// // Define a constant for the maximum size of the array
// #define MAX 100

// // Function to print a 2D array
// void printMatrix(int arr[][MAX], int n) {
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cout << arr[i][j] << "\t";
//         }
//         cout << endl;
//     }
// }

// int main() {
//     int n;
    
//     // Prompt the user for the size of the square matrix
//     cout << "Enter the size of the square matrix: ";
//     cin >> n;

//     if (n <= 0 || n > MAX) {
//         cout << "Invalid matrix size." << endl;
//         return 1; // Exit with an error code
//     }

//     int arr[MAX][MAX];

//     // Prompt the user to enter matrix elements
//     cout << "Enter the elements of the matrix:" << endl;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cin >> arr[i][j];
//         }
//     }

//     cout << "Original Matrix:" << endl;
//     printMatrix(arr, n);

//     // Transpose the matrix
//     for (int i = 0; i < n; i++) {
//         for (int j = i ; j < n; j++) {
//             swap(arr[i][j], arr[j][i]);
//             // int temp = arr[i][j];
//             // arr[i][j] = arr[j][i];
//             // arr[j][i] = temp;
//         }
//     }

//     cout << "Transposed Matrix:" << endl;
//     printMatrix(arr, n);

//     return 0;
// }


// //Mirror Matrix print
// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     int arr[n][n];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {   
//             cin >> arr[i][j];
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = n-1; j >= 0; j--)
//         // for(int j=0; j<n; j++)
//         {
//             // cout << arr[i][(n-1)-j] << " ";
//             cout<<arr[i][j]<<" ";
//         }
//         cout << endl;
//     }
//     //swap rows
//     // for(int i=0; i< n/2; i++){
//     //     for (int j = 0; j < n; j++)
//     //     {
//     //         swap(matrix[i][j], matrix[n-i-1][j]);
//     //     }
        
//     // }
//     return 0;
// }


// //90 degree rotate (anticlockwise)
// #include<iostream>
// using namespace std;

// int main(){
//         int n;
//     cout << "Enter the size of the square matrix: ";
//     cin >> n;
//     int arr[n][n];
//     cout << "Enter the elements of the matrix:" << endl;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cin >> arr[i][j];
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << arr[j][(n-1)-i] << " ";
//         }
//         cout << endl;
//     }
    
//     return 0;
// }

// //90 degree rotate(clockwise)
#include<iostream>
using namespace std;
int main(){
        int n;
    cout << "Enter the size of the square matrix: ";
    cin >> n;
    int arr[n][n];
    cout << "Enter the elements of the matrix:" << endl;
    int arr1[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    //transpose 
    for (int i = 0; i < n; i++){
        for (int j = 0 ; j < n; j++){
            swap(arr[i][j], arr1[j][i]);
        }
    }
    //reverse each row
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << arr1[i][(n-1)-j] << "\t";
        }
        cout << endl;
    }
    return 0;
}