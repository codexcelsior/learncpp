// TO SUM UP WHITESPACES ARE USELESS AND THERE IS NO FORMATTING

std::cout << "Hello world!";

std::cout               <<            "Hello world!";

		std::cout << 		"Hello world!";

std::cout
	<< "Hello world!";

int add(int x, int y) { return x + y; }

int add(int x, int y) {
    return x + y; }

int add(int x, int y)
{    return x + y; }

int add(int x, int y)
{
    return x + y;
}


//Something worths notice:

std::cout << "Hello
     world!"; // Not allowed!

std::cout << "Hello "
     "world!"; // prints "Hello world!"

int main() {
}

int main()
{
}

int main()
{
    std::cout << "Hello world!\n"; // tabbed in one tab (4 spaces)
    std::cout << "Nice to meet you.\n"; // tabbed in one tab (4 spaces)
}


// TYPICALLY THE BEST ONE
int main()
{
    std::cout << "This is a really, really, really, really, really, really, really, "
        "really long line\n"; // one extra indentation for continuation line

    std::cout << "This is another really, really, really, really, really, really, really, "
                 "really long line\n"; // text aligned with the previous line for continuation line

    std::cout << "This one is short\n";
}

// TO SUM UP -> LINES ShOULD CONTAIN NO MORE THAN 80 CHARACTERS


