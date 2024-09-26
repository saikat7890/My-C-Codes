// //selection sort
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n = 5;
//     int arr[n] = {64,25,12,22,11};
//     for (int i = 0; i < n-1; i++)
//     {
//         int minIndex = i;
//         for (int j = i+1; j < n; j++)
//         {
//             if (arr[minIndex] > arr[j]){
//                 minIndex = j;
//             }
//         }
//         swap(arr[minIndex], arr[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] <<" ";
//     }
//     return 0;
// }

// //Bubble Sort
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n = 6;
//     int arr[n] = {10,1,7,6,14,9};

//     // for(int i=1; i<n; i++){  //no. of rounds
//     //         // for round 0 to n-1
//     //     for (int j=0; j < n-i; j++)
//     //     {
//     //         if(arr[j] > arr[j+1]){
//     //             swap(arr[j], arr[j+1]);
//     //         }
//     //     } 
//     // }

//     //optimised: time complexity = O(n)
//     for(int i=1; i<n; i++){  //no. of rounds
//         // for round 0 to n-1
//         bool swapped = false;

//         for (int j=0; j < n-i; j++){
//             if(arr[j] > arr[j+1]){
//                 swap(arr[j], arr[j+1]);
//                 swapped = true;
//             }
//         }
//         if(swapped = false){
//             //already sorted
//             break;
//         }
//     }

//     for (int i = 0; i < n; i++){
//         cout << arr[i] <<" ";
//     }
//     return 0;
// }


// C++ program for Insertion sort
#include <bits/stdc++.h>
using namespace std;
void insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++) {
		key = arr[i];
		j = i - 1;

		// Move elements of arr[0..i-1],
		// that are greater than key, 
		// to one position ahead of their
		// current position
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}
void printArray(int arr[], int n){
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}
int main(){
	int arr[] = { 12, 11, 13, 5, 6 };
	int N = sizeof(arr) / sizeof(arr[0]);

	printArray(arr, N);
	insertionSort(arr, N);
	printArray(arr, N);
	return 0;
}
