#include <string>
#include <limits>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  string::size_type min = 0, max = numeric_limits<string::size_type>::max();

  if (argc > 1) {min = atoi(argv[1]);}
  if (argc > 2) {max = atoi(argv[2]);}

  for (string word; getline(cin, word);) {
    if (word.length() < min || word.length() > max) {continue;}
    cout << word << endl;
  }
}
