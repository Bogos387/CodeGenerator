#ifndef CODE_WRITER_CORE_H
#define CODE_WRITER_CORE_H


#include <unordered_map>
#include <memory>

class ICodeGeneratorFactory;


class CodeWriterCore
{
public:
    CodeWriterCore();

    void prepareCodeWriterFactories();
    void createCodeWriter(const std::string& codeName);

private:
    std::unordered_map<std::string, std::shared_ptr<ICodeGeneratorFactory>> _cgf_umap;

};

#endif // CODE_WRITER_CORE_H
