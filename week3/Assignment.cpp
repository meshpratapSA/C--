// 6 number
// #include <iostream>
// using namespace std;

// char toLowerCase(char ch)
// {
//     if (ch >= 'A' && ch <= 'Z')
//         return ch + 32;
//     else
//         return ch;
// }

// int main()
// {
//     cout << toLowerCase('G');
//     return 0;
// }

// 7 number
// #include <iostream>
// using namespace std;

// double m(int i)
// {
//     double sum = 0;

//     for (int k = 1; k <= i; k++)
//     {
//         sum += (double)k / (k + 1);
//     }

//     return sum;
// }

// int main()
// {
//     cout << "m(5) = " << m(5);
//     return 0;
// }

// 8 number
// #include <iostream>
// #include <cmath>
// using namespace std;

// double futureInvestmentValue(double investmentAmount,
//                              double annualInterestRate,
//                              int years)
// {
//     double monthlyInterestRate = annualInterestRate / 1200;

//     return investmentAmount *
//            pow(1 + monthlyInterestRate, years * 12);
// }

// int main()
// {
//     double investment = 10000;
//     double rate = 5;
//     int years = 10;

//     cout << "Future Investment Value = "
//          << futureInvestmentValue(investment, rate, years);

//     return 0;
// }
