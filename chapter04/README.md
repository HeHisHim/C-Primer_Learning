## page 145
## const_cast和static_cast
```cpp
const char* cp;
char* q = static_cast<char*>(cp); //error: cp是const属性, static_cast不能转换掉const性质
static_cast<string>(cp); //correct: 字面值字符串转换成string类型
const_cast<string>(cp); // error: const_cast只改变常量属性, 不能改变原表达式类型
```