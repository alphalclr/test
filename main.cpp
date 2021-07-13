#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>

int main() {
  std::vector<std::string> v_s;

  v_s.push_back("alan");
  v_s.push_back("thomas");
  v_s.push_back("james");

  for (auto &e : v_s) {
    printf("%s\n", e.c_str());
  }

  return 0;
}
