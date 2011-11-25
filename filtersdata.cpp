#include "filtersdata.h"

#include <QDebug>
#include <QFile>

FiltersData::FiltersData()
{
    QFile* file = new QFile(":/data/filters.xml");
    file->open(QIODevice::ReadOnly | QIODevice::Text);

    QXmlStreamReader* xml = new QXmlStreamReader(file);
    if (xml->readNextStartElement()) {
        readAllFiltersFromXml(xml);
    } else {
        qDebug() << "FiltersData: Nao foi possivel ler start tag em :/data/filters.xml";
    }

    file->close();
    delete file;
    delete xml;
}

void FiltersData::readAllFiltersFromXml(QXmlStreamReader* xml)
{
    while (xml->readNextStartElement()) {
        if (xml->name() != "filter") {
            qDebug() << "Encontrado tag errado em filters: " << xml->name();
            break;
        }

        readFilterFromXml(xml);
    }
}

void FiltersData::readFilterFromXml(QXmlStreamReader* xml)
{
    QString name = xml->attributes().value("name");
    QString function = xml->attributes().value("function");

    if (!xml->readNextStartElement()) {

    }

    while (xml->readNextStartElement()) {
        if (xml->name() != "params") {
            qDebug() << "Encontrado tag errado em filters: " << xml->name();
            break;
        }

        readFilterFromXml(xml);
    }
}
