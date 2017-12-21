#ifndef ACTIONS_H
#define ACTIONS_H

#include "occView.h"

class Actions
{
public:
    Actions(OccView* _myOccView);
    OccView* myOccView;

public:
    //! make box test.
    void loadRobot(void);

    //! make cone test.
    void drawOrigin(void);
};

#endif // ACTIONS_H
