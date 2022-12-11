#include <iostream>
#include <string>


void printLet6(std::string str){
  for(size_t i = 0; i < str.size(); i++){
    for(size_t j = 0; j < str.size(); j++){
      for(size_t k = 0; k < str.size(); k++){
        for(size_t e = 0; e < str.size(); e++){
          for(size_t s = 0; s < str.size(); s++){
            std::cout << str[i] << str[j] << str[k] << str[e] << str [s] << std::endl;
          }
        }
      }
    }
  }
}

int main() {
  std::string str;
  str = "1234567890AaBbCcDdEeFfGgHhXxYyZz";
  printLet6(str);
}
