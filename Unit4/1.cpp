错误类型：
error: no matching function for call to ‘max’

原因：
max比较的两个参数的类型不匹配，一个是string::size_type (无符号整数型)

一个是int型

解决方法：
把maxlen的类型改为string::size_type
