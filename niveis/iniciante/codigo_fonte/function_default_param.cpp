#include <iostream>
using namespace std;

//Function with default values
void greet(string name = "Guest", int times =1){

    for(int i = 0; i < times; i++){
        cout << "Hello, " << name << "!" << endl;
    }
}

int main(){

    greet();  //Uses both defaults: "Guest" and 1
    greet("Railson"); // Only one parameter is default valued (times=1)
    greet("Antonio", 3); //uses both argument provided (prints the name "Antonio" three times
    return 0;
}