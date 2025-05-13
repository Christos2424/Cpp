#include "rain.h"

Rain::Rain()
{
    setProtos(0.0);
    setDefteros(0.0);
}

Rain::Rain(double pr,double df)
{
    setProtos(pr);
    setDefteros(df);
}
Rain::~Rain()
{

}
void Rain::setProtos(double pr)
{
    protos = pr;
}
double Rain::getProtos()
{
    return protos;
}
void Rain::setDefteros(double df)
{
    defteros = df;
}
double Rain::getDefteros()
{
    return defteros;
}
