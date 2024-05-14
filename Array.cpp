#include<bits/stdc++.h>
using namespace std;

// 1 smallest

void smallest(vector<int>arr ,int n){
    int mn=999;
    for(int i=0;i<n;i++){
        if(arr[i]<mn){
            mn=arr[i];
        }
    };
    cout<<mn<<endl;
}

// 2 largest

void largest(vector<int>arr){
    int mx=0;
    int size=arr.size();
    for(int i=0;i<size;i++){
        if(arr[i]>mx){
            mx=arr[i];
        }
    }
    cout<<mx<<endl;
}

// 3 2nd largest


void Seclargest(vector<int>arr){
    int mx=0;
    int sl=0;
    int size=arr.size();
    cout<<size<<endl;
    for(int i=0;i<size;i++){
        if(arr[i]>mx){
            sl=mx;
            mx=arr[i];
        }
        if(arr[i]>sl && arr[i]<mx){
            sl=arr[i];
        }
    }
    cout<<sl<<endl;
}

// 2nd smallest

void secSmall(vector<int>arr){
    int size=arr.size();
    int sm=999;
    int secSm=999;

    for(int i=0;i<size;i++){
        if(arr[i]<sm){
            secSm=sm;
            sm=arr[i];
        }
        else if(arr[i]>sm && arr[i]<secSm){
            secSm=arr[i];
        }
    }
        cout<<secSm<<endl;
}

// print array
void printMe(vector<int>arr){
    int size=arr.size();
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void printMe2(unordered_map<int,int>mp){
    for(auto x :mp){
        cout<<x.first<<"->"<<x.second<<" "<<endl;
    }
}

// 5 reverse a array
void revArr(vector<int>arr){
    int size=arr.size();
    vector<int>arr2;
    for(int i=size-1;i>=0;i--){
        arr2.push_back(arr[i]);
    }
    printMe(arr2);
}

// reverse technique 2

void reverse2(vector<int>&arr){
    int size=arr.size();
    int i=0;
    int j=size-1;
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;j--;
    }
    printMe(arr);
}

// 5 frequency of each element 

void freqEle(vector<int>arr){
    int size=arr.size();
    unordered_map<int,int>mp;

    for(int i=0;i<size;i++){
        mp[arr[i]]++;
    }
    printMe2(mp);
}

// 6 Sorting

void sortOne(vector<int>&arr){
    int size=arr.size();
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[i]){
                swap(arr[i],arr[j]);
            }
        }
    }
    cout<<"DONE"<<endl;
    printMe(arr);
}

// 7 Summing the array
void summing(vector<int>arr){
    int size=arr.size();
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    cout<<sum<<endl;
}

// 8 Rotate array 
void rotateMe(vector<int>arr,int num){
    int size=arr.size();

    for(int i=0;i<size;i++){

    }
    
}

// 9 avg of all the element 
void avg(vector<int>arr){
    int size=arr.size();
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    cout<<sum/size<<endl;
}

//10 median of array
void medianNum(vector<int>arr){
    int size=arr.size();
    sort(arr.begin(),arr.end());

    if(size%2==0){
        int mid1=size/2;
        int mid2=mid1+1;
        int midNum=arr[mid1]+arr[mid2];
        int med=midNum/2;
        cout<<med<<endl;
    }
    else{
        int mid=size/2;
        int med=arr[mid];
        cout<<med<<endl;
    }
   
}


// 11 remove duplicates from array Sorted

void removeDupSort(vector<int>arr){
    int size=arr.size();
    sort(arr.begin(),arr.end());
    vector<int>arr2;

    arr2.push_back(arr[0]);
    for(int i=1;i<size;i++){
        if(arr[i-1]!=arr[i]){
            arr2.push_back(arr[i]);
        }
    }
    printMe(arr2);
}




// 12. Remove duplicates from unsorted array

