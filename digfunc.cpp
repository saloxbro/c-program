#include <iostream>
using namespace std;
void digit(int n);
int n,o;
int sum=0;
int dig;
int main() {
    for(int o=1;;o++){
    int n1;
    cout<<"enter the number";
    cin>>n1;
    digit(n1);}
    return 0;
    
}
void digit(int n)
{
    while (n!=0)
    {
        dig=n%10;
        sum=sum+dig;
        n=n/10;
    }
    cout<<"YOUR SUM IS="<<sum;
}