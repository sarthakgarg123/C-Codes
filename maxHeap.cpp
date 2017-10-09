#include<bits/stdc++.h>
using namespace std;
#define parent(i) (i-1)/2
#define left(i) 2*i+1
#define right(i) 2*i+2

void minHeapify(vector<int>&heap,int i)
{
	int l = left(i);
	int r = right(i);
	int smallest;
	if(l<heap.size() && heap[l]<heap[i]) smallest = l;
	else smallest = i;
	if(r<heap.size() && heap[r]<heap[smallest]) smallest = r;
	if(i!=smallest) { swap(heap[smallest],heap[i]); minHeapify(heap,smallest); }
}
void insert(vector<int> &heap,int k)
{
	heap.push_back(k);
	int i = heap.size()-1;
	while(i!=0 && heap[parent(i)] > heap[i]) { swap(heap[parent(i)],heap[i]); i = parent(i); }
}
int pop(vector<int> &heap)
{
	int temp = heap[0];
	heap[0] = heap[heap.size()-1];
	heap.pop_back();
	minHeapify(heap,0);
	return temp;
}
void print(vector<int>&heap)
{
	for (int i = 0; i < heap.size(); ++i) { cout<<heap[i]<<" "; }cout<<endl;
}
int main()
{
	vector<int> heap;
	insert(heap,10); insert(heap,6); insert(heap,20); insert(heap,5); insert(heap,16); insert(heap,17); insert(heap,13);
	insert(heap,2);  
	int min = pop(heap); cout<<min<<endl;
	return 0;
}