void removeDupUnsorted(vector<int>arr){
    int size=arr.size();
    unordered_map<int,int>mp;
    vector<int>arr2;
    for(int i=0;i<size;i++){
        mp[arr[i]]++;
    }
    for(auto x :mp){
        arr2.push_back(x.first);
    }
    printMe(arr2);
}
// 13. Adding Element in an array
void addAtStart(vector<int>arr,int num){
    arr.push_back(0);
    int size=arr.size();
    for(int i=size-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=num;
    printMe(arr);
}

void addInMid(vector<int>arr,int num,int pos){
    arr.push_back(0);
    int size=arr.size();
    for(int i=size-1;i>pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=num;
    printMe(arr);
}
// 14. Find all repeating elements in an array
void repeatingElement(vector<int>arr){
    int size=arr.size();
    unordered_map<int,int>mp;
    vector<int>arr2;
    for(int i=0;i<size;i++){
        mp[arr[i]]++;
    }
    for(auto x :mp){
        if(x.second>1){
            arr2.push_back(x.first);
        }
    }
    printMe(arr2);
}


// 15. Find all non-repeating elements in an array

void nonRepeatingElement(vector<int>arr){
    int size=arr.size();
    unordered_map<int,int>mp;
    vector<int>arr2;
    for(int i=0;i<size;i++){
        mp[arr[i]]++;
    }
    for(auto x :mp){
        if(x.second==1){
            arr2.push_back(x.first);
        }
    }
    printMe(arr2);
}
// 16. Find all symmetric pairs in array


// 17. Maximum product subarray in an array

// 18. Replace each element of the array by its rank in the array
void replaceRank(vector<int>arr){
    int size=arr.size();
    sort(arr.begin(),arr.end());
    vector<int>res(size);
    unordered_map<int,int>mp;
    for(int i=0;i<size;i++){
        mp[arr[i]]=i;
    }
    for(auto x:mp){
        res[x.second]=x.first;
    }
    printMe(res);
}
// 19. Sorting elements of an array by frequency
void replaceFreq(vector<int>arr){
    int size=arr.size();
    vector<int>res(size);
    unordered_map<int,int>mp;
    for(int i=0;i<size;i++){
        mp[arr[i]]++;
    }
    for(auto x:mp){
        cout<<x.second<<endl;
        // res[x.second]=x.first;
    }
    printMe(res);
}
// 20. Rotation of elements of array- left and right
void rotateArray(vector<int>arr){
    int size=arr.size();
    vector<int>res;
    for(int i=size-1;i>=0;i-- ){
        res.push_back(arr[i]);
    }
    printMe(res);
}


// 21. Finding equilibrium index of an array
int equalIndex(vector<int>arr){
    int size=arr.size();
    if(size==0)return -1;
    int sumRight=0;
    int sumLeft=0;

    for(int i=0;i<size;i++){
        sumRight+=arr[i];
    }
    for(int i=0;i<size;i++){
        sumRight-=arr[i];
        if(sumRight==sumLeft){
            cout<<i<<endl;
            return i;
        }
        sumLeft+=arr[i];
    }
    return -1;
}


// 22. Finding Circular rotation of an array by K positions



// 23. Sort an array according to the order defined by another array


// 24. Search an element in an array
int binarySearch(vector<int>arr,int low,int high,int num){
    int mid=(low+high)/2;
    if(arr[mid]==num)return mid;
    if(num>arr[mid])
    {
        return binarySearch(arr,mid+1,high,num);
    }else{
        return binarySearch(arr,low,mid,num);
    }
}


// 25. Check if Array is a subset of another array or not
bool isSubset(vector<int>arr1,vector<int>arr2){
    unordered_set<int>hashMap;

    for(auto x:arr1){
        hashMap.insert(x);
    }

    for(auto y:arr2){
        if(hashMap.find(y)==hashMap.end()){
            cout<<"Not a subset "<<endl;
            return false;
        }
    }
    cout<<"It is a subset "<<endl;
    return true;
    
}



int main(){
    vector<int>arr={12,15,16,18,34,36,37};
    vector<int>arr2={12,16};
    // int index=binarySearch(arr,0,6,16);
    isSubset(arr,arr2);
}