#include <iostream>
#include <vector>
using namespace std;
/*
	DFS란?
	미로를 탐색할 때, 한 방향으로 갈 수 있을 때까지 계속 가다 더이상 갈 수 없게 되었을 
	경우 가장 가까운 갈림길로 돌아와서 이곳으로부터 다른 방향으로 다시 탐색을 진행하는
	방법과 유사.
	사용하는 경우 : 모든 노드를 방문하고자 하는 경우
	단순 검색 속도 자체는 BFS에 비해서 느리다.
	자기 자신을 호출하는 "순환 알고리즘의 형태"를 가지고 있다.
	전위 순회를 포함한 다른 형태의 트리 순회는 모두 DFS의 한 종류이다.
	그래프 탐색의 경우 어떤 노드를 방문했었는지 여부를 "반드시 검사"
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
				// 가장 작은 node number를 선택
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
		// i 방문 
		for (auto node : Node_list) {
			if (node.returnNode_num() == cur.returnNode_num()) {
				if (node.changeStatus() == 1) visit(node.findNextNode());
				else 
			}
		}
		// 전체 코드에서 
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