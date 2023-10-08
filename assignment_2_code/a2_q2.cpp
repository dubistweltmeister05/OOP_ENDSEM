/*
pass by value -
Here, the value of the function parameter is copied to another location of the memory.
When working with the value, it can only access the copy, and cannot affect the actual parameter

eg -
int val =  5;

int findvalue(val);
*/

/*
pass by referance -
here, the address of the function parameter is passed to the function.
THe function can directly access the mrmory location at which teh parameter is stored, and can make changes to it
while working with it.

eg -
int val = 5;

int findvalue(&val);
*/