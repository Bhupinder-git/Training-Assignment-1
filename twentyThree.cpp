#include <iostream>
using namespace std;

int main(){

    int n;
    
    cout<<"Enter any integer : ";
    cin>>n;

    int sum;
    for(int i = 0; i <= n; i+=2){
        sum += i;
    }

    cout<<"Sum of first "<<n<<" even natural numbers is : "<<sum<<endl;

    return 0;
}