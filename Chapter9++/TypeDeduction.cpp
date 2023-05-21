#include <string>
int getVal(); // some function that returns an int by value


const double foo()
{
    return 5.6;
}

std::string& getRef(); // some function that returns a reference

const std::string& getConstRef(); // some function that returns a reference to const


int main()
{
    auto val { getVal() }; // val deduced as type int

    //Auto drops double
    const double cd { 7.8 };

    auto x1 { cd };
    auto y1 { foo() };

    //Auto drops references
    auto ref { getRef() }; // type deduced as std::string (not std::string&)

    const int x {};    // this const applies to x, so it is top-level
    int* const ptr {}; // this const applies to ptr, so it is top-level

    const int& ref0{}; // this const applies to the object being referenced, so it is low-level
    const int* ptr0{}; // this const applies to the object being pointed to, so it is low-level


    //type deduction drops top level
    auto ref1{ getConstRef() }; // std::string (reference dropped, then top-level const dropped from result)
    const auto ref2{ getConstRef() };  // const std::string (const reapplied, reference dropped)

    auto& ref3{ getConstRef() };       // const std::string& (reference reapplied, low-level const not dropped)
    const auto& ref4{ getConstRef() }; // const std::string& (reference and const reapplied)

    return 0;
}