#ifndef JAVA_CODE_GENERATOR_FACTORY_H
#define JAVA_CODE_GENERATOR_FACTORY_H


#include "ICodeGeneratorFactory.h"


class JavaCodeGeneratorFactory : public ICodeGeneratorFactory
{
public:
    JavaCodeGeneratorFactory();
    ~JavaCodeGeneratorFactory() override {}

     ICodeGenerator* create() const override;

};

#endif // JAVA_CODE_GENERATOR_FACTORY_H
