/***************************************************************************
 * 
 * Copyright (c) 2016 zkdnfcf, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file test_map.c
 * @author zk(tjbroadroad@163.com)
 * @date 2016/06/01 09:38:32
 * @version $Revision$ 
 * @brief 
 *  
 **/

#include "rbtree.h"
#include "map.h"
#include <stdio.h>
#include <unistd.h>

root_t tree = RB_ROOT;

int main() {
    char *key = "hello";
    char *word = "world";
    put(&tree, key, word);

    char *key1 = "zhang1";
    char *word1 = "world1";
    put(&tree, key1, word1);


    char *key2 = "zhang2";
    char *word2 = "world2";
    put(&tree, key2, word2);

    map_t *data1 = get(&tree, "zhang1");
    if (data1 != NULL)
        printf("%s\n", data1->val);

    map_t *node;
    for (node = map_first(&tree); node; node=map_next(&(node->node))) {
        printf("%s\n", node->key);
    }
    return 0;
}

/* vim: set ts=4 sw=4 sts=4 tw=100 */
