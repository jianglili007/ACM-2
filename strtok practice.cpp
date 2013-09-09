#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char *p;
    char a[255],b[255];
    gets(b);
    while(gets(a))
    {
        p=strtok(a,b);
        while(p!=NULL)
        {
            printf("%s",p);
			printf("\n");
            p=strtok(NULL,b);
        }
        printf("END\n");
    }
    return 0;
}
/*strtok(char *s1,const char *s2)
  检索字符串s1,该字符串s1是由字符串s2中定义的定界符所分隔*/
/*
 Problem description
 The strtok function is rather important when it comes to programming problems (particularly when programming in C). It can be used to quickly parse some sort of input string into tokens. (Might want to read the strtok man page right about now...) In this problem, you'll be given some practice using strtok. 
 
 Input
 The first line of input will be a string of deliminters. Everything on the line up to, but not including the newline character, is considered to be a deliminter (ie, don't ignore a space). The following lines are lines you need to parse using the strtok function. The deliminters used is the first line of input you read in. No input line will be more than 80 characters long. Furthermore, you are guarenteed to have at least one line to parse. 
 
 Output
 For each input line to be parsed, your program is to print out the tokens generated by calling strtok. Each token should be on its own line. When finished parsing the line, your program should print END. 
 
 Sample Input
 ; :
 the first; line of input to be parsed
 blah!@#$% blah%^@# blah;:*()905
 strok        kicks    a*#!!!
 Sample Output
 the
 first
 line
 of
 input
 to
 be
 parsed
 END
 blah!@#$%
 blah%^@#
 blah
 *()905
 END
 strtok
 kicks
 a*#!!!
 END
*/