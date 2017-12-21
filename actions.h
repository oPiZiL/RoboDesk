#ifndef ACTIONS_H
#define ACTIONS_H

#include "occView.h"

class Actions
{
public:
    Actions(OccView* _myOccView);
    OccView* myOccView;

public:
    //! make cylindrical helix.
    void makeCylindricalHelix(void);

    //! make conical helix.
    void makeConicalHelix(void);

    //! make toroidal helix.
    void makeToroidalHelix(void);

    //! make box test.
    void makeBox(void);

    //! make cone test.
    void makeCone(void);

    //! make sphere test.
    void makeSphere(void);

    //! make cylinder test.
    void makeCylinder(void);

    //! make torus test.
    void makeTorus(void);

    //! fillet test.
    void makeFillet(void);

    //! chamfer test.
    void makeChamfer(void);

    //! test extrude algorithm.
    void makeExtrude(void);

    //! test revol algorithm.
    void makeRevol(void);

    //! test loft algorithm.
    void makeLoft(void);

    //! test boolean operation cut.
    void testCut(void);

    //! test boolean operation fuse.
    void testFuse(void);

    //! test boolean operation common.
    void testCommon(void);

    //! test helix shapes.
    void testHelix(void);
};

#endif // ACTIONS_H
