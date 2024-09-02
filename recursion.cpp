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

//we have to use the backtracking for solve this problem.

 #include<iostream>
   using namespace std;
    void function(int i,int n){
        if(i==0){
          return ;
           }
         
          function(i-1,n);
          cout<<i<<endl;
            }

      int main(){
    int n=4;
    function(4,4);

    return 0;
      }