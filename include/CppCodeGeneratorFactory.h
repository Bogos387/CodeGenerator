#ifndef CPP_CODE_GENERATOR_FACTORY_H
#define CPP_CODE_GENERATOR_FACTORY_H


#include "ICodeGeneratorFactory.h"


class CppCodeGeneratorFactory : public ICodeGeneratorFactory
{
public:
    CppCodeGeneratorFactory();
    ~CppCodeGeneratorFactory() override {}

     ICodeGenerator* create() const override;

};

#endif // CPP_CODE_GENERATOR_FACTORY_H
