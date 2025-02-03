#include "JavaCodeGeneratorFactory.h"

#include <iostream>

#include "JavaCodeGenerator.h"



JavaCodeGeneratorFactory::JavaCodeGeneratorFactory()
    : ICodeGeneratorFactory()
{
    std::cout << "JavaCodeGeneratorFactory()" << std::endl;
}


ICodeGenerator *JavaCodeGeneratorFactory::create() const
{
    std::cout << "JavaCodeGeneratorFactory::create()" << std::endl;
    return new JavaCodeGenerator();
}
