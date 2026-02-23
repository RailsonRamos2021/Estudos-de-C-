/**
* @brief Function overloading allows to create multiple
* functions with the same name, only differing the input type
* or the number of parameters.
*/

#include <iostream>
using namespace std;


/**
* @brief The functions below are all named as "add",
* but each one has a different input type (int vs double),
* number of parameters and even the return type differs.
* 
* @details Different return types are only allowed once
* the input type or number of parameters are different. 
*/

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add to doubles
double add(double a,double b){
    return a + b;
}

// Function to add three integers
int add(int a, int b, int c){
    return a + b + c;
}

/**
* @brief The following overloading functions called "print"
* can accept not only numbers but strings too.
*/

void print(int input){
    cout << "Integer: " << input << endl;
}

void print(double input){
    cout << "Double: " << input << endl;
}

void print(string input){
    cout << "String: " << input << endl;
}

int main(){

    //Input declarations of function "add"
    int integers[3] = {1,2,3};
    double doubles[2] = {1.5,6.7};

    cout << add(integers[0],integers[1]) << endl; // Calls add(int,int)
    cout << add(doubles[0], doubles[1]) << endl;  // Calls add(double,double)
    cout << add(integers[0],integers[1],integers[2]) << endl; // Calls add(int,int,int)
    
    //Input declaration of function "print"
    string name = "Railson";

    print(integers[2]);  // Calls print(int)
    print(doubles[1]);   // Calls print(double)
    print(name);       // Calls print(string)

    return 0;
}