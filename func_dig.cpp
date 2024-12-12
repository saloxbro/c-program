#include <iostream>
using namespace std;

int main(){
    for(int i=1;;i++)
    {
    int n;
    cout<<"enter the numebr";
    cin>>n;
    while(n!=0){
    cout<<n%10<<endl;
    n=n/10.0;
    }}
    return 0;
}