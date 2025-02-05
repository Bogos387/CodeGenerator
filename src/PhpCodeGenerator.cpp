#include "PhpCodeGenerator.h"

#include <iostream>


PhpCodeGenerator::PhpCodeGenerator()
    : ICodeGenerator()
{
    std::cout << "PhpCodeGenerator()" << std::endl;
}


std::string PhpCodeGenerator::generateCode()
{
    std::cout << "PhpCodeGenerator::generateCode()" << std::endl;
    return "generated Php code";
}


std::string PhpCodeGenerator::someCodeRelatedThing()
{
    std::cout << "PhpCodeGenerator::someCodeRelatedThing()" << std::endl;
    return "generated php-related stuff";
}
