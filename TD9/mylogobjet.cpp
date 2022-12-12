#include "mylogobjet.h"

void MyLogObjet::addEvt(const TIME::Date &d, const TIME::Horaire &h,
                        const std::string &s)
{
   TIME::Evt1jDur e_t = TIME::Evt1jDur(d,s,h,TIME::Duree(0));
   TIME::Evt &e = e_t;
 
   evts<<e;
}
void MyLogObjet::displayLog(std::ostream& f) const
{
  for(TIME::Agenda::const_iterator it=evts.begin(); it!=evts.end(); ++it)
    f<<dynamic_cast<const TIME::Evt1jDur&>(*it).getDate()
     <<" - "
     <<dynamic_cast<const TIME::Evt1jDur&>(*it).getHoraire()
     <<":"<<(*it).getDescription()<<"\n";
}
