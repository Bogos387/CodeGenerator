#ifndef CPP_CODE_GENERATOR_H
#define CPP_CODE_GENERATOR_H


#include "ICodeGenerator.h"


class CppCodeGenerator : public ICodeGenerator
{
public:
    CppCodeGenerator();
    ~CppCodeGenerator() override {}

    std::string generateCode() override;
    std::string someCodeRelatedThing() override;

};

#endif // CPP_CODE_GENERATOR_H
