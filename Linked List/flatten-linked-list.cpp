#include <bits/stdc++.h>

struct Node{
	int data;
	struct Node * next;
	struct Node * bottom;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
	
};

using namespace std;

void printList(Node *Node)
{
    while (Node != NULL)
    {
        printf("%d ", Node->data);
        Node = Node->bottom;
    }
}

Node* flatten (Node* root);

int main(void) {

	int t;
	cin>>t;
	while(t--){
    int n,m,flag=1,flag1=1;
    struct Node * temp=NULL;
	struct Node * head=NULL;
	struct Node * pre=NULL;
	struct Node * tempB=NULL;
	struct Node * preB=NULL;
		cin>>n;
        int work[n];
		for(int i=0;i<n;i++)
            cin>>work[i];
		for(int i=0;i<n;i++){
			m=work[i];
			--m;
			int data;
			scanf("%d",&data);
			temp = new Node(data);
			temp->next = NULL;
			temp->bottom = NULL;
			
			if(flag){
				head = temp;
				pre = temp;
				flag = 0;
				flag1 = 1;
			}
			else{
				pre->next = temp;
				pre = temp;
				flag1 = 1;
			}
			for(int j=0;j<m;j++){
				
				int temp_data;
				scanf("%d",&temp_data);
				tempB = new Node(temp_data);

				if(flag1){
					temp->bottom=tempB;
					preB=tempB;
					flag1=0;
				}
				else{
					preB->bottom=tempB;
					preB=tempB;
				}
			}
		}
		   Node *fun = head;
		   Node *fun2=head;

            Node* root = flatten(head);
            printList(root);
            cout<<endl;

	}
	return 0;
}
    
Node* mergeLLs(Node* list1, Node* list2) {
    Node* sol = new Node(0);
    Node* temp = sol;
    Node* ptr1 = list1;
    Node* ptr2 = list2;
    
    while(ptr1 != NULL && ptr2 != NULL) {
        if(ptr1->data <= ptr2->data) {
            temp->bottom = ptr1;
            ptr1 = ptr1->bottom;
            temp = temp->bottom;
        }
        
        else if(ptr1->data > ptr2->data) {
            temp->bottom = ptr2;
            ptr2 = ptr2->bottom;
            temp = temp->bottom;
        }
    }
    
    if(ptr1 == NULL) {
        temp->bottom = ptr2;
    }
    
    else if(ptr2 == NULL) {
        temp->bottom = ptr1;
    }
    
    temp = temp->bottom;
    
    return sol->bottom;
}

Node *flatten(Node *root)
{
   // Your code here
   Node* ptr1 = root;
   Node* ptr2 = root->next;
   while(ptr1 != NULL && ptr2 != NULL) {
       ptr1 = mergeLLs(ptr1, ptr2);
       ptr2 = ptr2->next;
   }
   
   return root;
}
