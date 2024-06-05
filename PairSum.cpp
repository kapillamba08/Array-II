#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int sizea = 5;

    int ans[10];
    int target = 7;

    for(int i=0;i<sizea;i++){
        for(int j=i+1;j<sizea;j++){
            if(arr[i]+arr[j]==target){
                cout<<arr[i]<<","<<arr[j]<<endl;
            }
        }
    }

}