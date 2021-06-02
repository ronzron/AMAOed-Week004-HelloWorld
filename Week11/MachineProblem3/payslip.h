#include <string>
#include <iostream>

using namespace std;
class payslip
{

private:
    string mName, mPayGrade;
    float mGross, mOTHours, mTaxRate, mSalary, mOTPay, mNetPay, mWithholdingTax;
    float mFixedValuesTotal, SSS = 500.00, Pagibig = 200.00, Philhealth = 100.00;

public:
    void setPayslip(string Name, float BasicPay, float OTHour)
    {
        mName = Name;
        mSalary = BasicPay;
        mOTHours = OTHour;
    }
    void DeterminePayGradeandTaxRate()
    {
        if (mSalary == 10000)
        {
            mPayGrade = 'A';
            mTaxRate = 0.10;
        }
        else if (mSalary == 15000)
        {
            mPayGrade = 'B';
            mTaxRate = 0.10;
        }
        else if (mSalary == 20000)
        {
            mPayGrade = 'A';
            mTaxRate = 0.15;
        }
        else if (mSalary == 25000)
        {
            mPayGrade = 'B';
            mTaxRate = 0.15;
        }
        else if (mSalary == 30000)
        {
            mPayGrade = 'A';
            mTaxRate = 0.20;
        }
        else if (mSalary == 35000)
        {
            mPayGrade = 'B';
            mTaxRate = 0.20;
        }
        else if (mSalary == 40000)
        {
            mPayGrade = 'A';
            mTaxRate = 0.25;
        }
        else if (mSalary == 45000)
        {
            mPayGrade = 'B';
            mTaxRate = 0.25;
        }
        else if (mSalary == 50000)
        {
            mPayGrade = 'A';
            mTaxRate = 0.30;
        }
        else if (mSalary == 55000)
        {
            mPayGrade = 'B';
            mTaxRate = 0.30;
        }
    }
    void ComputePay()
    {
        mGross = mSalary + mOTPay;
        mOTPay = mOTHours * (mSalary * 0.01);
        mNetPay = mGross - mWithholdingTax - mFixedValuesTotal;
        mWithholdingTax = mGross * mTaxRate;
        mFixedValuesTotal = SSS + Pagibig + Philhealth;
    }
    double getNetPay()
    {
        return mNetPay = mGross - mWithholdingTax - mFixedValuesTotal;
    }
    string getName()
    {
        return mName;
    }
    string getPayGrade()
    {
        return mPayGrade;
    }
    float getOTHours()
    {
        return mOTHours;
    }
    float getOTPay()
    {
        return mOTPay = mOTHours * (mSalary * 0.1);
    }
    float getGross()
    {
        return mGross = mSalary + mOTPay;
    }
    float getWithholdingTax()
    {
        return mWithholdingTax = mGross * mTaxRate;
    }
    float getBasicSalary()
    {
        return mSalary;
    }
};