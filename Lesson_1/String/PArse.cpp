#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using std::cout;
using std::ifstream;
using std::istringstream;
using std::string;
using std::vector;

vector<int> ParseLine(string line)
{
  istringstream sline(line);
  int n;
  char c;
  vector<int> row;
  while (sline >> n >> c && c == ',')
  {
    row.push_back(n);
  }
  return row;
}

void ReadBoardFile(string path)
{
  ifstream myfile(path);
  if (myfile)
  {
    string line;
    while (getline(myfile, line))
    {
      cout << line << "\n";
    }
  }
}

void PrintBoard(const vector<vector<int>> board)
{
  for (int i = 0; i < board.size(); i++)
  {
    for (int j = 0; j < board[i].size(); j++)
    {
      cout << board[i][j];
    }
    cout << "\n";
  }
}

//#include "test.cpp"

void PrintVector(vector<int> v)
{
  cout << "{ ";
  for (auto item : v)
  {
    cout << item << " ";
  }
  cout << "}"
       << "\n";
}

void TestParseLine()
{
  cout << "----------------------------------------------------------"
       << "\n";
  cout << "TestParseLine: ";
  string line = "0,1,0,0,0,0,";
  vector<int> solution_vect{0, 1, 0, 0, 0, 0};
  vector<int> test_vect;
  test_vect = ParseLine(line);
  if (test_vect != solution_vect)
  {
    cout << "failed"
         << "\n";
    cout << "\n"
         << "Test input string: " << line << "\n";
    cout << "Your parsed line: ";
    PrintVector(test_vect);
    cout << "\n";
  }
  else
  {
    cout << "passed"
         << "\n";
  }
  cout << "----------------------------------------------------------"
       << "\n";
  return;
}

int main()
{
  ReadBoardFile("1.board");
  TestParseLine();
  // Leave commented out.
  // PrintBoard(board);
}