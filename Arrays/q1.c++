// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int evenCount=0;
//     int oddCount=0;
//     cin>> n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     for(int i=0;i<n;i++){
//         if(arr[i] % 2 == 0){
//             evenCount++;
//         }
//         else{
//             oddCount++;
//         }
        
//     }
//     for(int i=0; i <n; i++){
//         if (arr[i] % 2 == 0 && oddCount>evenCount){
//             cout<<i+1<<endl;
//         }
//         if (arr[i] % 2 != 0 && oddCount<evenCount){
//             cout<<i+1<<endl;
//         }
//     }

//     return 0;
// }

//Count pairs with the given sum
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++){
//         cin >>arr[i];
//     }

//     int sum;
//     cin >> sum;
//     int count=0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if(arr[i] + arr[j] == sum)
//                 count++;
//         }
        
//     }
    
//     cout<<"Total pairs : "<<count;
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int row;
    int col;
    cout<<"Enter the number of row: ";
    cin>>row;
    cout<<"Enter the number of col: ";
    cin>>col;
    int arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Entered matrix:"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    cout<<endl;
    
    int left=0;
    int top=0;
    int right=col-1;
    int bot=row-1;
    
    //shifting
    cout<<"Spiral print:"<<endl;
    while(left<=right && top<=bot){
        int temp=arr[top+1][left];
        
        //for top row;
        for(int i=left;i<=right;i++){
            cout<<arr[top][i]<<" ";
            swap(temp,arr[top][i]);
        }
        top++;
        //for right column;
        for(int i=top;i<=bot;i++){
             cout<<arr[i][right]<<" ";
             swap(temp,arr[i][right]);
        }
        right--;
        //for bottom row;
        for(int i=right;i>=left;i--){
             cout<<arr[bot][i]<<" ";
             swap(temp,arr[bot][i]);
        }
        bot--;
        //for starting column;
        for(int i=bot;i>=top;i--){
             cout<<arr[i][left]<<" ";
             swap(temp,arr[i][left]);
        }
        left++;
    }
    
    cout<<endl;
    cout<<"After shifting by one:"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}