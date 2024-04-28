#include<bits/stdc++.h>
using namespace std;

// Problems on sorting 🤦‍♂️

// print
void printMe(vector<int>arr){
    int size=arr.size();
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

// 68. Bubble Sort Algorithm
void bubbleSort(vector<int>arr){
    int size=arr.size();
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void bubbleSort2(vector<int>arr){
    int size=arr.size();
    for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    printMe(arr);
}


// 69. Selection Sort Algorithm
void selectionSort(vector<int>arr)
{
    int size=arr.size();
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[i]){
                swap(arr[i],arr[j]);
            }
        }
    }
    printMe(arr);
}

// 70. Insertion Sort Algorithm
void insertionSort(vector<int>arr){
    for(int i=1;i<arr.size();i++){
        int j=i;
        while(j>0 ){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
            j--;
        }
    }
    printMe(arr);
}

// 71. Quick Sort Algorithm




// 72. Merge sort algorithm
void merge(vector<int>&arr,int low,int mid,int high){
    vector<int>arr1;
    vector<int>arr2;

    for(int i=low;i<=mid;i++){
        arr1.push_back(arr[i]);
    }

    for(int i=mid+1;i<=high;i++){
        arr2.push_back(arr[i]);
    }

    int i=0;
    int j=0;
    int k=low;

    int n1=arr1.size();
    int n2=arr2.size();

    while(i<n1 && j<n2){
        if(arr1[i]>arr2[j]){
            arr[k]=arr2[j];
            j++;k++;
        }
        else{
            arr[k]=arr1[i];
            i++;k++;
        }
    }
    
    while(n1>i){
        arr[k]=arr1[i];
        i++;k++;
    }

    while(n2>j){
        arr[k]=arr2[j];
        j++;k++;
    }
}

void mergeSort(vector<int>&arr,int low,int high){
    if(low<high){
        int mid=(high+low)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
    // printMe(arr);
}


int main(){
    vector<int>arr={9,8,5,7,4,1,3,2};
    mergeSort(arr,0,arr.size()-1);
    printMe(arr);
}