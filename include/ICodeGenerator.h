#ifndef I_CODE_GENERATOR_H
#define I_CODE_GENERATOR_H


#include <string>


class ICodeGenerator
{
public:
    virtual ~ICodeGenerator() = default;

    virtual std::string generateCode() = 0;
    virtual std::string someCodeRelatedThing() = 0;

};

#endif // I_CODE_GENERATOR_H
