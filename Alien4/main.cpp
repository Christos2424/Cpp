#include "Alien.h"
#include <iostream>
using namespace std;
Alien *Mike,*Chris;

int main()
{
   Mike = new Alien("Mike Kaza",7);
    Chris = new Alien("Chris Ant",4);

   cout<<Mike->getname()<<"\t"<<Mike->geteyes()<<"\n";
cout<<Chris->getname()<<"\t"<<Chris->geteyes()<<"\n";

   delete Mike;
 delete Chris;

    return 0;

}
