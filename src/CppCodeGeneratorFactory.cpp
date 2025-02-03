#include "CppCodeGeneratorFactory.h"

#include <iostream>

#include "CppCodeGenerator.h"


CppCodeGeneratorFactory::CppCodeGeneratorFactory()
    : ICodeGeneratorFactory()
{
    std::cout << "CppCodeGeneratorFactory()" << std::endl;
}


ICodeGenerator *CppCodeGeneratorFactory::create() const
{
    std::cout << "CppCodeGeneratorFactory::create()" << std::endl;
    return new CppCodeGenerator();
}
