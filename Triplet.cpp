#include <iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    int sizea = 5;

    int target = 7;

    for(int i=0;i<sizea;i++){
        int ele1 = arr[i];
        for(int j=i+1;j<sizea;j++){
            int ele2 = arr[j];
            for(int k=j+1;k<sizea;k++){
                int ele3 = arr[k];
                if(ele1+ele2+ele3==target){
                    cout<<ele1<<","<<ele2<<","<<ele3<<endl;
                }
            }
        }
    }
}