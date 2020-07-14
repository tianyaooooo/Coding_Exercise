#include<iostream>
#include <cstring>
#define MaxV 100
using namespace std;

/* 
����: �Կμ� Single Source Shortest Paths�е� Example Ϊ�� 

���붥���� ������
9 13
����ͼ���� �� Ȩ
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
��������� �յ㣺
3 5
--------------------------------
�����3���յ�5�����·��Ϊ10
*/

//�߱� 
struct Edge
{
	int adjvex;
	int weight;
	Edge *next;
};

//����� 
struct Node
{
	int number;
	Edge *first; 
} node[MaxV];

//һЩ���� 
int n, m, heap_size, s, t;
int pos[MaxV]; ///�洢�����������е�λ�� 
int heap[MaxV]; //�洢�������� 
int dis[MaxV]; //��Դ�����̾���
Edge *first[MaxV];
bool in_heap[MaxV]; //����Ƿ��ڶ��� 

//��ӱ� 
void add_edge(int u, int v, int len)
{
	Edge *temp = new Edge; //??
	temp->adjvex = v;
	temp->weight = len;
	temp->next = first[u];
	first[u] = temp; //??
}

//��������¼�������λ�� 
//ԭ����swap�ڽ���λ��ʱ������¼������ʲôλ��
//���decrease_key(A,i)ʱֻ�Ǽ�Сiλ��ֵ�����޷���Сָ������ֵ 
void swapp(int i, int j)
{
	int temp = heap[i]; //��������ֵ 
	heap[i] = heap[j];
	heap[j] = temp;
	pos[heap[j]] = j; //����λ��
	pos[heap[i]] = i;
}

 
void shift_up(int now)
{
	int next = 0;
	while(now > 1)
	{
		next = now>>1; //��λ��������parent 
		if(dis[heap[next]] > dis[heap[now]])
			swapp(next, now);
		now = next;
	}
}

//����ѣ����տμ� Binary Heaps in Dynamic Arrays �� insertion 
void insert(int x)
{
	in_heap[x] = true;
	heap[++heap_size] = x;
	pos[x] = heap_size;
	shift_up(heap_size);
}

//ȡ����ǰ��Сֵ�����տμ� Binary Heaps in Dynamic Arrays �� delete-min 
int extract_min()
{
	int now = 1, next, res = heap[1];
	in_heap[heap[1]] = false;
	heap[1] = heap[heap_size--];
	pos[heap[1]] = 1;
	while(now*2 <= heap_size)
	{
		next = now<<1; //���� 
		if(next < heap_size && dis[heap[next+1]] < dis[heap[next]])
			++next; //��ǰsmallest 
		if(heap[now] <= heap[next])
			return res;
		swapp(now, next);
		now = next;
	}
	return res;
}

//���·���㷨 
void dijkstra()
{
	insert(s);
	dis[s] = 0;
	while(heap_size > 0)
	{
		int top = extract_min();
		if(top == t) //����֪��ȫ������Դ�㵽���ж���ľ��룬ɾ����if��� 
			{
				break;				
			}
		Edge *temp = first[top];
		while(temp != NULL)
		{
			if(dis[temp->adjvex] > dis[top] + temp->weight)
			{
				dis[temp->adjvex] = dis[top] + temp->weight;
              	if(in_heap[temp->adjvex]) //���õ��Ѿ��ڶ��У�ֻ���ϸ���dis�ڶ��е�λ�� 
              	{ 
					shift_up(pos[temp->adjvex]);
				}	
				else //�����ڣ������� 
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
	cout<<"���붥���� ������"<<endl;
	cin>>n>>m;
	cout<<"����ͼ���� �� Ȩ"<<endl; 
	for(int i = 1; i <= m; i++)
	{
		int a, b, c;
		cin>>a>>b>>c;
		add_edge(a, b, c);
	}

	cout<<"��������� �յ㣺"<<endl; 
	cin>>s>>t;

	memset(dis, 127, sizeof(dis)); //�����е�����Ԫ��ȫΪ2139062143(����ΪINF)
    dijkstra();
    cout<<"--------------------------------"<<endl; 
	cout<<"�����"<<s<<"���յ�"<<t<<"�����·��Ϊ"<<dis[t];
	return 0;
}
