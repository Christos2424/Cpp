#ifndef RAIN
#define RAIN

class Rain
{
protected:
    double protos;
    double defteros;
public:
    Rain();
    Rain(double pr,double df);
    ~Rain();
    void setProtos(double pr);
    double getProtos();
    void setDefteros(double df);
    double getDefteros();
};
#endif
