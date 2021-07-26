// Sort an Array 

#include<iostream>
#include<vector>
using namespace std;

void insert(vector<int>& arr,int temp){
if( arr.size()==0 || arr[arr.size()-1]<=temp){
    arr.push_back(temp);
    return ;
}
int v = arr[arr.size()-1];
arr.pop_back();
insert(arr,temp);
arr.push_back(v);
return;
}

void sort(vector<int>& arr){
    if(arr.size()==1){
    return;
    }
    int temp = arr[arr.size()-1];
    arr.pop_back();
    sort(arr);
    insert(arr,temp);
    return;
}

int main() {
    vector<int> arr;
    arr.push_back(347384);
    arr.push_back(5);
    arr.push_back(234);
    arr.push_back(0);
    sort(arr);
     for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}