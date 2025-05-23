#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * function in C that checks if a singly linked list is a palindrome
 * @listint_t **head: attribut
 * 
 * Return 0 if it not a palindrome, 1 if it is a palindrome
 */
int is_palindrome(listint_t **head){
    listint_t *slow = *head;
    listint_t *fast = *head;
    listint_t *next, *prev = NULL, *second_half;
    if (*head == NULL || (*head)->next == NULL){
        return (1);
    }
    
    while (fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }

    while (slow != NULL){
        next = slow->next;
        slow->next = prev;
        prev = slow;
        slow = next;
    }

    second_half = prev;
    slow = *head;

    while (second_half != NULL){
        if(slow->n != second_half->n){
            return (0); 
        }
        slow = slow->next;
        second_half = second_half->next;
    }

    return (1);
}