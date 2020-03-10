//4
/*
一样的输出，
这里涉及到分号的作用，
作用：就是一个完整语句的结束标志，方便程序编译，不至于产生与设计初衷相违背的逻辑。

这里的改变并不影响语意的表达。
一下情况就会引起的语言的
eg，
do{
程序段S
}while(表达式P);
如果while后面的分号不要了的话，就会导致连同把后面的语句误认为是同一个语句。

1
 while(a<50);
 a++;
2
 for(i=1;i<10;i++);
 b++;
这两个段程序，在while和for后面加的分号，导致就算条件满足，也不会执行循环体，与当初编写的语意相差甚远。
*/

#include<iostream>
#include<string>

int main(int argc, char const *argv[])
{
	{
		const std::string s = "a string";
		std::cout << s << std::endl;
	
	{
		const std::string s = "another string";
		std::cout << s << std::endl;};}
	return 0;
}
