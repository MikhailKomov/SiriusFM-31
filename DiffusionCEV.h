#pragma once 
#include<stdexcept>
#include<iostream>
#include<cmath>
using namespace std;


namespace SiriusFM
{
class DiffusionCEV
{
    private:
            double const m_mu;
            double const m_sigma;
            double const m_betta;

    public:


         DiffusionCEV(double mu,double sigma,double betta): m_mu(mu),m_sigma(sigma),m_betta(betta)
         {if(sigma <= 0 || betta < 0 || betta >1)
         {throw invalid_argument("Incorrect values");};
         };


        double mu(double st, double t){return (st*(this->m_mu) >= 0)?st*(this->m_mu):0;};
        double sigma(double st, double t){double sig = this->m_sigma*pow(st,this -> m_betta);
                                          return sig>0? sig:0;};


};
};