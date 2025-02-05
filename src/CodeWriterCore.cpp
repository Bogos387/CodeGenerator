#include "CodeWriterCore.h"

#include <iostream>

#include "JavaCodeGeneratorFactory.h"
#include "CppCodeGeneratorFactory.h"
#include "PhpCodeGeneratorFactory.h"
#include "CodeWriter.h"


CodeWriterCore::CodeWriterCore()
{

}


void CodeWriterCore::prepareCodeWriterFactories()
{
    _cgf_umap.emplace("Java", std::make_shared<JavaCodeGeneratorFactory>());
    _cgf_umap.emplace("Cpp", std::make_shared<CppCodeGeneratorFactory>());
    _cgf_umap.emplace("Php", std::make_shared<PhpCodeGeneratorFactory>());
}


void CodeWriterCore::createCodeWriter(const std::string &codeName)
{
    try
    {
        std::cout << std::endl;
        std::cout << "_cgf_umap[" + codeName + "]" << std::endl;
        CodeWriter codeWriter(_cgf_umap.at(codeName));
        codeWriter.generateCode();
        codeWriter.someCodeRelatedThing();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}
