#include<iostream>
using namespace std;

int fbseries(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int ans=fbseries(n-1)+fbseries(n-2);

    return ans;


}
int main(){
    int n;
    cin>>n;

    int ans1 =fbseries(n);
    cout<<"the value is"<<ans1<<endl;

    return 0;
}