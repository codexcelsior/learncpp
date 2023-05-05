
//Difference between the number of parametters

int add(int x, int y)
{
    return x + y;
}

int add(int x, int y, int z)
{
    return x + y + z;
}

//Difference between type of parametters
int add(int x, int y); // integer version
double add(double x, double y); // floating point version
double add(int x, double y); // mixed version
double add(double x, int y); // mixed version


void foo(int x, int y);
void foo(int x, ...); // differentiated from foo(int, int)

