# Binary trees! 🌳
<p><img src="https://slideplayer.com/4990278/16/images/slide_1.jpg"></p>
<p><br></p>
<p>A tree whose elements have at most 2 children is called a binary tree. Since each element in a binary tree can have only 2 children, we typically name them the left and right child.&nbsp;</p>
<p>A Binary Tree node contains the following parts.</p>
<ol>
    <li>Data</li>
    <li>Pointer to left child</li>
    <li>Pointer to right child</li>
</ol>
<p>Unlike linear data structures (Array, Linked List, Queues, Stacks, etc) which have only one logical way to traverse them, trees can be traversed in different ways. Following are the generally used ways for traversing trees.</p>
<div><br></div>
<p><img src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/2009/06/tree12.gif" alt="Example Tree"></p>

<p>Depth First Traversals:&nbsp;<br>(a) Inorder (Left, Root, Right) : 4 2 5 1 3&nbsp;<br>(b) Preorder (Root, Left, Right) : 1 2 4 5 3&nbsp;<br>(c) Postorder (Left, Right, Root) : 4 5 2 3 1<br>Breadth-First or Level Order Traversal: 1 2 3 4 5&nbsp;<br>Please see <a href="https://www.geeksforgeeks.org/level-order-tree-traversal/">this&nbsp;</a>post for Breadth-First Traversal.&nbsp;</p>
<p><br></p>
<p><br></p>

<p>Now, let&apos;s see a maybe slightly larger example of binary trees. Perhaps with more numbers it will be easier to understand how it works</p>
<p><strong>One more example:</strong>&nbsp;</p>
<p><img src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/Preorder-from-Inorder-and-Postorder-traversals.jpg" alt=""></p>
<p><br></p>
<p>For this project we are going to take into account several requirements for its correct and formal development, so I am going to list them</p>
<h2>Requirements</h2>
<h3>General</h3>
<ul>
    <li>Allowed editors:&nbsp;<code>vi</code>,&nbsp;<code>vim</code>,&nbsp;<code>emacs</code></li>
    <li>All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89</li>
    <li>All your files should end with a new line</li>
    <li>A&nbsp;<code>README.md</code> file, at the root of the folder of the project, is mandatory</li>
    <li>Your code should use the&nbsp;<code>Betty</code> style. It will be checked using&nbsp;<a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" target="_blank" title="betty-style.pl">betty-style.pl</a> and&nbsp;<a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" target="_blank" title="betty-doc.pl">betty-doc.pl</a></li>
    <li>You are not allowed to use global variables</li>
    <li>No more than 5 functions per file</li>
    <li>You are allowed to use the standard library</li>
    <li>In the following examples, the&nbsp;<code>main.c</code> files are shown as examples. You can use them to test your functions, but you don&rsquo;t have to push them to your repo (if you do we won&rsquo;t take them into account). We will use our own&nbsp;<code>main.c</code> files at compilation. Our&nbsp;<code>main.c</code> files might be different from the one shown in the examples</li>
    <li>The prototypes of all your functions should be included in your header file called&nbsp;<code>binary_trees.h</code></li>
    <li>Don&rsquo;t forget to push your header file</li>
    <li>All your header files should be include guarded</li>
</ul>

<p>We will also use a defined structure to be able to guide us and apply the various ways that there are to traverse a binary tree.</p>
<h3>Data structures</h3>
<p>Please use the following data structures and types for binary trees. Don&rsquo;t forget to include them in your header file.</p>
<h4>Basic Binary Tree</h4>
<pre><code>/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
</code></pre>
<h4>Binary Search Tree</h4>
<pre><code>typedef struct binary_tree_s bst_t;
</code></pre>
<h4>AVL Tree</h4>
<pre><code>typedef struct binary_tree_s avl_t;
</code></pre>
<h4>Max Binary Heap</h4>
<pre><code>typedef struct binary_tree_s heap_t;</code></pre>
Print function
To match the examples in the tasks, you are given this function

This function is used only for visualization purposes. You don’t have to push it to your repo. It may not be used during the correction

<p>Initially we will perform the perhaps basic operations that we can perform</p>
<p>Initially we will perform the perhaps basic operations that we can perform. Some conditions must also be taken into account, for the most efficient development of our code and always thinking about the possible minimum errors that could occur:</p>
<p>Write a function that creates a binary tree node</p>
<ul>
    <li>Prototype:&nbsp;<code>binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);</code></li>
    <li>Where&nbsp;<code>parent</code> is a pointer to the parent node of the node to create</li>
    <li>And&nbsp;<code>value</code> is the value to put in the new node</li>
    <li>When created, a node does not have any child</li>
    <li>Your function must return a pointer to the new node, or&nbsp;<code>NULL</code> on failure</li>
</ul>

<p>Now the next step is to insert a node precisely to the left, so let&apos;s try that</p>
<p>Write a function that inserts a node as the left-child of another node</p>
<ul>
    <li>Prototype:&nbsp;<code>binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);</code></li>
    <li>Where&nbsp;<code>parent</code> is a pointer to the node to insert the left-child in</li>
    <li>And&nbsp;<code>value</code> is the value to store in the new node</li>
    <li>Your function must return a pointer to the created node, or&nbsp;<code>NULL</code> on failure or if&nbsp;<code>parent</code> is&nbsp;<code>NULL</code></li>
    <li>If&nbsp;<code>parent</code> already has a left-child, the new node must take its place, and the old left-child must be set as the left-child of the new node.</li>
</ul>
