#include <iostream>
using namespace std;

int main(){
    int arr[] = {0,1,1,1,0,1,0,1,0,0,1};
    int size = 11;

    int i = 0;
    int start = 0;
    int end = size-1;
    while(start <= end){
        if(arr[i]==0){
            swap(arr[start++],arr[i++]);
        }
        else{
            swap(arr[i],arr[end--]);
        }
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}