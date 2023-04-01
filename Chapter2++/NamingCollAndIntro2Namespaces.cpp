#include <iostream> // handled by preprocessor
using namespace std; // this is a using directive that allows us to access names in the std namespace with no namespace prefix


// -> AVOID USING NAMESPACE STD; AT ALL COST -> SEPERATE GLOBAL NAMESPACE FROM STANDARD NAMESPACE
int cout() // defines our own "cout" function in the global namespace
{
    return 5;
}

// All of the following statements are part of the global namespace
void foo();    // okay: function forward declaration in the global namespace
int x;         // compiles but strongly discouraged: uninitialized variable definition in the global namespace
int y { 5 };   // compiles but discouraged: variable definition with initializer in the global namespace
// x = 5;         // compile error: executable statements are not allowed in the global namespace

int main()     // okay: function definition in the global namespace
{

    std::cout << "Hello world!"; // when we say cout, we mean the cout defined in the std namespace

    // cout << "Hello, world!"; // Compile error!  Which cout do we want here?  The one in the std namespace or the one we defined above?

    return 0;
}

void goo();    // okay: another function forward declaration in the global namespace