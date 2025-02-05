#ifndef PHP_CODE_GENERATOR_FACTORY_H
#define PHP_CODE_GENERATOR_FACTORY_H


#include "ICodeGeneratorFactory.h"


class PhpCodeGeneratorFactory : public ICodeGeneratorFactory
{
public:
    PhpCodeGeneratorFactory();
    ~PhpCodeGeneratorFactory() override {}

     ICodeGenerator* create() const override;
};

#endif // PHP_CODE_GENERATOR_FACTORY_H
