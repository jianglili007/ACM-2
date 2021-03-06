#include <iostream>
using namespace std;
#define N 5010
int main()
{
    int i,l,h,r,flag=0,a[N];
    memset(a, 0, sizeof(a));
    while (cin >> l >> h >> r) {
        for (i=l; i<r; i++)
            if (a[i]<h)
                a[i]=h;
    }
    for (i=1; i<N; i++)
        if (a[i]!=a[i-1]) {
            if (i>0&&flag)
                cout << ' ';
            cout << i << ' ' << a[i];
            flag=1;
        }
    return 0;
}
/*
 Problem description
 
 
 你要设计一个程序去帮助一个建筑师绘制在城市里特定区域建筑的轮廓线。为了使问题易于处理，所有的建筑的外形都是矩形的，且它们共享同一个地面（这个城市建设在同一个非常平坦的地面上）。这城市看上去是两维的。每幢建筑有一个三元组（Li,Hi,Ri）其中Li和Ri分别是建筑的左坐标和右坐标，Hi就是建筑的高度。在下方所示的图表中左边用建筑物的三元组(1,11,5),(2,6,7),(3,13,9),(12,7,16),(14,3,25),(19,18,22),(23,13,29),(24,4,28)表示，右边用轮廓线的顺序（1,11,3,13,9,0,12,7,16,3,19,18,22,3,23,13,29,0）表示：
 
 Input
 输入是一系列表示建筑的三元组。在输入程序中所有建筑的坐标中的数值都是小于10000的正整数，且至少有1幢建筑，最多有5,000幢建筑。在输入程序中每幢建筑的三元组各占一行。三元组中的所有整数应由一个或多个空格分开。所有的三元组要按Li即建筑的左x坐标的大小排序，所以左x坐标最小的建筑就是在输入程序中第一个被输入的建筑。
 
 Output
 输出是由描绘图例中轮廓线的矢量组成。在轮廓线矢量（v1,v2,v3,…,vn-2,vn-1,vn）中，如果vi中i为奇数，则vi表示垂直线的位置x坐标；如果vi中i为偶数，则vi表示水平线的高度y坐标。轮廓线矢量的最后项应当是一个0。数与数之间必须用空格分隔。
 
 Sample Input
 1 11 5
 2 6 7
 3 13 9
 12 7 16
 14 3 25
 19 18 22
 23 13 29
 24 4 28
 Sample Output
 1 11 3 13 9 0 12 7 16 3 19 18 22 3 23 13 29 0
*/