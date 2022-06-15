/*
   Program name: 
   Programmer:  Alex Pulikkottil
   Date: 
   Version: 
   Description: about 3 to 5 lines explain what is this program all about.
*/

#include <iostream>
#include <string>

// employee class
class Employee
{
    private:
        std:: string m_employeeName = "";
        std:: string m_employeeNumber = "";
        std:: string m_employeeHireDate = "";

    public:
        // constructor
        Employee()
        {
            std:: string m_employeeName;
            std:: string m_employeeNumber;
            std:: string m_employeeHireDate;
        }
    
    // setters
    void setEmployeeName(std:: string eN)
    {
        m_employeeName = eN;
    }

    void setEmployeeNumber(std:: string eNu)
    {
        m_employeeNumber = eNu;
    }

    void setEmployeeHireDate(std:: string eHd)
    {
        m_employeeHireDate = eHd;
    }


    // getters
    std:: string getEmployeeName()
    {
        return m_employeeName; 
    }

     std:: string getEmployeeNumber()
    {
        return m_employeeNumber;
    }

    std:: string getEmployeeHireDate()
    {
        return m_employeeHireDate;
    }
};

class ProductionWorker : public Employee
{
    private:

        int m_shift = 0;
        double m_hourlyPayRate = 0;
    
    public:

        // constructor
        ProductionWorker()
        {
            int m_shift;
            double m_hourlyPayRate;
        }

        //setters
        void setShiftNumber(int s)
        {
            m_shift = s;
        }
        
        void setHourlyPayRate(double p)
        {
            m_hourlyPayRate = p;
        }

        void shiftType()
        {
            if (getShiftNumber() == 1)
            {
                std:: cout << "Day Shift\n";
            }
            else
            std:: cout << "Night Shift\n";
        }

        // getters

        int getShiftNumber()
        {
            return m_shift;
        }

        double getHourlyPayRate()
        {
            return m_hourlyPayRate;
        }

        

};

void print(ProductionWorker p)
{
    std:: cout << "Name: " << p.getEmployeeName() << '\n'
               << "Number: " << p.getEmployeeNumber() << '\n'
               << "Hire Date: " << p.getEmployeeHireDate() << '\n';
    std:: cout << "Shift Type: "; p.shiftType();
    std:: cout << "Hourly pay: $" << p.getHourlyPayRate() << '\n';
}

int main()
{
    ProductionWorker sam{};

    sam.setEmployeeName("Sam");
    sam.setEmployeeNumber("14");
    sam.setEmployeeHireDate("12/12/12");
    sam.setShiftNumber(1);
    sam.setHourlyPayRate(12.5);

    print(sam);

    return 0;
}