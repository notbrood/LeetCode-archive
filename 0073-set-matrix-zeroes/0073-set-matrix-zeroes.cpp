

class Solution {
  public: void setZeroes(vector < vector < int >> & matrix) {
    vector < int > xr;
    vector < int > yc;
    int n = matrix.size();
    int m = matrix[0].size();
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (matrix[i][j] == 0) {
          xr.push_back(i);
          yc.push_back(j);
        }
      }
    }

    for (int i = 0; i < xr.size(); i++) {
      int index = xr[i];
      for (int j = 0; j < m; j++) {
        matrix[index][j] = 0;
      }
    }
    for (int j = 0; j < yc.size(); j++) {
      int index1 = yc[j];
      for (int i = 0; i < n; i++) {
        matrix[i][index1] = 0;
      }
    }
  }
};