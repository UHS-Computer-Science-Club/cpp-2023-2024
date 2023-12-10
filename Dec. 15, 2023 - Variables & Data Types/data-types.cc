// NOLINTBEGIN(*)

#include <cstddef>
#include <iostream>
#include <string>

#define type constexpr std::nullptr_t
#define value nullptr

namespace {

// syntax
type name = value;

// examples

// a signed int has a range of -2^31 to 2^31 - 1
//
// int is signed by default. 0 is an int literal.
constexpr int int_var = 0;

// a float has a range of 1.17549e-38 to 3.40282e+38
//
// precision of float is suffficient for storing 6-7 decimal digits
//
// 0.0f is a float literal
constexpr float float_var = 0.0F;

// a char has a range of -128 to 127
//
// in C++, char, signed char, and unsigned char are three distinct types, while
// there are only two ways to represent a char, either signed or unsigned. The
// default data represetation of char is not defined by the C++ standard, but
// dependent on the compiler of choice.
//
// 'a' is a char literal
constexpr char char_var = 'a';

// a bool can either be true or false
//
// true and false are bool literals
constexpr bool bool_var = true;

// (char *) is a pointer pointing to the first element of a character array. You
// don't need to know what pointers are for now. just to know that (char *)
// represents a char array, may be a string, or simply a sequence of characters
// according to the context.
//
// char arrays are terminated by a null character '\0'
// char arrays in C++ must by const, which gives it immutability.
const char *const cstring_var =
    "A string is an array of characters, but in C++ we don't use raw character "
    "arrays to represent strings";

// a short has a range of -32767 to 32767
//
// notice that there is no short literal, 0 is an int literal
constexpr short short_var = 0;

// an unsigned long int has a range of 0 to 18446744073709551615
//
// 0UL is an unsigned long literal (since C++23)
constexpr unsigned long ulong_var = 0UL;

// size_t is a type alias of an unsigned integer type for repersenting sizes in
// bytes, the underlying type is implementation defined, i.e., dependent on the
// compiler. however, in most cases, size_t on a 64-bit system is unsigned long
//
// 0UZ is a size_t literal (since C++23)
constexpr size_t size_var = 0UZ;

// a double has a range of 2.22507e-308 to 1.79769e+308
//
// precision of double is suffficient for storing 15 decimal digits
//
// 0.0 is a double literal
constexpr double double_var = 0.0;

// std::string is the data type we use to represent strings in C++
//
// unlike char arrays, std::string is mutable, meaning you can reassign values
// to a std::string variable
const std::string string_var =
    "This is the data type we use to represent strings in C++.";

}  // namespace

int main() {
  std::cout << "int_var: " << int_var << "\n"
            << "float_var: " << float_var << "\n"
            << "char_var: " << char_var << "\n"
            << "bool_var: " << bool_var << "\n"
            << "cstring_var: " << cstring_var << "\n"
            << "short_var: " << short_var << "\n"
            << "ulong_var: " << ulong_var << "\n"
            << "size_var: " << size_var << "\n"
            << "double_var: " << double_var << "\n"
            << "string_var: " << string_var << "\n";

  return 0;
}

#undef type
#undef value

// NOLINTEND(*)
