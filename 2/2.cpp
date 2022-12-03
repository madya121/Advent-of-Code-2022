#include <cstdio>
#include <bitset>
#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <cstring>
#include <algorithm>
#include <map>
#include <set>
#include <list>
#include <vector>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <iomanip>
using namespace std;

/*
Rock:     1
Paper:    2
Scissors: 3
*/

int check(string A, string B) {
  if (A == "A" && B == "X")
    return 3;
  if (A == "A" && B == "Y")
    return 1;
  if (A == "A" && B == "Z")
    return 2;
    
  if (A == "B" && B == "X")
    return 1;
  if (A == "B" && B == "Y")
    return 2;
  if (A == "B" && B == "Z")
    return 3;
    
  if (A == "C" && B == "X")
    return 2;
  if (A == "C" && B == "Y")
    return 3;
  if (A == "C" && B == "Z")
    return 1;
}

int main() {
  freopen("input.txt", "r", stdin);
  map<string, int> m;
  m["X"] = 0;
  m["Y"] = 3;
  m["Z"] = 6;
  
  string a, b;
  int sum = 0;
  while(cin >> a >> b) {
    sum += m[b] + check(a, b);
  }
  
  cout << sum << endl;
  return 0;
}

