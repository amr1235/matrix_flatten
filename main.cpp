#include <iostream>
#include <vector>

using namespace std;

int get_vector_index(int x, int y, int z,int WIDTH,int DEPTH)
{
  return x + WIDTH * (y + DEPTH * z);
}

void flatten(vector<std::vector<std::vector<int>>> & matrix, vector<int> & vector, int n, int m, int p)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      for (int k = 0; k < p; k++)
      {
        vector.push_back(matrix[i][j][k]);
      }
    }
  }
}