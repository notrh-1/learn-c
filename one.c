#include <stdio.h>//stdio.h是C语言的标准输入输出库头文件，包含了输入输出函数的声明，如printf()和scanf()等。
//std standard标准
//i input输入
//o output输出
 

int main() {
	//printf("Hello, World!\n");
	//printf是一个标准库函数，用于向标准输出打印格式化的字符串。在这里，它打印了 "Hello, World!" 并换行。
	printf("%d\n",100);
	printf("%c\n", 'X');
	printf("%f\n",3.14);
	//%d用于打印整数，%c用于打印字符，%f用于打印浮点数。每个格式说明符后面跟着一个对应类型的值。
	//%c用于打印单个字符，%f用于打印浮点数。每个格式说明符后面跟着一个对应类型的值。
	//%f用于打印浮点数。每个格式说明符后面跟着一个对应类型的值。

	return 0;
}