int add(int x, int y)
{
    return x + y;
}

//Works the same 
auto add1(int x, int y)
{
    return x + y;
}


auto someFcn(bool b)
{
    if (b)
        return 5; // return type int
    else
        return 6.7; // return type double
}

auto add(int x, int y) -> int;
auto divide(double x, double y) -> double;
auto printSomething() -> void;
// auto generateSubstring(const std::string &s, int start, int len) -> std::string;


void addAndPrint(auto x, auto y)
{
    std::cout << x + y << '\n';
}

int main()
{
    addAndPrint(2, 3); // case 1: call addAndPrint with int parameters
    // addAndPrint(4.5, 6.7); // case 2: call addAndPrint with double parameters
}
