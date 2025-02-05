#include "PhpCodeGeneratorFactory.h"

#include <iostream>

#include "PhpCodeGenerator.h"


PhpCodeGeneratorFactory::PhpCodeGeneratorFactory()
{
    std::cout << "PhpCodeGeneratorFactory()" << std::endl;
}


ICodeGenerator *PhpCodeGeneratorFactory::create() const
{
    std::cout << "PhpCodeGeneratorFactory::create()" << std::endl;
    return new PhpCodeGenerator();
}

