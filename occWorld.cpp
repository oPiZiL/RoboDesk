#include "occWorld.h"

OCCworld::OCCworld()
{

}


void OCCworld::loadRobot(void)
{
    IGESControl_Reader myIgesReader;
    Handle(AIS_Shape) anAisBox;
    Handle(TColStd_HSequenceOfTransient) myList;

    //*****************************************************************************
    myIgesReader.ReadFile ("C:/OCC_Qt/RoboDesk/IRB120/Base.IGS");

    for (int i=0;i<7;i++)
    {
    myIgesReader.TransferRoots();
    sh = myIgesReader.OneShape();
    gp_Trsf trsf;
    trsf.SetTransformation(gp_Quaternion(gp_Vec(1,0,0), 3.1415/2), gp_Vec(0,0,0));
    Base_init_location=new TopLoc_Location(trsf);
    Base_shape.Located(*Base_init_location);
    Base_AIS = new AIS_Shape(Base_shape);
    myOccView->getContext()->Display(Base_AIS);
    }

    }
}
