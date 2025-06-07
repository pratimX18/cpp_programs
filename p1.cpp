#include<iostream>
using namespace std;
int main(){
    int arraySize,myArray[arraySize];
    cout<<"enter the size of myArray: \n";
    cin>>arraySize;
    cout<<"enter "<<arraySize<<" elements for myArray: "<<endl;
    for(int i=0;i<arraySize;i++){
        cout<<"enter element no "<<i+1<<":";
        cout<<"\t";
        cin>>myArray[i];
    }
    cout<<"elements of myArray are: ";
    for(int i=0;i<arraySize;++i){
        cout<<myArray[i]<<" ";
    }
    return 0;
}