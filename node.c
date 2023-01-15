#include"graph.h"
#include<stdio.h>

pnode head = NULL;

insert_node_cmd(int node_num, pedge edges){
    pnode new_node = (pnode)malloc(sizeof(node));
    new_node->node_num = node_num;
    new_node->edges = edges;
    new_node->next = head;
    head = new_node;
}

 delete_node_cmd(pnode node_to_delete){
    if (node_to_delete == head)
    {
        head = head->next;
    } else{
        pnode curr = head;
        while (curr->next != node_to_delete) 
        {
            curr = curr->next;
        }
        curr->next = node_to_delete->next;
    }
    free(node_to_delete);
}