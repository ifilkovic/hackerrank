#include <iostream>

using namespace std;

int main() {

  int N;
  int M;
  string line;
  cin >> N >> M;
  int mat[N][M];

  for(int i = 0; i < N; i++) {
    cin >> line;
    for(int j = 0; j < M; j++) {
      mat[i][j] = line[j] - '0';
    }
  }

  int maxTopics = 0;
  int cntTeams = 0;
  int sumRows;

  for(int k = 0; k < N; k++) {
    for(int i = k + 1; i < N; i++) {
      int topics = 0;
      for(int j = 0; j < M; j++) {
        if(mat[i][j] + mat[k][j] > 0) {
          topics++;
        }
      }
      if(topics > maxTopics) {
        maxTopics = topics;
      }
    }
  }

  for(int k = 0; k < N; k++) {
    for(int i = k + 1; i < N; i++) {
      int topics = 0;
      for(int j = 0; j < M; j++) {
        if(mat[k][j] + mat[i][j] > 0) {
          topics++;
        }
      }

      if(topics == maxTopics) {
        cntTeams++;
      }
    }
  }

  cout << maxTopics << endl;
  cout << cntTeams << endl;

  return 0;
}
