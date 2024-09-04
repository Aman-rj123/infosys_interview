/*some basic  problem based on the rescusion concept. */
// 1. Problem
//  #include<iostream>
//  using namespace std;
//  int count=0;
//   void function(){

//     if(count==3){
//         return ;
//     }
//    cout<<count<<endl;
//    count++;
//    function();

//  }

// int main(){

//     function();

//     return 0;
// }
// 2. Problem
// #include<iostream>
// using namespace std;
//    void function(int i,int n){
//     if(i>n){
//         return ;
//     }
//     cout<<"aman"<<endl;
//     function(i+1,n);
//    }

// int main(){
//     int n;
//     cin>>n;
//     function(1,3);
//}
// 3. problem

// #include <iostream>
// using namespace std;

// void function(int i, int n)
// {
//     if (i > n)
//     {
//         return;
//     }
//     cout << i<<endl;
//     function(i + 1, n);
// }
// int main()
// {
//     int n = 3;
//     function(1, 3);

//     return 0;
//}

// 4/problem
//  #include<iostream>
//  using namespace std;
//    void function(int i,int n){
//       if(i==0){
//          return ;
//       }
//       cout<<i<<endl;
//       function(i-1,n);
//  }

// int main(){
//  int n=4;
//  function(4,4);
// }

// we have to use the backtracking for solve this problem.

//  #include<iostream>
//    using namespace std;
//     void function(int i,int n){
//         if(i==0){
//           return ;
//            }

//           function(i-1,n);
//           cout<<i<<endl;
//             }

//       int main(){
//     int n=4;
//     function(4,4);

//     return 0;
//       }
// 5// fuctionl recusion;
// #include<iostream>
// using namespace std;
// int function(int n){
//     if(n==0){
//         return 0;

//     }
//     return n+function(n-1);
// }

// int main(){
//  int n=4;
//   int sum=  function(n);
//   cout<<"the sum is :"<<sum<<endl;

//     return 0;
// }

// factorial of a number
// #include<iostream>
// using namespace std;
// int factorial(int n){
//     if(n==1){
//         return 1;
//     }
//     return n*factorial(n-1);
// }
// int main(){
//     int n=7;

// cout<<factorial(n);
//     return 0;
// }

//<--- solve the array reverse question using the recusrsion.

// #include <iostream>
// using namespace std;

// void function(int arr[],int l,int n){
//            if(l>=n){
//             return ;
//            }
//            swap(arr[l],arr[n-l]);
//            function(arr,l+1,n);
// }
// int main()
// {
//     int n=6;
//     int arr[6]={1,2,3,4,5,6};

//     function(arr,0,n);

//     for (int i = 0; i <n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }

//<--- check whether the given string is palindrome or not using the recursion functinn;

#include <iostream>
using namespace std;

bool function(string &s1, int l, int r)
{
    if (l >= r)
    {
        return true;
    }
    if (s1[l] == s1[r])
    {
        return function(s1, l + 1, r - 1);
    }
    else
    {
        return 0;
    }
}
int main()
{
    string s1 = "dMADtDAM";
    int n = s1.size();
    //function(s1, 0, n - 1);
    if(function(s1,0,n-1)){
        cout<<"Give string is a  plindrone string "<<endl;
    }
    else{
        cout<<"Give string is not a palindrome String "<<endl;
    }

    return 0;
}
