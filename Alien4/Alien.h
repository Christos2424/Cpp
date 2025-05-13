#ifndef ALIEN_H
#define ALIEN_H
class Alien
{
    protected:
        char name[80];
        double eyes;
    public:
        Alien();
        Alien(char na[80],double ey);
        ~Alien();
        void setname(char na[80]);
        char * getname();
        void seteyes(double ey);
        double geteyes();
};
#endif
