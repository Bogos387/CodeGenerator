#ifndef I_CODE_GENERATOR_FACTORY_H
#define I_CODE_GENERATOR_FACTORY_H


#include "ICodeGenerator.h"


class ICodeGeneratorFactory
{
public:
    virtual ~ICodeGeneratorFactory() = default;

    virtual ICodeGenerator* create() const = 0;

};

#endif // I_CODE_GENERATOR_FACTORY_H
