#include "filtersdata.h"

#include <QDebug>
#include <QFile>
static Filter filters[] = {
    {
        name : "blur",
        nParams: 1,
        params: {
            {
                name: "kSize",
                type: "int",
                minValue: 0.0,
                maxValue: 0.0
            }
        }
    },
    {
        name : "blur",
        nParams: 2,
        params: {
            {
                name: "kSize",
                type: "int",
                minValue: 0.0,
                maxValue: 0.0
            },
            {
                name: "kSize",
                type: "int",
                minValue: 0.0,
                maxValue: 0.0
            }
        }
    }
};

FiltersData::FiltersData()
{
}

