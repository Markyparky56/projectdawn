#include "NDFramework.hpp"

// For debug purposes, probably want to move this to NDFrameworks Profiling & Debug section
#include <iostream>

int main(int argc, char* argv[])
{
    for (int i = 0; i < argc; ++i)
    {
        std::cout << argv[i];
    }

    std::cout << "\nChecking Libraries: \n";
    std::cout << "RedDawn Check:\t\t" << ((RedDawn::dllCheck()) ? "Working" : "Broken!") << std::endl; // These checks should actually do proper checks, it'll never come out broken at the moment
    std::cout << "GreenDawn Check:\t" << ((GreenDawn::dllCheck()) ? "Working" : "Broken!") << std::endl;
    std::cout << "BlueDawn Check:\t\t" << ((BlueDawn::dllCheck()) ? "Working" : "Broken!") << std::endl;
    std::cout << "NDFramework Check:\t" << ((NDF::frameworkCheck()) ? "Working" : "Broken!") << std::endl;
    return 0;
}