#include "actions.h"

#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Pln.hxx>

#include <gp_Lin2d.hxx>

#include <Geom_ConicalSurface.hxx>
#include <Geom_ToroidalSurface.hxx>
#include <Geom_CylindricalSurface.hxx>

#include <GCE2d_MakeSegment.hxx>

#include <TopoDS.hxx>
#include <TopExp.hxx>
#include <TopExp_Explorer.hxx>
#include <TColgp_Array1OfPnt2d.hxx>

#include <BRepLib.hxx>

#include <BRepBuilderAPI_MakeVertex.hxx>
#include <BRepBuilderAPI_MakeEdge.hxx>
#include <BRepBuilderAPI_MakeWire.hxx>
#include <BRepBuilderAPI_MakeFace.hxx>
#include <BRepBuilderAPI_Transform.hxx>
#include <BRepBuilderAPI_MakePolygon.hxx>

#include <BRepPrimAPI_MakeBox.hxx>
#include <BRepPrimAPI_MakeCone.hxx>
#include <BRepPrimAPI_MakeSphere.hxx>
#include <BRepPrimAPI_MakeCylinder.hxx>
#include <BRepPrimAPI_MakeTorus.hxx>
#include <BRepPrimAPI_MakePrism.hxx>
#include <BRepPrimAPI_MakeRevol.hxx>

#include <BRepFilletAPI_MakeFillet.hxx>
#include <BRepFilletAPI_MakeChamfer.hxx>

#include <BRepOffsetAPI_MakePipe.hxx>
#include <BRepOffsetAPI_ThruSections.hxx>

#include <BRepAlgoAPI_Cut.hxx>
#include <BRepAlgoAPI_Fuse.hxx>
#include <BRepAlgoAPI_Common.hxx>

#include <AIS_Shape.hxx>

#include <gp_Trsf.hxx>
#include <gp_Quaternion.hxx>
#include <IGESControl_Reader.hxx>
#include <QTreeWidget>
#include <TopoDS_Shape.hxx>


Actions::Actions(OccView* _myOccView)
{
myOccView=_myOccView;
}


/*
void Actions::makeBox()
{
    myOccView->getContext()->EraseAll();
    TopoDS_Shape aTopoBox = BRepPrimAPI_MakeBox(3.0, 4.0, 5.0).Shape();
    Handle(AIS_Shape) anAisBox = new AIS_Shape(aTopoBox);

    anAisBox->SetColor(Quantity_NOC_AZURE);

    myOccView->getContext()->Display(anAisBox);

    gp_Trsf trsf;

    double angle=0;
    int n_rotations=100;

    for(int i=0;i<n_rotations;i++)
    {
        trsf.SetRotation(gp_Ax1(gp_Pnt(0, 0, 0), gp_Dir(0, 0, 1)), angle);
        TopLoc_Location toploc_location(trsf);
        myOccView->getContext()->SetLocation(anAisBox,toploc_location);
        myOccView->getContext()->UpdateCurrentViewer();
        angle += 2*3.1415 / n_rotations;
    }
}
*/

void Actions::loadRobot()
{


}


void Actions::drawOrigin()
{
    TopoDS_Edge XEdge = BRepBuilderAPI_MakeEdge(gp_Pnt(0.0, 0.0, 0.0), gp_Pnt(1000, 0.0, 0.0));
    Handle(AIS_Shape) XEdge_handle = new AIS_Shape(XEdge);
    XEdge_handle->SetColor(Quantity_NOC_RED);

    TopoDS_Edge YEdge = BRepBuilderAPI_MakeEdge(gp_Pnt(0.0, 0.0, 0.0), gp_Pnt(0.0, 1000, 0.0));
    Handle(AIS_Shape) YEdge_handle = new AIS_Shape(YEdge);
    YEdge_handle->SetColor(Quantity_NOC_GREEN);

    TopoDS_Edge ZEdge = BRepBuilderAPI_MakeEdge(gp_Pnt(0.0, 0.0, 0.0), gp_Pnt(0.0, 0.0, 1000));
    Handle(AIS_Shape) ZEdge_handle = new AIS_Shape(ZEdge);
    ZEdge_handle->SetColor(Quantity_NOC_BLUE1);

    myOccView->getContext()->Display(XEdge_handle);
    myOccView->getContext()->Display(YEdge_handle);
    myOccView->getContext()->Display(ZEdge_handle);
}

