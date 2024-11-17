#include <vector>
using namespace std;

int min(vector<int> list){
  int least = 0;
  for (int i = 1; i < list.size(); i++)
    if (list[i] < list[least]) {
      least = i;
    }
  return list[least];
}

int max(vector<int> list){
  int greatest = 0;
  for (int i = 1; i < list.size(); i++)
    if (list[i] > list[greatest]) {
      greatest = i;
    }
  return list[greatest];
}

// 8 kyu, again.
// One of the solutions used <algorithm>.
// I feel like an idiot, but that's when you know you're learning, I suppose.
