/*

A friend function in C++ is a non-member function that is granted access to the private, protected, and public members of a class when declared as a friend1. This allows the function to perform operations that require access to private members, without having to define the function inside the class2.

Some of the merits of using a friend function are:

It can improve the readability and simplicity of the code by avoiding unnecessary member functions.
It can enhance the performance of the program by avoiding the overhead of member function calls.
It can facilitate cooperation between different classes by allowing access to their internals.

Some of the demerits of using a friend function are:

It can violate the principle of data encapsulation and abstraction by exposing the private details of a class.
It can create dependencies and coupling between classes, making the code less modular and maintainable.
It can increase the risk of errors and security breaches by allowing unauthorized access to sensitive data.

*/