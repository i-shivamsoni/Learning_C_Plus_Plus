#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using std::cout;
using std::string;
using std::vector;
using std::fstream;
// TODO: Add the ReadBoardFile function here.

void ReadBoardFile(){
  std::ifstream my_file;
  my_file.open("1.board");
  std::string line; 
  while (getline(my_file, line)) {
            std::cout << line << "\n";
        }
  
     my_file.close();
}

// PrintBoard not used in this exercise
void PrintBoard(const vector<vector<int>> board) {
  for (int i = 0; i < board.size(); i++) {
    for (int j = 0; j < board[i].size(); j++) {
      cout << board[i][j];
    }
    cout << "\n";
  }
}

int main() {
  // TODO: Call the ReadBoardFile function here.
   ReadBoardFile();
     
  // Leave the following line commented out.
  //PrintBoard(board);
}