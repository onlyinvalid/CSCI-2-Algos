/*
   Program name: Monthly loan payment calculator
   Programmer:  Alex Pulikkottil
   Date: 2-18-22
   Version: 1.4
   Description: about 3 to 5 lines explain what is this program all about.
*/

#include <iostream>
#include <string>
#include <cmath>

//mortage class
class Mort
{
private:
    double m_principle = 0, m_rate = 0;
    int m_term = 0;

public:

    double m_monthlyP = 0,m_totalP = 0;

    // default constructor
    Mort()
    {
        double m_principle, m_rate,
        m_monthlyP, m_totalP;
        int m_term;
    }

    //setters
    bool setPrinciple(double p)
    {
        if ( p > 0)
        {
            m_principle = p;
            return true;
        }

        return false;   
    }

    void setRate(double r)
    {
        m_rate = r;
    }

    void setTerm(int t)
    {
        m_term = t;
    }

    //modifier
    void calc()
    {
        int m = getTerm() * 12;
        double i = getRate() / 1200;
        m_monthlyP = (getPrinciple() * i) / (1.0 - pow(i +1, -1*m));
        m_totalP = m_monthlyP * m;
    }

    //getters
    double getPrinciple()
    {
        return m_principle;
    }

    double getRate()
    {
        return m_rate;
    }

    int getTerm()
    {
        return m_term;
    }

};

//print function for statement
void print(Mort q)
{
    q.calc();
    std::cout << "Monthly Payment: " << q.m_monthlyP << '\n';
    std::cout << "Total Paid at end of loan period: " << q.m_totalP << '\n';
}

//main driver
int main()
{
    Mort mor1{};
    mor1.setPrinciple(300000);
    mor1.setRate(6);
    mor1.setTerm(10);

    print(mor1);

    return 0;
}