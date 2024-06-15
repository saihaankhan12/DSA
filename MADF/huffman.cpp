#include <iostream>
#include <queue>
#include <string>

using namespace std;

struct node {
    int freq;
    char data;
    const node *child0, *child1;

    // Constructor for leaf nodes
    node(char d, int f = -1)  // ascii converts to char
     {
        data = d;
        freq = f;
        child0 = NULL;
        child1 = NULL;
    }

    // Constructor for internal nodes
    node(const node *c0, const node *c1) // pointers of the nodes are passed as arguments
    {
        data = 0;
        freq = c0->freq + c1->freq;
        child0 = c0;
        child1 = c1;
    }

    // Operator overloading for priority queue
    bool operator<(const node &a) const {  // when elements are pushed in pq, they are sorted in ascending order of frequency by this function
        return freq > a.freq;
    }

    // Function to traverse the Huffman tree and print codes
    void traverse(string code = "") const {
        if (child0 != NULL) // here, child1 is not checked directly in the initial condition (child0 != NULL) because the traversal typically follows a depth-first order starting with the left subtree (child0) first
        {
            child0->traverse(code + '0');
            child1->traverse(code + '1');
        } else {
            cout << "Data: " << data << ", Frequency: " << freq << ", Code: " << code << endl;
        }
    }
};

void huffmanCoding(string str) {
    priority_queue<node> qu;
    int frequency[256] = {0};  //initialise the array with 0 then update with the frequency of each character

    // Count frequency of each character
    for (char ch : str)    //ch is the iterator which will iterate through the string
        frequency[int(ch)]++; // char converted to int ( ascii value) and then increment at that index

    // Create leaf nodes for each character with non-zero frequency
    for (int i = 0; i < 256; i++)   // check for each character if it has frequency greater than 0 then push it to the priority queue
    {
        if (frequency[i])  // if "frequency[i] value " is greater than 0 then push it to the priority queue
            qu.push(node(i, frequency[i]));;  //call the constructor of the node class and push the character and its frequency to the priority queue
    // for loop 'i' checks all values 0 to 255 and the one which converts to char is considered in node constructor
    }

    // Build the Huffman tree
    while (qu.size() > 1) {
        node *c0 = new node(qu.top());  // create a new node with the top element of the priority queue(least frequency) and assign a pointer to it
        qu.pop(); // remove the top element from the priority queue
        node *c1 = new node(qu.top()); // same as above
        qu.pop();
        qu.push(node(c0, c1)); // the node with sum of two frequencies is pushed to the priority queue
    }

    // Traverse the Huffman tree and print codes
    cout << "The Huffman Code: " << endl;
    qu.top().traverse(); 
}

int main() {
    string str;
    cout << "Enter The String For Implementation Of Huffman Coding: ";
    cin >> str;
    huffmanCoding(str);
    return 0;
}
