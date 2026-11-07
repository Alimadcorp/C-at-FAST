#include <iostream>
#include <string>

using namespace std;

string readFile(const char *filename) {
  FILE *file = fopen(filename, "r");
  if (!file) {
    cerr << "Error: Could not open file " << filename << endl;
    return "";
  }
  string content;
  int ch;
  while ((ch = fgetc(file)) != EOF) {
    content.push_back(static_cast<char>(ch));
  }
  fclose(file);
  return content;
}

int main() {
  string complaints = readFile("CustomerComplaints.txt");
  string target = readFile("TargetComplaint.txt");

  if (target.empty()) {
    cout << "Total occurrences: 0" << endl;
    return 0;
  }

  int count = 0;
  size_t pos = complaints.find(target, 0);

  while (pos != string::npos) {
    count++;
    pos = complaints.find(target, pos + 1);
  }

  cout << "Total occurrences: " << count << endl;

  return 0;
}
