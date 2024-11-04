#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the value:"<<endl;
    int N;
    cin>>N;
    bool is_prime=true;
    //logic:-using the module operator we can find the remainder of the n%i if the n%i is not equal to zero between te 
    // loop we can find the that it is a  prime number.
    for(int i=2;i<N;i++){
        if(N%i==0){
            is_prime=false;
        }
    }
    if(is_prime){
        cout<<"Given number is a prime number"<<endl;
    }
    else{
        cout<<"the given number is not a prime"<<endl;
    }
    return 0;

}