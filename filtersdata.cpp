#include "filtersdata.h"

#include <QDebug>
#include <QFile>
static Filter filters[] = {
    {
        name : "bilateralFilter",
        nParams: 3,
        params: {
            {
                name: "d",
                type: "int",
                minValue: -999.0,
                maxValue: 999.0
            },
            {
                name: "sigmaColor",
                type: "int",
                minValue: -999.0,
                maxValue: 999.0
            },
            {
                name: "sigmaSpace",
                type: "int",
                minValue: -999.0,
                maxValue: 999.0
            }
        }
    },
    {
        name : "blur",
        nParams: 1,
        params: {
            {
                name: "kSize",
                type: "int",
                minValue: 0.0,
                maxValue: 999.0
            }
        }
    },
    {
        name : "boxFilter",
        nParams: 1,
        params: {
            {
                name: "kSize",
                type: "int",
                minValue: 0.0,
                maxValue: 999.0
            }
        }
    },
    {
        name : "buildPyramid",
        nParams: 1,
        params: {
            {
                name: "maxlevel",
                type: "int",
                minValue: 0.0,
                maxValue: 999.0
            }
        }
    },
    {
        name : "copyMakeBorder",
        nParams: 4,
        params: {
            {
                name: "top",
                type: "int",
                minValue: 0.0,
                maxValue: 999.0
            },
            {
                name: "bottom",
                type: "int",
                minValue: 0.0,
                maxValue: 999.0
            },
            {
                name: "left",
                type: "int",
                minValue: 0.0,
                maxValue: 999.0
            },
            {
                name: "right",
                type: "int",
                minValue: 0.0,
                maxValue: 999.0
            }
        }
    },
    {
        name : "dilate",
        nParams: 0,
    },
    {name : "", nParams: 0}
};

FiltersData::FiltersData()
{
}

QStringList FiltersData::filtersName()
{
    QStringList list;
    int idx = 0;

    while (QString(filters[idx].name) != "") {
        list << filters[idx].name;
        idx++;
    }

    return list;
}

