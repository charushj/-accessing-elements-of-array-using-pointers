#include <iostream>
using namespace std;
int main(){
    int array[100], num , i;
    cout<<"enter  number of elements\n";
    cin>> num;
    cout << "Enter "<< num <<"Integers\n";
    for(i=0; i<num; ++i){
        cin >> array[i];

    }
    cout << "array content\n";
    for( i =0; i< num; ++i){
        cout <<*(array+i)<< " ";
    }
    return 0;
}
