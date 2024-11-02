// /*- swap two numnber  without using the third variable.
// input:-
// a=5;
// b=10;
// output:-
// a=10;
// b=5;
// */
// #include <iostream>
// using namespace std;
// int reverse(int &a, int &b)
// {
//     a = a + b;
//     b = a - b;
//     a = a - b;

//     return a, b;
// }
// void print(int a, int b)
// {
//     cout << "the value of the a is:" << a << endl;
//     cout << "the value of the b is " << b << endl;
// }
// int main()
// {
//     cout << "Enter the  value of a and b:" << endl;
//     int a, b;
//     cin >> a;
//     cin >> b;
//     print(a, b);
//     reverse(a, b);
//     cout << "the value of the a and b after reverse is:" << endl;

//     print(a, b);

//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int a=5;
    int b=10;
    int temp;
    temp=a;
    a=b;
    temp=b;
    cout<<"a:"<<a<<" "<<"B:"<<b<<endl;


    return 0;
}
