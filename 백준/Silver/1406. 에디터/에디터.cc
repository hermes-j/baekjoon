#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

class Node {
	public:
		char data;
		Node* next;
		Node* prev;
		Node(int data, Node* next, Node* prev) : data(data), next(next), prev(prev) {}
		~Node() {
			delete next;
			delete prev;
		}
};

class LinkedList {
	public:
		Node* create_list() {
			Node* head = new Node(0, NULL, NULL); // 빈 노드 생성
			return head;
		}
		Node* addNode(Node* target, char data) {
			Node* newNode = new Node(data, target->next, target);
			if(target->next) target->next->prev = newNode;
			target->next = newNode;
			return newNode;
		}
		Node* deleteNode(Node* target) {
			if(!(target -> prev)) return target;
			if(target->prev) target->prev->next = target->next;
			if(target->next) target->next->prev = target->prev;
			return target->prev;
		}
		void print(Node* target) {
			while(target->next) {
				target = target->next; // 맨 처음은 빈 노드이므로 이동 먼저
				cout << target->data;
			}
		}
};

string s;
int m;
char op;

int main() {
    fast_io;
    // input
	cin >> s;

	LinkedList list;
	Node* head = list.create_list();
	Node* start = head;

	for(auto c: s) {
		head = list.addNode(head, c); // add함으로써 바뀐 head를 다시 반영해야 함
	}

	cin >> m;
	for(int i=0; i<m; i++) {
		cin >> op;
		switch(op) {
			case 'P':
				char chr; cin >> chr;
				head = list.addNode(head, chr);
				break;
			case 'L':
				if (head->prev) head = head->prev;
				break;
			case 'D':
				if (head->next) head = head->next;
				break;
			case 'B':
				if (head->prev) head = list.deleteNode(head);
				break;
		}
	}
	list.print(start);
    return 0;
}