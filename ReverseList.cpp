#include <iostream>
#include <memory>
using namespace std;
class Node;
typedef shared_ptr<Node> pnode;
struct Node {
	pnode next;
	int data;
	Node (int d, pnode p = nullptr)
		:data(d), next(p) {}
};
int main(int argc, char *argv[]) {
	auto beg = make_shared<Node>(5,
			make_shared<Node>(6,
				make_shared<Node>(7, 
					make_shared<Node>(8))));

	pnode p = beg, last = nullptr;
	while (p) {
		pnode tmp = p->next;
		p->next = last;
		last = p;
		p = tmp;
	}
	while (last) {
		cout << last->data << endl;
		last = last->next;
	}
	cout << "Hello world!" << endl;
	return 0;
}
