// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col;
//     cout << "Enter row and col:";
//     cin >> row;
//     cin>> col;
//     // cout << "Row and col: %d %d" row, col;
//     int matrix[row][col];
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cin >> matrix[i][j];
//         }
//     }
//     // int row = matrix.size();
//     // int col = matrix[0].size();
//     int count = 0;
//     int total = row * col;

//     int startingRow = 0;
//     int startingCol = 0;
//     int endingRow = row - 1;
//     int endingCol = col - 1;

//     while (count < total)
//     {

//         // print starting row
//         for (int index = startingCol; count < total && index <= endingCol; index++)
//         {
//             cout << matrix[startingRow][index];
//             count++;
//         }
//         startingRow++;

//         // print ending column
//         for (int index = startingRow; count < total && index <= endingRow; index++)
//         {
//             cout << matrix[index][endingCol];
//             count++;
//         }
//         endingCol--;

//         // print ending row
//         for (int index = endingCol; count < total && index < startingRow; index--)
//         {
//             cout << matrix[endingRow][index];
//             count++;
//         }
//         endingRow++;

//         // print starting column
//         for (int index = endingRow; count < total && index < startingRow; index--)
//         {
//             cout << matrix[index][startingCol];
//             count++;
//         }
//         startingCol++;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r,c;
   cin>>r>>c;
   int a[100][100];

   for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cin>>a[i][j];
    }
   }
    int i, left = 0, right = c-1, top = 0, bottom = r-1;
    while (left <= right && top <= bottom) {

        /* Print the first row
        from the remaining rows */
        for (i = left; i <= right; ++i) {
            cout<<a[top][i]<<" ";
        }
        top++;

        /* Print the last column
        from the remaining columns */
        for (i = top; i <= bottom; ++i) {
         cout<<a[i][right]<<" ";
        }
        right--;

        /* Print the last row from
        the remaining rows */
        if (top <= bottom) {
            for (i = right; i >= left; --i) {
            cout<<a[bottom][i]<<" ";
          }
          bottom--;
        }

        /* Print the first column from
        the remaining columns */
        if (left <= right) {
            for (i = bottom; i >= top; --i) {
            cout<<a[i][left]<<" ";
        }
        left++;
        }
    }

    return 0;
}

// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col;
//     cout << "Enter size of the array:\n";
//     cin >> row >> col;
//     int arr[row][col];
//     cout << "Enter elements of array:\n";
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cout << arr[i][j]<< " ";
//         }
//         cout << endl;
//     }
//     int left = 0, top = 0, right = col - 1, bottom = row - 1;
//     int prev, curr;
//     while (top <= bottom && left <= right)
//     {
//         if (top == bottom){
//             break;
//         }
//         prev=arr[top+1][left];
//         for (int i = left; i <= right; i++)
//         {
//             curr=arr[top][i];
//             arr[top][i]=prev;
//             prev=curr;
//         }
//         top++;
//         for (int i = top; i <= bottom; i++)
//         {
//             curr=arr[i][right];
//             arr[i][right] = prev;
//             prev=curr;
//         }right--;

//         for (int i = right; i >= left; i--)
//         {
//             curr=arr[bottom][i];
//             arr[bottom][i] = prev;
//             prev = curr;
//         }
//         bottom--;

//         for (int i = bottom; i >= top; i--)
//         {
//             curr=arr[i][left];
//             arr[i][left] = prev;
//             prev=curr;
//         }
//         left++;
//     }

//     //New Array print
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cout << arr[i][j]<< " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }