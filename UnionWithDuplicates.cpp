#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arr[] = {1,3,5,7,9};
    int sizea = 5;
    int brr[] = {2,4,6,7,9};
    int sizeb = 5;

    vector<int> ans;

    for(int i=0;i<sizea;i++){
        ans.push_back(arr[i]);
    }
    for(int i=0;i<sizeb;i++){
        ans.push_back(brr[i]);
    }

    for(int i=0;i<ans.size();i++){
        for(int j=i+1;j<ans.size()-1;j++){
            if(arr[i]==brr[j]){
            ans.pop_back();
            }
        }
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}