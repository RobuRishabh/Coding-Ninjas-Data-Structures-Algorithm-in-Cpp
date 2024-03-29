/*
Length of LL
Send Feedback
Given the head of a singly linked list of integers, find and return its length.

Example:

Sample Linked List
The length of the list is 4. Hence we return 4.


Note:
Exercise caution when dealing with edge cases, such as when the head is NULL. Failing to handle these edge cases appropriately may result in a runtime error in your code.
Input format :
The first and only line contains elements of the singly linked list separated by a single space. 
 Remember/Consider :
While specifying the list elements for input, -1 indicates the end of the singly linked list and hence, would never be a list element.
Output format :
The output contains a single integer denoting the length of the linked list.
Sample Input 1 :
3 4 5 2 6 1 9 -1
Sample Output 1 :
7


Explanation of sample input 1 :
The number of nodes in the given linked list is 7.
Hence we return 7.


Sample Input 2 :
10 76 39 -3 2 9 -23 9 -1
Sample Output 2 :
8
 Constraints :
0 <= N <= 10^5
Time Limit: 1 sec
*/

/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/

int length(Node *head)
{
	int len = 0;
    Node *temp = head;
    while(temp != NULL){
        len++;
        temp = temp -> next; 
    }
    return len;
}