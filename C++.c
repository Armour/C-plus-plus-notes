string s1;  //���ַ���
string s2(s1); 
string s3("value");
string(n,'c');  //n��c�ַ�������

s.empty()
s.size()  //���ܱ���Ϊint��Ӧ����Ϊstring::size_type
s[n]
s1 + s2
s1 = s2
s1 == s2

cin >> s; //��ȡ���Կ�ͷ���еĿհ��ַ� �ٴ������հ��ַ����ȡֹͣ

getline(cin,line);//��ȡ�����Կ�ͷ���з� �����з�ֹͣ�Ҳ����滻�з�

string s3 = s1 + ",";       		//correct
string s4 = "hello" + ",";			//wrong
string s5 = s1 + ", " + "wrold"; 	//correct
string s6 = "hello" + ", " + s2; 	//wrong

#include<cctype>
isalnum(c) //���ֻ���ĸ 
isalpha(c) //��ĸ 
iscntrl(c) //�����ַ� 
isdigit(c) //���� 
isgraph(c) //���ǿո�Ŀɴ�ӡ�ַ� 
islower(c) //Сд��ĸ 
isupper(c) //��д��ĸ 
ifprint(c) //�ɴ�ӡ�ַ� 
ispunct(c) //������ 
isspace(c) //�հ��ַ� 
isxdigit(c) //ʮ�������� 
tolower(c) //����Сд��ĸ��ʽ 
toupper(c) //���ش�д��ĸ��ʽ

#include<vector>
//vector��������Ϊsth�Ķ���
vector<sth> v1;			//Ĭ�Ϲ��캯����v1Ϊ�� 
vector<sth> v2(v1); 
vector<sth> v3(n,i);	//����n��ֵΪi��Ԫ��  
vector<sth> v4(n);		

v.empty()
v.size()  //���ܱ���Ϊint��Ӧ����Ϊvector<sth>::size_type
v.push_back(t) //��v��ĩβ����һ��ֵΪt��Ԫ��  //ֻ����������Ԫ�� 
v[n]	//һ���õ����� ������� 
v1 + v2
v1 = v2
v1 == v2

//������ 
vector<int>::iterator iter;
vector<int>::iterator iter = ivec.begin()// ��һ��Ԫ��
vector<int>::iterator iter = ivec.end()  // �������һ��Ԫ�ص���һ��Ԫ�� 
*iter //���ʵ�������ָ���Ԫ��
++iter 

#include<bitset>
//bitset���泤��Ϊlen�Ķ����ƹ��캯��
bieset<len> b;
bieset<len> b(u);
bieset<len> b(s);
bieset<len> b(s, pos, n); 
