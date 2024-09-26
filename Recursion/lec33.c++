// //check if array is sorted
// #include<iostream>
// using namespace std;
// bool isSorted(int arr[], int size){
//     //base case
//     if(size == 0 || size == 1){
//         return true;
//     }
//     if(arr[0] > arr[1])
//         return false;
//     else{
//         bool remainingPart = isSorted(arr + 1, size - 1);
//         return remainingPart;
//     }
// }
// int main()
// {
//     int arr[6]={1,2,3,4,5,6};
//     int size = 6;
//     bool ans = isSorted(arr, size);

//     if(ans){
//         cout <<"Array is Sorted."<< endl;
//     }
//     else{
//         cout <<"Array is not Sorted."<< endl;
//     }
//     return 0;
// }

//linear search by recursion
// #include<iostream>
// using namespace std;
// void print(int arr[], int size){
//     cout<<"Size of the Array is "<< size <<endl;
//     for (int i = 0; i < size; i++)
//     {
//         cout<< arr[i] <<" ";
//     }
//     cout<<endl;
    
// }
// bool isFound(int arr[], int size, int key){
//     print(arr, size);
//     //base case
//     if(size == 0){
//         return false;
//     }

//     if(arr[0] == key){
//         return true;
//     }
//     else{
//         bool remainPart = isFound(arr+1, size - 1, key);
//         return remainPart;
//     }
// }
// int main()
// {
//     int arr[6] = {1,2,6,4,9,0};
//     int size = 6;
//     int key =  0;

//     bool ans = isFound(arr, size, key);
//     if (ans)
//     {
//         cout<<"Founded"<<endl;
//     }
//     else{
//         cout<<"Not found."<<endl;
//     }
//     return 0;
// }

// //binary search in recursion
#include<iostream>
using namespace std;
void print(int arr[], int start, int end){
    for (int i = start; i <= end; i++){
        cout << arr[i] <<" ";
    }
    cout<< endl;
}
bool binarySearch(int arr[], int s, int e, int key){
    print(arr, s,e);
    //base case
    if(s > e)
        return false;

    int mid = s + (e - s)/2;
    cout<<"Value of mid is "<< arr[mid]<<endl;
    if (arr[mid] == key)
        return true;
    
    //rr
    if (arr[mid] < key){
        return binarySearch(arr, mid+1, e, key);
    }
    else{
        return binarySearch(arr, s, mid-1, key);
    }
}
int main()
{
    int arr[7] = {1,2,4,5,9,12,26};
    int size = 7;
    int key = 12;
    bool ans = binarySearch(arr, 0, size-1, key);
    if (ans){
        cout<<"Present";
    }
    else{
        cout<<"Absent";
    }
    return 0;
}