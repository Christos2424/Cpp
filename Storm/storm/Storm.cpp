#include "Storm.h"

Storm::Storm()
{
    setProtos(0.0);
    setDefteros(0.0);
}

Storm::Storm(double pr,double df)
{
    setProtos(pr);
    setDefteros(df);
}

Storm::~Storm()
{

}
void Storm::setProtos(double pr)
{
    protos = pr;
}
double Storm::getProtos()
{
    return protos;
}
void Storm::setDefteros(double df)
{
    defteros = df;
}
double Storm::getDefteros()
{
    return defteros;
}
Storm Storm::operator+(Storm storm)
{
    Storm tmp;
    tmp.setProtos(protos + storm.getProtos());
    tmp.setDefteros(defteros + storm.getDefteros());
    return tmp;
}
Storm Storm::operator-(Storm storm)
{
    Storm tmp;
    tmp.setProtos(protos - storm.getProtos());
    tmp.setDefteros(defteros - storm.getDefteros());
    return tmp;
}
Storm Storm::operator*(Storm storm)
{
    Storm tmp;
    tmp.setProtos(protos * storm.getProtos());
    tmp.setDefteros(defteros * storm.getDefteros());
    return tmp;
}
Storm Storm::operator/(Storm storm)
{
    Storm tmp;
    tmp.setProtos(protos / storm.getProtos());
    tmp.setDefteros(defteros / storm.getDefteros());
    return tmp;
}

