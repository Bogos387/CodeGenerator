#include "JavaCodeGenerator.h"

#include <iostream>


JavaCodeGenerator::JavaCodeGenerator()
    : ICodeGenerator()
{
    std::cout << "JavaCodeGenerator()" << std::endl;
}


std::string JavaCodeGenerator::generateCode()
{
    std::cout << "JavaCodeGenerator::generateCode()" << std::endl;
    return "generated Java code";
}


std::string JavaCodeGenerator::someCodeRelatedThing()
{
    std::cout << "JavaCodeGenerator::someCodeRelatedThing()" << std::endl;
    return "generated java-related stuff";
}
