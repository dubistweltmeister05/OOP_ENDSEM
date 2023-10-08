/*
The assignment operator = is a special operator in C++ that can only be overloaded as a non-static member function of a class1.
This means that a function cannot be used to overload the assignment operator = for any type, unless it is declared inside the
class as a member function.

There are some reasons why the assignment operator = can only be overloaded as a member function:

The assignment operator = has a default behavior for built-in types and classes that do not define their own.
If a function is used to overload the assignment operator =, it would conflict with the default behavior and cause ambiguity2.

The assignment operator = returns a reference to the left-hand side object, which is the implicit *this pointer inside a member
 function.  A function cannot access the *this pointer of an object unless it is a member function of that object’s class3.

The assignment operator = can be chained, such as a = b = c, which means that the left-hand side and the right-hand side of
 the assignment operator = can be of different types. A function cannot handle this case unless it is a member function of the
 left-hand side type4.

Therefore, a function cannot be used to overload the assignment operator = in C++. Only a non-static member function can do that.
*/