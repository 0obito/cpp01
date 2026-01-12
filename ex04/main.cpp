#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

int main(int ac, char *av[]) {
    if (ac != 4) {
        std::cout << "The program takes three arguments" << std::endl;
        return (1);
    }
    // read all the content from the filen into a string
    std::stringstream buff;
    std::ifstream inputFS(av[1]);
    if (!inputFS.is_open()) {
        std::cout << "File couldn't be opened" << std::endl;
        return (1);
    }
    buff << inputFS.rdbuf();
    std::string content = buff.str();
    inputFS.close();

    // go through the file and replace every occurence of s1 with s2
    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    if (s1.empty()) {
        std::cout << "nothing to replace as s1 is an empty string, file content stays untouched" << std::endl;
        return (0);
    }
    std::string result;
    size_t occurence;
    size_t currentPos = 0;
    while (37) {
        occurence = content.find(s1, currentPos);
        if (occurence == std::string::npos) {
            result += content.substr(currentPos);
            break ;
        }
        else {
            result += content.substr(currentPos, occurence - currentPos);
            result += s2;
            currentPos = occurence + s1.length();
        }
    }
    std::cout << result << std::endl;
    return 0;
}