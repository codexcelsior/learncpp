#include <array> // modern c++ arrays
#include <iostream> // input output streams
#include <string_view> // string references
#include <tuple> // a bunch of heterogenuous values
#include <type_traits> // types for template code

// a namespace is a way to disambiguate different things with the same name
// for example, std::string and my_library::string are different things
// but instead of having just "string"
// you can use the prefix to select one or the other 
namespace a::b::c 
{
  inline constexpr std::string_view str{ "hello" }; // idk what this is you're on your own for this one
}

template <class... T> // a generic something
// the return type of the function, a tuple of a size_t (64-bit int on x86_64) and a something I'm not aware of
// also google what variadics are
std::tuple<std::size_t, std::common_type_t<T ...>>
sum(T... args) { // a function that takes an arbitrary number of arguments
  return {sizeof...(T), (args + ...)}; // returns a tuple containing 1. how many items are passed in as variadics, and 2. the sum of those arguments
}

int main() { 
  auto [iNumbers, iSum] {sum(1, 2, 3)}; // structured bindings from c++17

  // I'll split the prints up
  std::cout << a::b::c::str << iNumbers << ' ' << iSum << std::endl; // prints iNumbers, a space, iSum and a newline (std::endl flushes stdout unlike '\n' which may or may not be desirable)
  std::array arr{1, 2, 3}; // create a new array with an initializer list constructor
  std::cout << std::size(arr) << std::endl; // prints the size of arr, you can also do arr.size() I think

  return 0; // you know what this is
}