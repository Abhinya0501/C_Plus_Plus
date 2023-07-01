// CPP program to remove first node of
// linked list.
#include <iostream>
using namespace std;

/* Link list node */
struct Node {
	int data;
	struct Node* next;
};

/* Function to remove the first node
of the linked list */
Node* removeFirstNode(struct Node* head)
{
	if (head == NULL)
		return NULL;

	// Move the head pointer to the next node
	Node* temp = head;
	head = head->next;

	delete temp;

	return head;
}

// Function to push node at head
// void push(struct Node** head_ref, int new_data)
// {
// 	struct Node* new_node = new Node;
// 	new_node->data = new_data;
// 	new_node->next = (*head_ref);
// 	(*head_ref) = new_node;
// }

// Driver code
int main()
{
	/* Start with the empty list */
	

	/* Use push() function to construct
	the below list 8 -> 23 -> 11 -> 29 -> 12 */
  Node *head=new Node(30);
    head->next=new Node(40);
    head->next->next=new Node(50);
    head->next->next->next=new Node(60);

	removeFirstNode(head);
	for (Node* temp = head; temp != NULL; temp = temp->next)
		cout << temp->data << " ";

	return 0;
}
