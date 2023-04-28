#include <iostream>
#include <cmath>


void printCats(bool skip)
{
    if (skip)
        goto end; // jump forward; statement label 'end' is visible here due to it having function scope

    std::cout << "cats\n";
end:
    ; // statement labels must be associated with a statement
}


int main()
{
    double x{};
tryAgain: 
    std::cout << "Enter a non-negative num: ";
    std::cin >> x;

    if (x < 0.0)            
        goto tryAgain;

    std::cout << "The square root of " << x << " is " << std::sqrt(x);

    printCats(true);  // jumps over the print statement and doesn't print anything
    printCats(false); // prints "cats"

    
    // goto skip;   // error: this jump is illegal because...
    int x1 { 5 }; // this initialized variable is still in scope at statement label 'skip'
skip:
    x1 += 3;      // what would this even evaluate to if x wasn't initialized?
    return 0;


    return 0;

}