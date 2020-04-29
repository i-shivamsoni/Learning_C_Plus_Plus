
#include <fstream>
#include <iostream>
#include <string>
using std::fstream;
using std::iostream;
using std::string;
using std::cout;

int main() {
    std::ifstream my_file;
    my_file.open("1.board.txt");
    if (my_file) {
      //  std::cout << "The file stream has been created!" << "\n";
        std::string line;
        while (getline(my_file, line)) {
            std::cout << line << "\n";
        }
    }
    my_file.close();
}
