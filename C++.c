string s1;  //空字符串
string s2(s1); 
string s3("value");
string(n,'c');  //n个c字符的连接

s.empty()
s.size()  //不能保存为int，应保存为string::size_type
s[n]
s1 + s2
s1 = s2
s1 == s2

cin >> s; //读取忽略开头所有的空白字符 再次遇到空白字符则读取停止

getline(cin,line);//读取不忽略开头换行符 遇换行符停止且不保存换行符

string s3 = s1 + ",";       		//correct
string s4 = "hello" + ",";			//wrong
string s5 = s1 + ", " + "wrold"; 	//correct
string s6 = "hello" + ", " + s2; 	//wrong

#include<cctype>
isalnum(c) //数字或字母 
isalpha(c) //字母 
iscntrl(c) //控制字符 
isdigit(c) //数字 
isgraph(c) //不是空格的可打印字符 
islower(c) //小写字母 
isupper(c) //大写字母 
ifprint(c) //可打印字符 
ispunct(c) //标点符号 
isspace(c) //空白字符 
isxdigit(c) //十六进制数 
tolower(c) //返回小写字母形式 
toupper(c) //返回大写字母形式

#include<vector>
//vector保存类型为sth的对象，
vector<sth> v1;			//默认构造函数，v1为空 
vector<sth> v2(v1); 
vector<sth> v3(n,i);	//包含n个值为i的元素  
vector<sth> v4(n);		

v.empty()
v.size()  //不能保存为int，应保存为vector<sth>::size_type
v.push_back(t) //在v的末尾增加一个值为t的元素  //只能用这个添加元素 
v[n]	//一般用迭代器 不用这个 
v1 + v2
v1 = v2
v1 == v2

//迭代器 
vector<int>::iterator iter;
vector<int>::iterator iter = ivec.begin()// 第一个元素
vector<int>::iterator iter = ivec.end()  // 超出最后一个元素的下一个元素 
*iter //访问迭代器所指向的元素
++iter 

#include<bitset>
//bitset保存长度为len的二进制构造函数
bieset<len> b;
bieset<len> b(u);
bieset<len> b(s);
bieset<len> b(s, pos, n); 
