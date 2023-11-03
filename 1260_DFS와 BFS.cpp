#include <iostream>
#include <vector>
using namespace std;
/*
	DFS��?
	�̷θ� Ž���� ��, �� �������� �� �� ���� ������ ��� ���� ���̻� �� �� ���� �Ǿ��� 
	��� ���� ����� ������� ���ƿͼ� �̰����κ��� �ٸ� �������� �ٽ� Ž���� �����ϴ�
	����� ����.
	����ϴ� ��� : ��� ��带 �湮�ϰ��� �ϴ� ���
	�ܼ� �˻� �ӵ� ��ü�� BFS�� ���ؼ� ������.
	�ڱ� �ڽ��� ȣ���ϴ� "��ȯ �˰����� ����"�� ������ �ִ�.
	���� ��ȸ�� ������ �ٸ� ������ Ʈ�� ��ȸ�� ��� DFS�� �� �����̴�.
	�׷��� Ž���� ��� � ��带 �湮�߾����� ���θ� "�ݵ�� �˻�"
*/

class Graph {
private:
	class Node {
	private:
		int Node_num;
		bool check_visit;
		vector<Node> connectedNodes;
	public:
		Node(int i) {
			this->Node_num = i;
			this->check_visit = False;
		}
		int returnNode_num() {
			return this->Node_num;
		}
		void push_Node(int node_num) {
			Node node = Node(node_num);
			this->connectedNodes.push_back(node);
		}
		bool changeStatus() {
			if (this->changeStatus == True) return 0;
			this->check_visit = Ture;
			return 1;
		}
		Node min_Node(vector<Node> connectedNodes) {
			int min = 1001;
			for (auto i : this->connectedNodes) {
				// ���� ���� node number�� ����
				if (i.returnNode_num() < min) {
					min = i.returnNode_num();
				}
			}
		}
		Node findNextNode() {
			return min_Node(this->connectedNodes);
		}
	};
	class Edge {
	private:
	public:

	};
public:
	Graph() {
		
	}
	void generateEdge(int a, int b) {
		for (auto node : Node_list) {
			if (node.returnNode_num() == i) node.push_Node(b);
		}
	}
	void generateNodeList(int N) {
		for (int i = 0; i < N; i++) {
			Node newNode = Node(i);
			Node_list.push_back(newNode);
		}
	}
};
class DFS {
private:    
	//vector<Node> Node_list;
public:
	DFS() {

	}
	void visit(Node cur) {
		// i �湮 
		for (auto node : Node_list) {
			if (node.returnNode_num() == cur.returnNode_num()) {
				if (node.changeStatus() == 1) visit(node.findNextNode());
				else 
			}
		}
		// ��ü �ڵ忡�� 
	}
};
class BFS {
private:
public:
	BFS() {

	}

};
int main() {
	int N, M, V;
	cin >> N >> M >> V;
	Graph graph;
	graph.generateNodeList(N);
	for (int i = 0; i < M; i++) {
		int a, b;
		cin >> a >> b;
		graph.generateEdge(a, b);
	}
	DFS dfs(graph);
	BFS bfs(graph);
	return 0;
}