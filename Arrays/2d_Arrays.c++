// #include<iostream>
// using namespace std;

// //Finding an element
// bool isPresent(int arr[][3], int target, int row, int col){
//     for (int row = 0; row < 3; row++){
//         for (int col = 0; col < 3; col++){
//             if( arr[row][col] == target){
//                 return 1;
//             }
//         } 
//     }
//     return 0;
// }

// //Row wise sum
// void printRowSum(int arr[][3], int row, int col){
//     cout<<"Printing sum ->"<< endl;
//     for(int i=0; i<row; i++){
//         int sum = 0;
//         for(int j=0; j<col; j++){
//             sum += arr[i][j];
//         }
//         cout<< sum <<" ";
//     }
//     cout<< endl;
// }

// //Largest row sum & index
// int largestRow(int arr[][3], int row, int col){
//     int max = 0;
//     int rowIndex = -1;
//     for(int i=0; i<row; i++){
//         int sum=0;
//         for (int j = 0;  j<col ; j++){
//             sum += arr[i][j];
//         }
//         if(sum > max){
//             max = sum;
//             rowIndex = i;
//         }
//     }
//     cout<<"The maximun sum is "<< max <<endl;
//     return rowIndex;
// }

// int main(){
//     int arr[3][3];

//     //i -> row , j -> column
//     cout<<"Enter the 2d array:"<<endl;
//     //taking row wise input
//     // for (int i = 0; i < 3; i++){
//     //     for (int j = 0; j < 3; j++){
//     //         cin >> arr[i][j];
//     //     } 
//     // }
//     //taking column wise input
//     for (int i = 0; i < 3; i++){
//         for (int j = 0; j < 3; j++){
//             cin >> arr[i][j];
//         } 
//     }

//     //print
//     for (int i = 0; i < 3; i++){
//         for (int j = 0; j < 3; j++){
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     cout <<"Enter the element to search" << endl;
//     int target;
//     cin >> target;
//     if(isPresent(arr, target, 3,3)) {
//         cout << "Element Found" << endl;
//     }
//     else{
//         cout<<"Not Found"<<endl;
//     }

//     printRowSum(arr, 3,3);

//     int ansIndex = largestRow(arr, 3,3);
//     cout<< "Max row is at index "<< ansIndex <<endl;


//     return 0;
// }

//--------------------------------------------------------------------------------//

//wave print
#include<iostream>
using namespace std;
void wavePrint(int arr[][4], int nRows, int nCols){
    for(int col=0; col<nCols; col++){
        if (col&1){
            //odd col index --> Bottom to top
            for (int row = nRows-1; row >= 0 ; row--){
                cout << arr[row][col] <<" ";
            }
        }
        else{
            //0 or even col index --> top to bottom
            for (int row = 0; row < nRows; row++){
                cout << arr[row][col] <<" ";
            }
        }
    }
}
int main(){
    int arr1[4][4];
    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin >> arr1[row][col];
        }
        
    }
    for (int row = 0; row < 4; row++){
        for (int col = 0; col < 4; col++){
            cout << arr1[row][col] << " ";
        }
        cout << endl;
    }
    wavePrint(arr1, 4,4);
    return 0;
    
}