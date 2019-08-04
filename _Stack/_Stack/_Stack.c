#include"_Stack.h"
#include<stdio.h>
#include<assert.h>
#include<malloc.h>

void CheckCapacity(Stack* ps) {
	assert(ps);
	if (ps->_size == ps->_capacity) {
		int newCapacity = ps->_capacity * 2;
		SDateType* pTemp = malloc(sizeof(SDateType) * newCapacity);
		if (pTemp == NULL) {
			assert(0);
			return;
		}
		for (int i = 0; i < ps->_size; ++i) {
			pTemp[i] = ps->_array[i];
		}
		free(ps->_array);
		ps->_array = pTemp;
		ps->_capacity = newCapacity;
	}
}

void StackInit(Stack* ps) {
	assert(ps);
	ps->_array = (SDateType*)malloc(sizeof(SDateType) * 3);
	if (ps->_array == NULL) {
		assert(0);
		return;
	}
	ps->_capacity = 3;
	ps->_size = 0;
}

void StackPush(Stack* ps, SDateType data) {
	CheckCapacity(ps);
	ps->_array[ps->_size++] = data;
}

void StackPop(Stack* ps) {
	assert(ps);
	if (StackEmpty(ps)) {
		return;
	}
	ps->_size -= 1;
}

SDateType StackTop(Stack* ps) {
	assert(ps);
	return ps->_array[ps->_size - 1];
}

int StackSize(Stack* ps) {
	assert(ps);
	return ps->_size;
}

int StackEmpty(Stack* ps) {
	assert(ps);
	return ps->_size == 0;
}

void StackDestroy(Stack* ps) {
	assert(ps);
	if (ps->_array) {
		free(ps->_array);
		ps->_capacity = 0;
		ps->_size = 0;
	}
}

void TestStack() {
	Stack s;
	StackInit(&s);

	StackPush(&s, 1);
	StackPush(&s, 2);
	StackPush(&s, 3);
	printf("size=%d\n", StackSize(&s));
	printf("top=%d\n", StackTop(&s));

	StackPush(&s, 4);
	StackPush(&s, 5);
	printf("size=%d\n", StackSize(&s));
	printf("top=%d\n", StackTop(&s));

	StackPop(&s);
	StackPop(&s);

	printf("size=%d\n", StackSize(&s));
	printf("top=%d\n", StackTop(&s));

	StackDestroy(&s);
}