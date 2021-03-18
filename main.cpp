#include <iostream>
using namespace std;

int main() {
  
    int arr[4];
    
    for(int i=0;i< 4; ++i){
        cout << "Input array values: ";
        cin>>arr[i]; 
    }
    
    cout<<"RESULT"<<endl;
        cout << endl;


    for(int i=0;i< 4; ++i){  
        cout <<"arr["<<i<<"]"<< arr[i]<<endl;
    }

    return 0;

}