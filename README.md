Project Title:

🎮 Video Game AI – Decision Tree CRUD for NPC Behavior

Team Members

● Member 1: jahnavi

● Member 2: priyanka

Course: Data Structures Using C 

📖 Introduction:

This project demonstrates how a Decision Tree (Binary Tree) can be used in video games to control NPC (Non-Player Character) behavior. It allows dynamic management of decisions using CRUD operations.

Problem Statement:

In modern video games, NPCs (Non-Player Characters) must make decisions based on situations in the game environment.

For example:

● If an enemy is nearby → Attack 

● If no enemy is nearby → Patrol 

● If health is low → Run or Heal 
 
These decisions can be modeled using a Decision Tree.

The goal of this project is to implement a Decision Tree using C language that supports 
CRUD operations (Create, Read, Update, Delete) to manage NPC behavior efficiently. 

Data Structure Used :

This project uses a Binary Tree to represent the decision tree. 

Each node contains: 

● Node ID 

● NPC Decision/Action

● Left Child Pointer 

● Right Child Pointer

Structure: 

struct Node

{ 
int id;

char decision[100]; 

struct Node *left; 

struct Node *right; 

}; 

Program Features:

The program is menu-driven and supports the following operations: 

. Add Node (Create):Adds a new decision node to the tree. 

. Delete Node (Delete) :Removes an existing node from the tree.

. Update Node (Update) :Modifies the decision stored in a node. 

. Search Node :Finds a node based on its ID. 

. Display Tree (Read):Displays all nodes in the decision tree.

. Exit :Terminates the program. 

Algorithm Explanation :

Insert Node:

. Check if the tree is empty. 

. Create a new node. 

. Compare the node ID with the root. 

. Insert into the left or right subtree. 

Search Node: 

. Compare the search ID with the root node. 

. If equal → node found. 


. If smaller → search left subtree.


. If larger → search right subtree. 

Update Node :

. Search the node using ID. 

. If found, update the decision text. 

Delete Node: 

. Locate the node. 

. Remove it from the tree.

. Free the memory. 

 Time Complexity:
Insert Node: O(log n)
Search Node: O(log n)
Delete Node: O(log n)
Display Tree: O(n)

Compilation Instructions :

Compile the program using GCC compiler. 

gcc main.c -o project 

Run the program: 

./project 


Sample Output

===== VIDEO GAME AI DECISION TREE ===== 

. Add Node 

. Delete Node 

. Update Node

. Search Node 

. Display Tree

. Exit 

Enter choice: 1 

Enter Node ID: 10 

Enter NPC Decision: Attack Enemy 

Node added successfully! 

Enter choice: 5 

Decision Tree Nodes: 

Node ID: 10 | Decision: Attack Enemy 

Project Structure:
video-game-ai-decision-tree/
│── src/
│   └── main.c
│── docs/
│   └── project_report.pdf
│── ppt/
│   └── presentation.pptx
│── README.md
│── sample_output.txt
│── video_demo_link.txt


How We Built the Project Together:

Steps:

Go to the project repository
Click on Settings
Select Collaborators & Teams
Click Add people
Enter teammate’s username or email
Assign permission (Read / Write / Admin)
Click Invite
Once the team member accepts the invitation, they become a contributor and can work on the project.

Repository Structure:

video-game-ai-decision-tree/ 
src/ 
main.c 
docs/ 
project_report.pdf 
ppt/ 
presentation.pptx 
README.md 
sample_output.txt 
video_demo_link.txt 

Real-World Application :

Decision Trees are widely used in Game AI to control NPC behaviors. 

Examples: 

● Enemy deciding whether to attack or hide 

● Guard deciding whether to patrol or chase 

● Character deciding whether to heal or fight 

Game engines like Unity and Unreal Engine use similar AI logic structures. 

Future Enhancements:

Implement advanced AI (Behavior Trees)
Add graphical interface (GUI)
Store tree using files
Add shortest decision path logic

Conclusion: 

This project demonstrates how Decision Trees can be used to simulate NPC behavior in video games. 

The implementation uses C programming, dynamic memory allocation, and binary tree 
operations to perform CRUD operations efficiently. 

It helps understand the practical use of data structures in real-world applications such as 
game development and artificial intelligence.

It uses:
C Programming
Binary Trees
Dynamic Memory Allocation
This helps understand real-world applications of data structures in Game Development and AI.

<img width="494" height="394" alt="Screenshot 2026-04-23 111253" src="https://github.com/user-attachments/assets/4d91c978-5308-4cd0-a73b-07ac6cdb808e" />


