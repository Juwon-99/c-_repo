#ifndef STAKTEMPLATE_H
#define STACKTEMPLATE_H
template <typename T>
class Stack {
private:
	int topIdx;
	T* stackPtr;
public:
	Stack(int size);
	~Stack();
	void push(const T& pushVal);
	T Pop();
	int getTopIdx();
};
template <typename T>
Stack<T>::Stack(int size) {
	stackPtr = new T[size];
	topIdx = -1;
}
template <typename T>
Stack<T>::~Stack() {
	delete[] stackPtr; stackPtr = NULL;
}
template <typename T>
void Stack<T>::push(const T& pushVal) {
	topIdx++;
	stackPtr[topIdx] = pushVal;
}
template <typename T>
T Stack<T>::Pop() {
	return stackPtr[topIdx--];
}
template <typename T>
int Stack<T>::getTopIdx() {
	return topIdx;
}
#endif
