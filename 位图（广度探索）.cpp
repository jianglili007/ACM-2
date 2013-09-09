#include <iostream>
#include <math.h>
using namespace::std;

int main()
{
    int i,j,x,y,k,flag=1,b[182][182]={0};
    char a[182][182];
    scanf("%d%d",&x,&y);
    for(i=0;i<x;i++)
        for(j=0;j<y;j++)
        {
            cin >> a[i][j];
            b[i][j]=a[i][j]-'0';
        }    
    k=sqrt(x*y);
    while(flag<=k)
    {
        
        for(i=0;i<x;i++)
        {
            for(j=0;j<y;j++)
            {
                if(b[i][j]==flag&&b[i+1][j]==0)
                    b[i+1][j]=flag+1;
                if(b[i][j]==flag&&b[i-1][j]==0)
                    b[i-1][j]=flag+1;
                if(b[i][j]==flag&&b[i][j+1]==0)
                    b[i][j+1]=flag+1;
                if(b[i][j]==flag&&b[i][j-1]==0)
                    b[i][j-1]=flag+1;
            }
        }
        flag++;
    }
    delete a;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            if(j>0)
                printf(" ");
            printf("%d",b[i][j]-1);
        }
        printf("\n");
    }
    return 0;
}
/*
 Problem description
 现在我们给出一个n×m的单色位图，且该为图中至少含有一个白色的像素。我们用(i, j)来代表第i行第j列的像素，并且定义两点p1=(i1, j1)和p2=(i2, j2)之间的距离为： d(p1, p2)=|i1 - i2| + |j1 - j2|
 请写一个程序：
 读入该位图；对于每个像素，计算出离该像素最近的白色像素与它的距离。
 
 Input
 第一行包括两个用空格分开的整数n和m，1<=n<=182，1<=m<=182。以下的n行每行包括一个长度为m的用0和1组成的字符串，在第i+1行的第j个字符如果为”1”，那么表示像素(i, j)为白的，否则为黑的。
 
 Output
 输出一个n×m的数表，其中的第i行的第j个数字为f(i, j)表示像素(i, j)到最近的白色像素的距离。
 
 Sample Input
 3 4
 0001
 0011
 0110
 Sample Output
 3 2 1 0
 2 1 0 0
 1 0 0 1
*/