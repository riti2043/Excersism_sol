#include <string>

namespace log_line {
std::string message(std::string line) {
    std::string result= line.substr(line.find(":")+2);
    return result;
        }

std::string log_level(std::string line) {
    std::string result= line.substr(line.find("[")+1,line.find("]")-1);
    return result;
}

std::string reformat(std::string line) {
   std::string result1= line.substr(line.find(":")+2);
std::string result2= line.substr(line.find("[")+1,line.find("]")-1);
    return result1 + " ("+result2+")";
}
}  // namespace log_line
