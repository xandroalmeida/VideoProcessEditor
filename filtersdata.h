#ifndef FILTERSDATA_H
#define FILTERSDATA_H

#include <QStringList>

typedef struct {
    const char *name;
    const char *type;
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

private:
};

#endif // FILTERSDATA_H
