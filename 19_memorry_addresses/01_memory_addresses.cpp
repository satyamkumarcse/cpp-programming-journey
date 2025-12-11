// memory address = a location in memory where data is stored
// a memory address can be accessed with "&": (address-of) operation 

// we generally define variables like string name,int age,bool student.

// these variable (age,bool,name) are like a container for some data.

// a variable is like a container for some data. these variables exist in the computer's memory at a given address.

// and that address can be found using "&" address of operator .


// #include <iostream>
// using namespace std;

// int main(){
//     string name = "satyam";
//     int age = 21;
//     bool student = true;

//     cout<< &name << "\n";
    // cout<< &age << "\n";
    // cout<< &student << "\n";
    // output : 0x61fef0 ,this is the memory address of name variable stored in my computer's memory. 

    // 0x61fef0 they appear like weired combination of letters and number. but they are actually hexadecimal address.
    // 0x45feef : everytime you run the program, its likely that the memory address will change.
    // why we use datatype?
    // when converted in decimal (from hexa)
    // 8140669344 - name v'ble
    // 8140669340 - age v'ble 
    // 8140669339 - student v'ble
    // different data types take up more or less bytes than other datatypes.
    // name and age have gap of 4 memory addresses.
    // age and student have gap of 1.
    // because booleans only take up one byte of memory.
    // a question arise here...
//  #why we use datatypes?
    // we need to know how much memory we need to allocate to fit a certain value

    // char - 1 byte
    // bool - 1 byte 
    // integers - 4 bytes
    //  float - 4 bytes
    //  double - 8 bytes
    // void - 0 byte
    //  






//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
    cout << "char: " << sizeof(char) << " bytes\n";
    cout << "short: " << sizeof(short) << " bytes\n";
    cout << "int: " << sizeof(int) << " bytes\n";
    cout << "long: " << sizeof(long) << " bytes\n";
    cout << "long long: " << sizeof(long long) << " bytes\n";

    cout << "float: " << sizeof(float) << " bytes\n";
    cout << "double: " << sizeof(double) << " bytes\n";
    cout << "long double: " << sizeof(long double) << " bytes\n";

    cout << "bool: " << sizeof(bool) << " bytes\n";

    cout << "int*: " << sizeof(int*) << " bytes\n";

    cout << "wchar_t: " << sizeof(wchar_t) << " bytes\n";
    cout << "char16_t: " << sizeof(char16_t) << " bytes\n";
    cout << "char32_t: " << sizeof(char32_t) << " bytes\n";

    return 0;
}
