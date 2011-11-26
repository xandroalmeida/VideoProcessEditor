#ifndef FILTERSDATA_H
#define FILTERSDATA_H

#include <QStringList>

typedef enum {
    IntegerType, DoubleType
} ParamType;

typedef struct {
    const char *name;
    const ParamType type;
    const double minValue;
    const double maxValue;
} FilterParam;

typedef struct {
    const char* name;
    const int nParams;
    FilterParam params[10];
} Filter;

class FiltersData
{
public:
    FiltersData();
    static QStringList filtersName();
    static const Filter* getFilter(const char* filterName);

private:
};

#endif // FILTERSDATA_H
