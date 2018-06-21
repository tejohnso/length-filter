#include <string>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  for (string word; getline(cin, word);) {
    if (word.empty()) {continue;}
    cout << word << endl;
  }
}
