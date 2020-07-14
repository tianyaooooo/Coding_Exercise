#include<iostream>
#include <cstring>
#define MaxV 100
using namespace std;

/* 
测试: 以课件 Single Source Shortest Paths中的 Example 为例 

输入顶点数 边数：
9 13
输入图：点 点 权
1 2 1
2 3 1
3 4 2
3 5 10
4 7 1
4 1 6
5 4 5
6 5 1
7 6 2
7 9 1
8 4 3
8 7 1
9 6 2
请输入起点 终点：
3 5
--------------------------------
从起点3到终点5的最短路径为10
*/

//边表 
struct Edge
{
	int adjvex;
	int weight;
	Edge *next;
};

//顶点表 
struct Node
{
	int number;
	Edge *first; 
} node[MaxV];

//一些声明 
int n, m, heap_size, s, t;
int pos[MaxV]; ///存储顶点在数组中的位置 
int heap[MaxV]; //存储顶点的序号 
int dis[MaxV]; //距源点的最短距离
Edge *first[MaxV];
bool in_heap[MaxV]; //标记是否在堆中 

//添加边 
void add_edge(int u, int v, int len)
{
	Edge *temp = new Edge; //??
	temp->adjvex = v;
	temp->weight = len;
	temp->next = first[u];
	first[u] = temp; //??
}

//交换并记录交换后的位置 
//原本的swap在交换位置时，不记录交换到什么位置
//因此decrease_key(A,i)时只是减小i位置值，而无法减小指定顶点值 
void swapp(int i, int j)
{
	int temp = heap[i]; //交换数据值 
	heap[i] = heap[j];
	heap[j] = temp;
	pos[heap[j]] = j; //交换位置
	pos[heap[i]] = i;
}

 
void shift_up(int now)
{
	int next = 0;
	while(now > 1)
	{
		next = now>>1; //移位，就是找parent 
		if(dis[heap[next]] > dis[heap[now]])
			swapp(next, now);
		now = next;
	}
}

//插入堆，仿照课件 Binary Heaps in Dynamic Arrays 的 insertion 
void insert(int x)
{
	in_heap[x] = true;
	heap[++heap_size] = x;
	pos[x] = heap_size;
	shift_up(heap_size);
}

//取出当前最小值，仿照课件 Binary Heaps in Dynamic Arrays 的 delete-min 
int extract_min()
{
	int now = 1, next, res = heap[1];
	in_heap[heap[1]] = false;
	heap[1] = heap[heap_size--];
	pos[heap[1]] = 1;
	while(now*2 <= heap_size)
	{
		next = now<<1; //左孩子 
		if(next < heap_size && dis[heap[next+1]] < dis[heap[next]])
			++next; //当前smallest 
		if(heap[now] <= heap[next])
			return res;
		swapp(now, next);
		now = next;
	}
	return res;
}

//最短路径算法 
void dijkstra()
{
	insert(s);
	dis[s] = 0;
	while(heap_size > 0)
	{
		int top = extract_min();
		if(top == t) //若想知道全部所有源点到所有顶点的距离，删掉此if语句 
			{
				break;				
			}
		Edge *temp = first[top];
		while(temp != NULL)
		{
			if(dis[temp->adjvex] > dis[top] + temp->weight)
			{
				dis[temp->adjvex] = dis[top] + temp->weight;
              	if(in_heap[temp->adjvex]) //若该点已经在堆中，只需上浮新dis在堆中的位置 
              	{ 
					shift_up(pos[temp->adjvex]);
				}	
				else //若不在，则插入堆 
				{ 
					insert(temp->adjvex);
				} 
			}
			temp = temp->next;
		}
	}
}

int main()
{
	cout<<"输入顶点数 边数："<<endl;
	cin>>n>>m;
	cout<<"输入图：点 点 权"<<endl; 
	for(int i = 1; i <= m; i++)
	{
		int a, b, c;
		cin>>a>>b>>c;
		add_edge(a, b, c);
	}

	cout<<"请输入起点 终点："<<endl; 
	cin>>s>>t;

	memset(dis, 127, sizeof(dis)); //数组中的所有元素全为2139062143(可视为INF)
    dijkstra();
    cout<<"--------------------------------"<<endl; 
	cout<<"从起点"<<s<<"到终点"<<t<<"的最短路径为"<<dis[t];
	return 0;
}
