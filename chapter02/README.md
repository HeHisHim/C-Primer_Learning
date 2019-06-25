## page 63
## decltype和引用
```cpp
int i = 42, *p = &i, &r = i;
decltype(r + 0) b; // b是int
decltype(*p) c; //error, c是int&, 必须初始化
```
### 因为r是一个引用, 因此decltype(r)的结果是引用类型. 如果想让结果类型是r所指的类型, 可以把r作为表达式的一部分, 如r + 0, 显然这个表达式的结果是一个具体值而非一个引用
### 另一方面, 如果表达式的内容是解引用操作, 则decltype将得到引用类型. 解引用指针可以得到指针所指的对象, 而且还能给这个对象赋值. 因此, decltype(*p)的结果类型是int&, 而非int