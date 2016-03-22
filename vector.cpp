#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
using namespace std;
inline void reverse(char str[], int len) {
	for (int i = 0; i < len / 2; i++)
		swap(str[i], str[len - i - 1]);
}

int main(int argc, char* argv[]) {
	if (argc != 3)
		return -1;
	int len; 
	sscanf(argv[2], "%d", &len);
	reverse(argv[1] + len + 1, len);
	cout << argv[1] << endl;
	reverse(argv[1], strlen(argv[1]) - len);
	cout << argv[1] << endl;
	reverse(argv[1], strlen(argv[1]));
	cout << argv[1] << endl;
	return 0;
}
