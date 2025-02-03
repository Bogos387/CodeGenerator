#include "CppCodeGenerator.h"

#include <iostream>


CppCodeGenerator::CppCodeGenerator()
    : ICodeGenerator()
{
    std::cout << "CppCodeGenerator()" << std::endl;
}


std::string CppCodeGenerator::generateCode()
{
    std::cout << "CppCodeGenerator::generateCode()" << std::endl;
    return "generated Cpp code";
}


std::string CppCodeGenerator::someCodeRelatedThing()
{
    std::cout << "CppCodeGenerator::someCodeRelatedThing()" << std::endl;
    return "generated cpp-related stuff";
}
