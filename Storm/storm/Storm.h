#ifndef STORM_H
#define STORM_H

class Storm
{
protected:
    double protos;
    double defteros;
public:
    Storm();
    Storm(double pr,double df);
    ~Storm();
    void setProtos(double pr);
    double getProtos();
    void setDefteros(double df);
    double getDefteros();
    Storm operator+(Storm storm);
    Storm operator-(Storm storm);
    Storm operator*(Storm storm);
    Storm operator/(Storm storm);
};
#endif
