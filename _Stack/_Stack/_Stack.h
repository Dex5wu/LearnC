#pragma once

typedef int SDateType;

typedef struct Stack {
	SDateType* _array;
	int _capacity;
	int _size;
}Stack;

void StackInit(Stack* ps);
void StackPush(Stack* ps, SDateType data);
void StackPop(Stack* ps);
SDateType StackTop(Stack* ps);
int StackSize(Stack* ps);
int StackEmpty(Stack* ps);
void StackDestroy(Stack* ps);
void TestStack();