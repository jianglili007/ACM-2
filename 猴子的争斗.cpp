#include <iostream>
using namespace std;

int main()
{
    int n;
    while (scanf("%d",&n)!=EOF) {
        if (n==1) {
            cout << "0\n";
            continue;
        }
        int i,s1=1,s2=1,sum;
        for (i=2; i<n; i++) {
            s1=((s1%10007)*i)%10007;
            s2=((s2%10007)*n)%10007;
        }
        sum=(s1*s2)%10007;
        cout << sum << '\n';
    }
    return 0;
}
/*
 Problem description
 
 从前，在一个森林里有N只好斗的猴子。开始它们互不认识，互不认识的猴子间是无法避免争斗的，而且争斗只会发生在两只互不认识的猴子之间。决斗结束后，这两只猴子和它们之间的朋友们通过这次决斗相互都认识了，争斗便不会在这一大群猴子中的任意两只发生。由于决斗比较激烈，所以同一时间不会有两场决斗同时发生。经过N-1次决斗后，这N只猴子间相互都认识了，问有多少种可能的决斗过程。例如N=3，有6中不同的过程：1*2-1*3；1*2-2*3；1*3-1*2；1*3-3*2；2*3-2*1；2*3-3*1。
 
 Input
 
 输入一个整数N表示N只猴子。 
 
 Output
 
 输出一个整数，为可能的过程总数除以10007的余数。
 
 Sample Input
 4
 Sample Output
 96
*/