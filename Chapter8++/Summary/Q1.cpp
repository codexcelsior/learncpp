int main()
{
    int a { 5 }; // 1a //Wont need conv
    int b { 'a' }; // 1b //Numeric promotion to int value in ASCII
    int c { 5.4 }; // 1c //Cant conv
    int d { true }; // 1d //Numeric promotion to int (1)
    int e { static_cast<int>(5.4) }; // 1e //Numeric conversion to int

    double f { 5.0f }; // 1f //Numeric promotion
    double g { 5 }; // 1g //Numeric conv

    // Extra credit section
    long h { 5 }; // 1h //Numeric conv

    float i { f }; // 1i (uses previously defined variable f)
    float j { 5.0 }; // 1j //Numeric conv

}