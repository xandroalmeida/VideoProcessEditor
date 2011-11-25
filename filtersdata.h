#ifndef FILTERSDATA_H
#define FILTERSDATA_H
#include <QXmlStreamReader>

class FiltersData
{
public:
    FiltersData();
private:
    void readAllFiltersFromXml(QXmlStreamReader* xml);
};

#endif // FILTERSDATA_H
