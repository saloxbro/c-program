#include <iostream>
using namespace std;

int main() {
    for (int i=0;; i++)
    {
    int n;   
    int count=0;
    cout<<"ENTER THE NUMBER";
    cin>>n;

    while(n!=0){
    count=count+1;
    n=n/10;}
    cout<<"total digits are"<<count<<endl;

    
    }
    return 0;
}
