#include<iostream>
using namespace std;

/* Leatning
 *
 * Use direct brace initialization whenever possible
 */

//Copy assignment
// Copy assignment is named such because it copies the value on the right-hand side of the = operator to the variable on the left-hand side of the operator. The = operator is called the assignment operator.
// One downside of assignment is that it requires at least two statements: one to define the variable, and one to assign the value.
void copy_assigment() {
  int x;
  x = 10;
  cout<<"copy_assigment: "<< x<<endl;
}

//Copy Initialization
//When a variable is defined, you can also provide an initial value for the variable at the same time. This is called initialization.
//This copies the value on the right-hand side of the equals to the variable being created on the left-hand side.
void copy_initialization(){
  // copy initiliazation
  int x = 10;
  cout<<"copy_initialization: "<< x<<endl;
}

//we can do direct initialization by using parenthesis.
//For simple data types (like integers), copy and direct initialization are essentially the same. But for some advanced types, direct initialization can perform better than copy initialization. Prior to C++11, direct initialization was recommended over copy initialization in most cases because of the performance boost.
void direct_initialization(){
  int x(5);
  cout<<"direct_initialization: "<< x<<endl;
}


//Unfortunately, parenthesis-based direct initialization can’t be used for all types of initialization (such as initializing an object with a list of data). In an attempt to provide a more consistent initialization mechanism, C++11 added a new syntax called brace initialization (also sometimes called uniform initialization) that uses curly braces.
void brace_initialization(){
  int x{5};
  cout<<"brace initilization: "<<x<<endl;

  // copy brace initialization is same but direct form is prefrerred
  int y = {5};
  cout<<"copy brace initilization: "<<y<<endl;

  // empty brace initiliazation, will initiliaze to zero
  int z{};
  cout<<"empty brace initilization: "<<z<<endl;

 // Brace initialization has the added benefit of disallowing “narrowing” conversions. This means that if you try to use brace initialization to initialize a variable with a value it can not safely hold, the compiler will throw a warning or an error. For example:

 //  int width{ 4.5 }; // error: not all double values fit into an int

}

int main(){
  copy_assigment();
  copy_initialization();
  direct_initialization();
  brace_initialization();

  return 0;
}
