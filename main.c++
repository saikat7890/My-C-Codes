// #include<iostream>
// using namespace std;
// int main() {
// //     int a, b;
// //     cout << "Enter the first number"<<endl;
// //     cin>>a;
// //     cout<<"Enter the second number"<<endl;
// //     cin>>b;
// //     cout<<"The sum is "<<a+b;
 
//     // int age;
//     // cout<<"Enter your age"<<endl;
//     // cin>> age;
//     // switch(age)
//     // {
//     // case 12:
//     //     cout<< "You are 12 years old";
//     //     break;
//     // case 18:
//     //     cout << "You are 18 years old";
//     //     break;
//     // default:
//     //     cout<< "You are neither 12 or 18 years old";
//     //     break;
//     // }
//     int arr2d[2][3] = {
//         {1,2,3},
//         {4,5,6}
//     };
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout<<"The value at "<<i<<","<<j<<" is "<<arr2d[i][j]<<endl;
//         }
        
//     }
    

//     return 0;
// }

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

//      for (int i = n-1; i >= 0; i--) {
//         for (int j = 0; j < n; j++) {
//             cout << arr[i][j] << "\t";
//         }
//         cout << endl;
//     }
//     // Transpose the matrix
//     // for (int i = n-1; i <= 0; i++) {
//     //     for (int j =0 ; j <= n; j--) {
            
//     //         // int temp = arr[i][j];
//     //         // arr[i][j] = arr[j][i];
//     //         // arr[j][i] = temp;
//     //         cout<< arr[i][j] << "\t";
//     //     }
//     //     cout << endl;
//     // }

//     // cout << "Transposed Matrix:" << endl;
//     // printMatrix(arr, n);

//     return 0;
// }

// #include <iostream>
// // #include <cstdlib>
// using namespace std;

// void update(int* a, int* b) {
//     int temp_a = *a;
//     *a = *a + *b;
//     *b = abs(temp_a - *b); 
// }

// int main() {
//     int a, b;
//     cin >> a >> b;

//     update(&a, &b);

//     cout << a <<endl;
//     cout << b <<endl;

//     return 0;
// }

// #include <stdio.h>
// using namespace std;
// void update(int *a,int *b) {
//     // Complete this function
//     int temp = *a;
//     *a = *a + *b;
//     *b = -(temp - *b);  
// }
// int main() {
//     int a, b;
//     int *pa = &a, *pb = &b;
    
//     scanf("%d %d", &a, &b);
//     update(pa, pb);
//     printf("%d\n%d", a, b);

//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }

// };
// int main()
// {
//     Node* head = new Node(1);
//     Node* second = new Node(2);


//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
void heapify(vector<int> &arr, int n, int i){
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;
    if(left<n && arr[largest] < arr[left]) largest = left;
    if(right<n && arr[largest] < arr[right]) largest = right;
    
    if(largest != i){
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}
int main(){
    int n;cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=n/2-1; i>=0; i--){
        heapify(arr, n, i);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}