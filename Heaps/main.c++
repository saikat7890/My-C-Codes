#include<iostream>
#include<queue>
using namespace std;
class Heap{
    public:
    int arr[100];
    int size;

    Heap(){
        arr[0] = -1;
        size = 0;
    }
    void insert(int val){
        size = size +1;
        int index = size;
        arr[index] = val;

        while(index > 1){
            int parent = index/2;
            if(arr[parent] < arr[index]){
                swap(arr[parent], arr[index]);
                index=parent;
            }
            else{
                return;
            }
        }
    }
    void print(){
        for (int i = 1; i <= size; i++){
            cout<<arr[i] <<" ";
        }cout<<endl;
        
    }
    void deletion(){
        if(size == 0){
            cout<<"Nothing to delete"<<endl;
            return;
        }

        arr[1] = arr[size];
        size--;

        int i=1;
        while(i < size){
            int leftIndex = 2*i;
            int rightIndex = 2*i +1;
            if(leftIndex < size && arr[i] < arr[leftIndex]){
                swap(arr[i], arr[leftIndex]);
                i=leftIndex;
            }
            else if(rightIndex < size && arr[i] < arr[rightIndex]){
                swap(arr[i], arr[rightIndex]);
                i=rightIndex;
            } else{
                return;
            }
        }
    }
};
//Building Heap from Array
void heapify(int arr[], int n, int i){
    int largest = i;
    int left = 2*i;
    int right = 2*i +1;

    if (left <= n && arr[largest] < arr[left]){
        largest = left;
    }
    if (right <= n && arr[largest] < arr[right]){
        largest = right;
    }
    
    if(largest != i){
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}
void heapSort(int arr[], int n){
    int size = n;
    while(size > 1){
        swap(arr[size], arr[1]);
        size--;

        heapify(arr, size, 1);
    }

}
int main()
{
    Heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    
    h.deletion();
    h.print();

    //Input array follows 1 - based indexing. 
    // int arr[6] = {-1, 54, 53, 55, 52, 50};
    int arr[6] = {-1,4,1,3,9,7};
    int n=5;
    for (int i = n/2; i > 0; i--){
        heapify(arr, n, i);
    }cout<<endl;
    cout<<"Printing the array now "<<endl;
    for (int i = 1; i <= n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    heapSort(arr, n);
    cout<<"Printing the sorted Heap "<<endl;
    for (int i = 1; i <= n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    

    cout<<"Using Priority Queue for maxHeap & minHeap"<<endl;
    //maxHeap
    priority_queue<int> maxHeap;
    maxHeap.push(4);
    maxHeap.push(3);
    maxHeap.push(7);
    maxHeap.push(5);
    maxHeap.push(2);
    cout<<"maxHeap Top Element: "<<maxHeap.top()<<endl;
    maxHeap.pop();
    cout<<"After popping maxHeap Top Element: "<<maxHeap.top()<<endl;

    //minHeap
    priority_queue<int, vector<int>, greater<int>> minHeap;
    minHeap.push(4);
    minHeap.push(3);
    minHeap.push(7);
    minHeap.push(5);
    minHeap.push(2);
    cout<<"minHeap Top Element: "<<minHeap.top()<<endl;
    return 0;
}