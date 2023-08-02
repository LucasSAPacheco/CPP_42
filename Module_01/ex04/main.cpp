#include "Defines.hpp"

int replaceStr( std::string file, std::string s1, std::string s2 ) {
    std::ifstream ifs;
    std::ofstream ofs;
    size_t i;
    std::string out_file;

    ifs.open(file.c_str());
    if (!ifs.is_open())
        return (1);
    out_file = file + ".replace";
    ofs.open(out_file.c_str());
    if (ofs.fail())
        return (2);
    while (true) {
        std::getline(ifs, file);
        while (file.find(s1) != std::string::npos) {
            i = file.find(s1);
            if (i < file.length()) {
                file.erase(i, s1.length());
                file.insert(i, s2);
            }
        }
        ofs << file << std::endl;
        if (ifs.eof())
            break;
    }
    return (0);
}

int main( int argc, char **argv) {
    int control;

    if (argc != 4) {
        std::cout << "To use the app follow the format:" << std::endl
        << "./replace <file> <string_to_replace> <string_to_replace_with>" << std::endl;
        return (1);
    }
    control = replaceStr(argv[1], argv[2], argv[3]);
    if (control == 1)
        std::cout << ERROR_OPEN << std::endl;
    else if (control == 2)
        std::cout << ERROR_WRITE << std::endl;
    else
        std::cout << SUCCESS << std::endl;
    return (0);
}