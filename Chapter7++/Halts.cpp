#include <cstdlib> //for stdL::abort
#include <iostream>


void cleanup()
{
    //code here to do any kind of cleanup required
    std::cout << "cleanup!\n";
}


int main()
{
    std::cout << 1 << "\n";
    cleanup();

    std::exit(0);

    std::cout << 2 << "\n";

    std::atexit(cleanup);

    //Abort example
    std::cout << 1 << '\n';
    std::abort();

    // The following statements never execute
    std::cout << 2 << '\n';



    return 0;
}

