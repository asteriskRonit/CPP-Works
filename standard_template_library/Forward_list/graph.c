#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define MAX 5
struct node{
    char label;
    bool visited;
};
int stack[MAX];
int top=-1;

struct node* list_node[MAX];
int matrix[MAX][MAX];

int vertex_count=0;

void push(int no)
{
    stack[++top]=no;
}
int pop()
{
    return stack[top--];
}
int peek()
{
    return stack[top];
}
bool isStackempty()
{
    return top==-1;
}
void add_vertex(char lbl)
{
    struct node *ver=(struct node *)malloc(sizeof(struct node));
    ver->label=lbl;
    ver->visited=false;
    list_node[vertex_count++]=ver;
}
void add_edge(int start,int end)
{
    matrix[start][end]=1;
    matrix[end][start]=1;
}
void display_vertex(int index)
{
    printf("%c ",list_node[index]->label);
}
int get_unvisited_vertex(int index)
{
    for(int i=0;i<vertex_count;i++)
    {
        if(matrix[index][i]==1&&list_node[i]->visited==false)
        {
            return i;
        }
    }
    return -1;
}
void DFS()
{
    list_node[0]->visited=true;
    display_vertex(0);
    push(0);
    while(!isStackempty())
    {
        int unv=get_unvisited_vertex(peek());
        if(unv==-1)
        {
            pop();
        }
        else
        {
            list_node[unv]->visited=true;
            display_vertex(unv);
            push(unv);
        }
    }
    for(int i=0;i<vertex_count;i++)
    {
        list_node[i]->visited=false;
    }

}

void main()
{
    add_vertex('S');
    add_vertex('A');
    add_vertex('B');
    add_vertex('C');
    add_vertex('D');

    add_edge(0,1);
    add_edge(0,2);
    add_edge(0,3);
    add_edge(1,4);
    add_edge(2,4);
    add_edge(3,4);

    printf("\nDFS\n");

    DFS();
}