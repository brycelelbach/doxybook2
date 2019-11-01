#pragma once
#include <string>

namespace Doxydown {
    struct Config;

    enum class Kind {
        INDEX,
        DEFINE,
        CLASS,
        NAMESPACE,
        STRUCT,
        INTERFACE,
        FUNCTION,
        VARIABLE,
        TYPEDEF,
        FRIEND,
        ENUM,
        ENUMVALUE,
        UNION,
        DIR,
        FILE,
        MODULE
    };

    enum class Visibility {
        PUBLIC,
        PROTECTED,
        PRIVATE
    };

    enum class Virtual {
        NON_VIRTUAL,
        VIRTUAL,
        PURE_VIRTUAL
    };

    enum class Type {
        NONE,
        DEFINES,
        FUNCTIONS,
        NAMESPACES,
        CLASSES,
        ATTRIBUTES,
        TYPES,
        DIRS,
        FILES,
        MODULES,
        FRIENDS
    };


    extern Kind toEnumKind(const std::string& str);
    extern Type toEnumType(const std::string& str);
    extern Visibility toEnumVisibility(const std::string& str);
    extern Virtual toEnumVirtual(const std::string& str);

    extern std::string toStr(Kind value);
    extern std::string toStr(Type value);
    extern std::string toStr(Visibility value);
    extern std::string toStr(Virtual value);

    extern bool isKindLanguage(Kind kind);
    extern bool isKindStructured(Kind kind);
    extern bool isKindFile(Kind kind);
    extern const std::string& typeToFolderName(const Config& config, Type type);
}
