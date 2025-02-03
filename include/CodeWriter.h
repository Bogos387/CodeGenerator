#ifndef CODE_WRITER_H
#define CODE_WRITER_H


#include <memory>

class ICodeGenerator;
class ICodeGeneratorFactory;


class CodeWriter
{
public:
    CodeWriter(std::shared_ptr<ICodeGeneratorFactory> codeGenFactory = nullptr);

    void resetCodeGeneratorFactory(std::shared_ptr<ICodeGeneratorFactory> codeGenFactory);

    void generateCode();
    void someCodeRelatedThing();


private:
    std::unique_ptr<ICodeGenerator> _codeGenerator;

};

#endif // CODE_WRITER_H
