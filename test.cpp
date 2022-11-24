#include <iostream>


using namespace std;
template <typename T> int binarnoTrazi (T polje[], int n, T x) {



}




int main(void){


int n;
float x;
cout<<"unsite n"<<endl;
cin>>n;
cout<< "unesite trazeni x"<<endl;
cin>>x;

float *arr=new float[n];
for(int i=0;i<n;i++){
   arr[i]=i*1.1;
}

cout<<binarnoTrazi(arr,n,x);


return 0;
}