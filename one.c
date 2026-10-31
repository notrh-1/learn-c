#include <stdio.h>//stdio.h是C语言的标准输入输出库头文件，包含了输入输出函数的声明，如printf()和scanf()等。
//std standard标准
//i input输入
//o output输出
 

int main() {
	//printf("Hello, World!\n");
	//printf是一个标准库函数，用于向标准输出打印格式化的字符串。在这里，它打印了 "Hello, World!" 并换行。
	//关键字 int if return 
	//32个关键字
	//auto break case char const continue default do double else 
	//enum extern float for goto if int long register return short signed 
	//sizeof static struct switch typedef union unsigned void volatile while
	//关键字是C语言中具有特殊意义的保留字，不能用作变量名或函数名。它们用于定义数据类型、控制程序流程等。
	//auto是用于定义自动变量的关键字，表示变量的生命周期仅限于其所在的块。
	// break用于跳出循环或switch语句。case用于在switch语句中定义不同的分支。
	// char用于定义字符类型的变量。const用于定义常量，表示变量的值不能被修改。
	// continue用于跳过当前循环的剩余部分，直接进入下一次循环。
	// default用于在switch语句中定义默认分支。
	// do用于定义do-while循环。double用于定义双精度浮点数类型的变量。
	// double用于定义双精度浮点数类型的变量。
	// else用于在if语句中定义条件不满足时的分支。
	// enum用于定义枚举类型。extern用于声明外部变量或函数。
	// float用于定义单精度浮点数类型的变量。for用于定义for循环。
	// goto用于无条件跳转到程序中的指定位置。if用于定义条件语句。
	// int用于定义整数类型的变量。long用于定义长整型变量。
	// register用于定义寄存器变量，提示编译器将变量存储在CPU寄存器中以提高访问速度。
	// return用于从函数返回值。short用于定义短整型变量。
	// signed用于定义有符号类型的变量。sizeof用于获取数据类型或变量所占的字节数。
	// static用于定义静态变量，表示变量的生命周期贯穿整个程序运行期间。
	// struct用于定义结构体类型。switch用于定义多分支选择语句。
	// typedef用于为数据类型定义新的别名。union用于定义联合体类型。
	// unsigned用于定义无符号类型的变量。void用于定义无返回值的函数。
	// volatile用于定义易变类型的变量，表示变量可能在程序的其他部分被修改。

	printf("%d\n",100);
	printf("%c\n", 'X');
	printf("%f\n",3.14);
	//%d用于打印整数，%c用于打印字符，%f用于打印浮点数。每个格式说明符后面跟着一个对应类型的值。
	//%c用于打印单个字符，%f用于打印浮点数。每个格式说明符后面跟着一个对应类型的值。
	//%f用于打印浮点数。每个格式说明符后面跟着一个对应类型的值。

	return 0;
}