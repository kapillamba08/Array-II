#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr;
    //Size & Capacity at the time of declaration
    cout << "Size: " << arr.size() << endl;
    cout << "Capacity: " << arr.capacity() << endl;

    //insert
    arr.push_back(5);
    arr.push_back(7);
    cout << "Size: " << arr.size() << endl;
    cout << "Capacity: " << arr.capacity() << endl;

    //print
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    vector<int> brr(10,-1);
    cout<<"Size of brr: "<<brr.size()<<endl;;
    cout<<"Capacity of brr: "<<brr.capacity()<<endl;
    for(int i=0;i<brr.size();i++){
        cout<<brr[i]<<" ";
    }
    cout<<endl;

    vector<int> crr{1,2,3,4,5};
    for(int i=0;i<crr.size();i++){
        cout<<crr[i]<<" ";
    }
    cout<<"Check crr is empty or not: "<<crr.empty()<<endl;
    cout<<endl;
    return 0;
}
