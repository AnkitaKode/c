#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int isEmpty(int top);
char pop(int *top);
void push(char item, int *top);
void reverse_string(char *str);

int main() {
  char str[MAX_SIZE];
  printf("Enter a string: ");
  fgets(str, MAX_SIZE, stdin);

  str[strcspn(str, "\n")] = '\0';

  printf("Original string: %s\n", str);

  reverse_string(str);

  printf("Reversed string: %s\n", str);

  return 0;
}

int isEmpty(int top) {
  return top == -1;
}

char pop(int *top) {
  if (isEmpty(*top)) {
    printf("Stack Underflow\n");
    exit(1);
  }
  return (*top--);
}

void push(char item, int *top) {
  if (*top == MAX_SIZE - 1) {
    printf("Stack Overflow\n");
    exit(1);
  }
  (*top)++;
  (*top)[0] = item;
}

void reverse_string(char *str) {
  int top = -1;
  int len = strlen(str);

  for (int i = 0; i < len; i++) {
    push(str[i], &top);
  }

  for (int i = 0; i < len; i++) {
    str[i] = pop(&top);
  }
}
