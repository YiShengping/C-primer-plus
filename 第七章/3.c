//#include <stdio.h>
//
//int main(void)
//{
//    int n, odd = 0, even = 0;
//    int e_sum = 0, o_sum = 0;
//
//    printf("Please enter a integer (0 to quit): ");
//    while (scanf_s("%d", &n) == 1 && n)
//    {
//        (n % 2 ? (++odd, o_sum += n) : (++even, e_sum += n));
//        printf("You can enter again (0 to quit): ");
//    }
//    printf("Even number: %d\n", even);
//    if (even > 0)
//    {
//        printf("The average of even: %g\n", (float)e_sum / even);
//    }
//    printf("Odd number: %d\n", odd);
//    if (odd > 0)
//    {
//        printf("The average of odd: %g\n", (float)o_sum / odd);
//    }
//    printf("Done.\n");
//
//    return 0;
//}


//#include<stdio.h>
//int main() {
//	int figure=1,cout1=0,cout2=0,
//		sum1=0,avg1=0,sum2=0,avg2=0;
//	while (figure !=0)
//	{
//		scanf_s("%d", &figure);
//		if (figure%2==0)
//		{
//			cout1++;
//			sum1 += figure;
//		}
//		else
//		{
//			cout2++;
//			sum2 += figure;
//		}
//	}
//	avg1 = sum1 / cout1;
//	avg2 = sum2 / cout2;
//	printf("%d\n%d\n", cout1, cout2);
//	printf("avg1=%d\navg2=%d", avg1,avg2);
//
//}