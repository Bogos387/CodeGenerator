#ifndef JAVA_CODE_GENERATOR_H
#define JAVA_CODE_GENERATOR_H


#include "ICodeGenerator.h"


class JavaCodeGenerator : public ICodeGenerator
{
public:
    JavaCodeGenerator();
    ~JavaCodeGenerator() override {}

    std::string generateCode() override;
    std::string someCodeRelatedThing() override;

};

#endif // JAVA_CODE_GENERATOR_H
