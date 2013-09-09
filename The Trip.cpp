#include <iostream>
#include <stdio.h>
using namespace::std;

int main()
{
    long n;
    while(cin >> n&&n)
    {
        double a[1010],ave=0,ans1=0,ans2=0;
        char tmp[1010];
        for(long i=1;i<=n;i++)
        {
            cin >> a[i];
            ave+=a[i];
        }
        ave/=n;
        sprintf(tmp,"%.2lf",ave);
        sscanf(tmp,"%lf",&ave);
        for(long i=1;i<=n;i++)
            if(a[i]<ave)
                ans1+=(ave-a[i]);
            else 
                ans2+=(a[i]-ave);
        if(ans1<ans2) 
            printf("$%.2lf\n",ans1);
        else
            printf("$%.2lf\n",ans2);
    }
    return 0;
}
/*
 A group of students are members of a club that travels annually to different locations. Their destinations in the past have included Indianapolis, Phoenix, Nashville, Philadelphia, San Jose, and Atlanta. This spring they are planning a trip to Eindhoven.
 
 The group agrees in advance to share expenses equally, but it is not practical to share every expense as it occurs. Thus individuals in the group pay for particular things, such as meals, hotels, taxi rides, and plane tickets. After the trip, each student's expenses are tallied and money is exchanged so that the net cost to each is the same, to within one cent. In the past, this money exchange has been tedious and time consuming. Your job is to compute, from a list of expenses, the minimum amount of money that must change hands in order to equalize (within one cent) all the students' costs.
 
 Input
 
 Standard input will contain the information for several trips. Each trip consists of a line containing a positive integer n denoting the number of students on the trip. This is followed by n lines of input, each containing the amount spent by a student in dollars and cents. There are no more than 1000 students and no student spent more than $10,000.00. A single line containing 0 follows the information for the last trip.
 Output
 
 For each trip, output a line stating the total amount of money, in dollars and cents, that must be exchanged to equalize the students' costs.
 Sample Input
 
 3
 10.00
 20.00
 30.00
 4
 15.00
 15.01
 3.00
 3.01
 0
 Sample Output
 
 $10.00
 $11.99
*/