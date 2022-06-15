/*
   Program name:  e.g. Rectangle.cpp
   Programmer:  your name
   Date: 2-18-22
   Version: 1.4
   Description: about 3 to 5 lines explain what is this program all about.
*/

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Mort
{
private:
    double principle, rate;
    int term;

public:

    double monthlyP,totalP;

    // default constructor
    Mort()
    {
        double principle = 0, rate = 0,
        monthlyP = 0, totalP = 0;
        int term = 0;
    }

    //setters
    bool setPrinciple(double p)
    {
        if ( p > 0)
        {
            principle = p;
            return true;
        }

        return false;   
    }

    void setRate(double r)
    {
        rate = r;
    }

    void setTerm(int t)
    {
        term = t;
    }

    void calc()
    {
        int m = getTerm() * 12;
        double i = getRate() / 1200;
        double monthlyP = (getPrinciple() * i) / (1.0 - pow(i +1, -1*m));
        double totalP = monthlyP * m;
    }


    //getters
    double getPrinciple()
    {
        return principle;
    }

    double getRate()
    {
        return rate;
    }

    int getTerm()
    {
        return term;
    }

};

void print(Mort M)
{
    M.calc();
    cout << "Monthly Payment: " << M.monthlyP << '\n';
    cout << "Total Paid at end of loan period: " << M.totalP << '\n';
}

int main()
{
    Mort mor1;
    mor1.setPrinciple(12000);
    mor1.setRate(6.5);
    mor1.setTerm(30);

    print(mor1);

}