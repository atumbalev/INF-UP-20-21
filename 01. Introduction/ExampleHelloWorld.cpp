#include <iostream>
// Preprocessing directive #include, finds the given file and inserts its code
// iostream - (input, output stream) - standard library that we can use to write in / read from the console

// using namespace std; // Bad Practice. Pollutes the namespace with unused things

int main() // Every program starts from the main function
// int means that it returns an int value
// () means that it takes 0 arguments
{
    std::cout << "Hello World" << '\n';
    // std:: something that belongs to the std namespace
    // cout - (standard character output, console by default), a stream object that can be used to write on the console
    // << - binary operator for adding data TO a stream

    // std::endl -> (endline), outputs a new line and flushes the buffer
    // '\n' -> char literal, outputs a new line without flushing the buffer

    // "Hello World" - string literal

    return 0;
    // Return value of the funtion
    // 0 usually means successful execution
}