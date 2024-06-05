#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arr[]={1,3,3,4,6,8};
    int sizea = 6;
    int brr[]={2,3,3,4,5,9};
    int sizeb = 6;
    vector<int> ans;

    for(int i=0;i<sizea;i++){
        int element = arr[i];
        for(int j=0;j<sizeb;j++){
            if(element==brr[j]){
                // same element will not consider again 
                brr[j]=-1;
                ans.push_back(element);
            }
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}