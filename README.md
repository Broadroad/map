# Map for c
Current Map Version 1.0
For C++, there is STL to use, and so we have map to use. But for c, We have to implement ourselves. So I implement a C map, I used rb_tree to implement this. The map sort by the key, and get the value in O(logn).

# Usage
I grab rb_tree from linux kernel. Just import map.h, rbtree.h, rbtree.c in you project.

# Example

```c

//put the key and value into map
root_t tree = RB_ROOT; 
char *key = "hello";
char *word = "world";
put(&tree, key, word);

//get the value from key
map_t *data = get(&tree, "zhang");
if (data != NULL)
	printf("%s\n", data->val);

//Traversal
map_t *node;
for (node = map_first(&tree); node; node=map_next(&(node->node))) {
	printf("%s\n", node->val);
}

//Free map node
if (data) {
    rb_erase(&data->node, &tree);
	map_free(data);
}
````

# Bug Reporting and Feature Requests
If you find a bug or have an enhancement request, simply file an Issue and send a message (via github messages) to the Committers to the project to let them know that you have filed an Issue.

# Contact
tjbroadroad@163.com


