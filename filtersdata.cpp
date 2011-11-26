#include "filtersdata.h"

#include <QDebug>
#include <QFile>
static const Filter filters[] = {
    {
        name : "bilateralFilter",
        nParams: 3,
        params: {
            {
                name: "d",
                type: IntegerType,
                minValue: -999.0,
                maxValue: 999.0
            },
            {
                name: "sigmaColor",
                type: IntegerType,
                minValue: -999.0,
                maxValue: 999.0
            },
            {
                name: "sigmaSpace",
                type: IntegerType,
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
                type: IntegerType,
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
                type: IntegerType,
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
                type: IntegerType,
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
                type: IntegerType,
                minValue: 0.0,
                maxValue: 999.0
            },
            {
                name: "bottom",
                type: IntegerType,
                minValue: 0.0,
                maxValue: 999.0
            },
            {
                name: "left",
                type: IntegerType,
                minValue: 0.0,
                maxValue: 999.0
            },
            {
                name: "right",
                type: IntegerType,
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

const Filter* FiltersData::getFilter(const char* filterName)
{
    int idx = 0;
    while (QString(filters[idx].name) != "") {
        if (QString(filters[idx].name) == QString(filterName)) {
            return &filters[idx];
        }
        idx++;
    }

    return NULL;
}
