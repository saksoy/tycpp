#include <iostream>
using namespace std;

#define SIZE 100

class Stack {
  char stck[SIZE];
  int tos;
public:
  Stack();
  ~Stack();
  void push(char ch);
  char pop();
  void showstack();
};

Stack::Stack()
{
  cout << "init stack." << endl;
}

Stack::~Stack()
{
  cout << "destroy stack." << endl;
}

void Stack::push(char ch)
{
  if (tos == SIZE){
    cout << "stack is full." << endl;
    return;
  }
  stck[tos] = ch;
  tos++;
}

char Stack::pop()
{
  if (tos == 0) {
    cout << "stack is empty." << endl;
    return 0;
  }

  tos--;
  return stck[tos];
}

void Stack::showstack()
{
  for (int i = 0; i < tos; i++) {
    cout << i << ":" << stck[i] << endl;
  }
}

Stack loadstack(){
  Stack s;
  s.push('a');
  s.push('b');
  s.push('c');
  s.push('d');
  s.push('e');
  s.push('f');
  s.push('g');
  s.push('h');
  return s;
}

int main()
{
  Stack s = loadstack();
  s.showstack();
  return 0;
}
