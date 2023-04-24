void sayHi(); // forward declaration for function sayHi, makes sayHi accessible in this file


int g_x { 2 }; // non-constant globals are external by default
extern const int g_y { 3 }; // const globals can be defined as extern, making them external
extern constexpr int g_z { 3 }; // constexpr globals can be defined as extern, making them external (but this is useless, see the note in the next section)

extern int g_x;// this extern gives g_y external linkage
extern const int g_y; // this extern gives g_y external linkage


// External global variable definitions:
// int g_x;                       // defines non-initialized external global variable (zero initialized by default)
// extern const int g_x{ 1 };     // defines initialized const external global variable
// extern constexpr int g_x{ 2 }; // defines initialized constexpr external global variable

// // Forward declarations
// extern int g_y;                // forward declaration for non-constant global variable
// extern const int g_y;          // forward declaration for const global variable
// extern constexpr int g_y;      // not allowed: constexpr variables can't be forward declared



int main()
{
    sayHi(); // call to function defined in another file, linker will connect this call to the function definition

    return 0;
}

