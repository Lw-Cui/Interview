#include <cstring>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char *argv[]) {
	if (argc != 3)
		return -1;
	int len_raw = strlen(argv[1]);
	int len_c = strlen(argv[2]);
	int dist[len_raw + 1][len_c + 1];

	//init
	memset(dist, 0, sizeof(dist));
	for (int i = 0; i < len_raw; i++)
		dist[i][0] = i;
	for (int i = 0; i < len_c; i++)
		dist[0][i] = i;

	for (int i = 1; i <= len_raw; i++)
		for (int j = 1; j <= len_c; j++)
			if (argv[1][i - 1] == argv[2][j - 1])
				dist[i][j] = dist[i - 1][j - 1];
			else
				dist[i][j] = min(dist[i - 1][j - 1],
						min(dist[i][j - 1], dist[i - 1][j])) + 1;
	cout << dist[len_raw][len_c] << endl;
	return 0;
}
