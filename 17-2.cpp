//Bài 1 vi?t ct trình nh?p vào 1 xâu và in xâu dó ra màn hình 
// nn c
/*#include <stdio.h>
#include <string.h>
int main ()
{
	char str [100];
	gets(str);
	puts(str);
	return 0;
}
//nn c++
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main (){
	string str;
	getline (cin,str);
	cout << str;
	return 0;
}
//Bài 2 vi?t ct trình nh?p vào nhieu xâu và moi xau tren 1 dong va co do dai toi da 100 ki tu va sau do in xâu dó ra màn hình 
// nn c
#include <stdio.h>
#include <string.h>
int main ()
{
	char str [100];
	while (gets(str))
	puts(str);
	return 0;
}
//nn c++
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main (){
	string str;
	while (getline (cin,str))
	cout << str<<endl;
	return 0;
}
*/
// bai 3 :Viet ham chuyen 1 xau ki tu tu bat ky sang chu hoa va in ra man hinh
//nnn c 
/*#include <stdio.h>
#include <string.h>
char *myStrupr(char *str) {
	for (int i=0;i<sizeof(str);i++) {
		if (str[i] >='a' && str[i]<='z') str[i] = str[i] - 32;
	}
	return str;
 }
int main ()
{
	char str [100];
	while (gets(str)){
	puts(myStrupr(str));}
	return 0;
}

#include <stdio.h>
#include <string.h>
char *myStrlwr(char *str) {
	for (int i=0;i<sizeof(str);i++) {
		if (str[i] >='A' && str[i]<='Z') str[i] = str[i] + 32;
	}
	return str;
 }
int main ()
{
	char str [100];
	while (gets(str)){
	puts(myStrLwr(str));}
	return 0;
}*/
// nn c++
/*
 #include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main (){
	string str;
	while (getline (cin,str)){
	transform(str.begin(),str.end(),str.begin(),::toupper);
	cout << str<<endl;}
	return 0;}
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main (){
	string str;
	while (getline (cin,str)){
	transform(str.begin(),str.end(),str.begin(),::tolower);
	cout << str<<endl;}
	return 0;}
*/
//bai 4 viet ham dem xem trong 1 xau cho truoc co bao nhieu ky tu nguyen am ('u','e','o','a','i','y')
//nn c
/*#include <stdio.h>
#include <string.h>
int count (char *str) {
	int s=0;
	for (int i=0;i<strlen(str);i++) {
		if ((str[i] =='A') || (str[i]=='E')|| (str[i] =='O') || (str[i] =='U') || (str[i] =='I')
		|| (str[i] =='Y') || (str[i] =='a') || (str[i] =='e' )|| (str[i] =='o' )|| (str[i] =='u')||(str[i] =='i' )|| (str[i] =='y' )) s++;
	}
	return s;
 }
int main ()
{
	char str [100];
	while (gets(str)){
	printf("%d\n",count(str));}
	return 0;
	}*/
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int count (string str) {
	
	char p[]={'u','e','o','a','i','y','U','E','O','A','I','Y'};
	int c =0;
	for (int i =0;i<str.length();i++) {
		for (auto &x:p)
		if (str[i] ==x ) c++;
	}
	return c;
}
int main (){
	string str;
	while (getline (cin,str)){
	cout << count(str)<<endl;}
	return 0;}
	
