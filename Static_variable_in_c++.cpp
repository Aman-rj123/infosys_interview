// #include<iostream>
// using namespace std;
// int staicfunction(){
//       static int i=0; //after using the keywords static the variable intilized only through out the program.
//       //without static when new function call it always start with the 0.but not in case of the static keyword.

//        i++;
//       cout<<i<<endl;

//       return i;
// }
// int main(){
//      staicfunction();
//      staicfunction();
//      staicfunction();
//      staicfunction();

//          return 0;
// }

// /*
// Changes in Behavior:
// Variable Scope and Lifetime:

// With static: The variable i retains its value between function calls. It is initialized only once and increments with each call.
// Without static: The variable i is local to the function and is re-initialized to 0 every time the function is called. Thus, i always starts from 0 for each call.
// Output:

// With static: The output will be 1, 2, 3, 4, as i increments each time the function is invoked.
// Without static: The output will be 1 for each function call, as i is reset to 0 on each invocation
// */

// // static varible behaviour in  case of the class.
#include <iostream>
using namespace std;

class Aman
{
public:
    static int i;

    Aman()
    {
        i++;
    }

    void show_i()
    {
        cout << i;
    }
};
int Aman ::i=0;

int main()
{
    Aman obj1;

    obj1.show_i();

    Aman obj2; // Creates second instance
    obj2.show_i(); // Output: 2

    Aman obj3; // Creates third instance
    obj3.show_i(); // Output: 3

// All instances share the same static variable
     obj1.show_i();//3
     obj2.show_i();//3
     obj3.show_i();//3
    return 0;
}
/*A static member variable is a class variable that is shared among all instances of the class.
There is only one copy of a static member variable, regardless of the number of objects created.*/