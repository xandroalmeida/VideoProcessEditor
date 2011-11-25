#ifndef FILTERSDATA_H
#define FILTERSDATA_H

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
private:

private:
};

#endif // FILTERSDATA_H
