#ifndef PHP_CODE_GENERATOR_H
#define PHP_CODE_GENERATOR_H


#include "ICodeGenerator.h"


class PhpCodeGenerator : public ICodeGenerator
{
public:
    PhpCodeGenerator();
    ~PhpCodeGenerator() override {}

    std::string generateCode() override;
    std::string someCodeRelatedThing() override;

};

#endif // PHP_CODE_GENERATOR_H
