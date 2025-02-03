#include "CodeWriter.h"

#include <iostream>

#include "ICodeGenerator.h"
#include "ICodeGeneratorFactory.h"


CodeWriter::CodeWriter(std::shared_ptr<ICodeGeneratorFactory> codeGenFactory)
    : _codeGenerator(codeGenFactory->create())
{

}


void CodeWriter::resetCodeGeneratorFactory(std::shared_ptr<ICodeGeneratorFactory> codeGenFactory)
{
    _codeGenerator.reset(codeGenFactory->create());
}


void CodeWriter::generateCode()
{
    std::string s = _codeGenerator->generateCode();
    std::cout << "CodeWriter::generateCode() - "
              << s << std::endl;
}


void CodeWriter::someCodeRelatedThing()
{
    std::string s = _codeGenerator->someCodeRelatedThing();
    std::cout << "CodeWriter::someCodeRelatedThing() - "
              << s << std::endl;
}
