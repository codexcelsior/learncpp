#include <iostream>

class C; // some class

// C::s_member; // s_member is qualified by class C
// obj.x; // x is qualified by class object obj
// ptr->y; // y is qualified by pointer to class object ptr


int main()
{
    using std::cout;   
    cout << "Hello world!\n"; // so no std:: prefix is needed here!

    // using namespace std; // AVOID !!! this using directive tells the compiler to import all names from namespace std into the current namespace without qualification
    cout << "Hello world!\n"; // so no std:: prefix is needed here



    {
        // using namespace foo;
        // calls to foo:: stuff here
    } // using namespace foo expires

    {
        // using namespace Goo;
        // calls to Goo:: stuff here
    } // using namespace Goo expires

   return 0;

}