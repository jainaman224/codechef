#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

class TrieNode {
 public:
  TrieNode* next[2];
  vector<int> positions;

  TrieNode() {
    next[0] = next[1] = NULL;
  }

  bool HasNumberInRange(int start, int stop) {
    vector<int>::iterator it = lower_bound(
        positions.begin(), positions.end(), start);
    if (it == positions.end()) return false;
    return *it < stop;
  }
};

void AddNumberToTrie(int number, int index, TrieNode* base) {
  TrieNode* cur = base;
  // Go through all binary digits from most significant
  for (int i = 14; i >= 0; i--) {
    int digit = 0;
    if ((number & (1 << i)) != 0) digit = 1;
    cur->positions.push_back(index);
    if (cur->next[digit] == NULL) {
      cur->next[digit] = new TrieNode;
    }
    cur = cur->next[digit];
  }
  cur->positions.push_back(index);
}

int FindBestNumber(int a, int start, int stop, TrieNode* base) {
  int best_num = 0;
  TrieNode* cur = base;
  for (int i = 14; i >= 0; i--) {
    int digit = 1;
    if ((a & (1 << i)) != 0) digit = 0;
    if (cur->next[digit] == NULL || 
        !cur->next[digit]->HasNumberInRange(start, stop))
      digit = 1 - digit;
    best_num *= 2;
    best_num += digit;
    cur = cur->next[digit];
  }
  return best_num;
}


int main() {
  int n; scanf("%d", &n);
  int q; scanf("%d", &q);
  TrieNode base;
  for (int i = 0; i < n; i++) {
    int x; scanf("%d", &x);
    AddNumberToTrie(x, i, &base);
  }

  for (int i = 0; i < q; i++) {
    int a, start, stop;
    // Finds biggest i, such that start <= i < stop and XOR with a is as big as possible
    // Base index is 0
    scanf("%d %d %d", &a, &start, &stop);
    printf("%d\n", FindBestNumber(a, start, stop, &base)^a);
  }
}