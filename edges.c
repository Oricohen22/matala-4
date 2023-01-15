#include <stdio.h>
#include "graph.h"



pedge head = NULL;

void addedge (int weight, struct pnode* endpoint) {
    pedge newNode = (pedge)malloc(sizeof(edge));
    newNode->weight = weight;
    newNode->endpoint = endpoint;
    newNode->next = head;
    head = newNode;
}

void deletedge(int weight) {
    pedge current = head;
    pedge previous = NULL;
    while (current != NULL) {
        if (current->weight == weight) {
            if (previous == NULL) {
                head = current->next;
            } else {
                previous->next = current->next;
            }
            free(current);
            break;
        }
        previous = current;
        current = current->next;
    }
}
