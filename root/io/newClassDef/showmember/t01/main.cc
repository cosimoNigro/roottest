#include "TFile.h"
#include "TClonesArray.h"
#include "RootCaloHit.h"
#include "RootData.h"

#ifdef SHARED
int maintest()
#else
int main()
#endif
{
   gDebug = 0;
	TFile f("mytest.root","RECREATE");
	RootData rsrd((char *)"RootCaloHit", (unsigned)10);
	new(rsrd.data[0]) RootCaloHit(1.1,1.2,2,"test01",3);
        RootCaloHit * ph = ((RootCaloHit*)rsrd.data[0]);

        std::cerr << "Writing Hit" << std::endl;
        ph->Write("myhit");
        ph->myPrint();
        //std::cerr << "Automatic Print" << std::endl;
        //ph->Dump();
        std::cerr << std::endl;

        std::cerr << "Reading Hit" << std::endl;
        ph = (RootCaloHit*)f.Get("myhit");
        ph->myPrint();
        std::cerr << std::endl;

#if 1
        std::cerr << "Writing Data" << std::endl;
	rsrd.Write("mydata");
        ((RootCaloHit*)rsrd.data[0])->myPrint();
        std::cerr << std::endl;

        std::cerr << "Reading Data" << std::endl;
        RootData *p = (RootData*)f.Get("mydata");
        ((RootCaloHit*)p->data[0])->myPrint();
        std::cerr << std::endl;
#endif
	f.Close();
        return 0;
}

ClassImp(RootCaloHit)
ClassImp(RootData)
ClassImp(RootPCellID)
