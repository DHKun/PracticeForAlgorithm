#include <stdio.h>
#include <stdbool.h>

#define MAXSIZE 100 

void init(Sequence1 *list);
int search(Sequence1 *list, int value);
bool insert(Sequence1 *list, int index, int value);
bool delete(Sequence1 *list, int index);

typedef struct {
    int data[MAXSIZE];
    int l;
} Sequence1;

void init(Sequence1 *list)
{
    list->l = 0;
}

int search(Sequence1 *list, int value)
{
    for(int i = 0; i < list->l; i++) {
        if(list->data[i] == value) {
            return i;
        }
    }
    return -1;
}

bool insert(Sequence1 *list, int index, int value)
{
    if(index < 0 || index > list->l || list->l == MAXSIZE) {
        return false;
    }
    for(int i = list->l; i > index; i--) {
        list->data[i] = list->data[i-1];
    }
    list->data[index] = value;
    list->l++;
    return true;
}

bool delete(Sequence1 *list, int index)
{
    if(index < 0 || index >= list->l) {
        return false;
    }
    for(int i = index; i < list->l - 1; i++) {
        list->data[i] = list->data[i+1];
    }
    list->l--;
    return true;
}