#ifndef CLI_PARSER_H
#define CLI_PARSER_H

#include <string>

struct CLIArguments {
    std::string tfModelPath;
    std::string ptModelPath;
};

CLIArguments parseCLIArguments(int argc, char** argv);

#endif
