
#ifndef MULTIMEDIAOBJECT_H
#define MULTIMEDIAOBJECT_H

#include <string>

class MultimediaObject {
public:
    MultimediaObject();
    MultimediaObject(const std::string& name, const std::string& filename);
    MultimediaObject(const MultimediaObject& other);
    virtual ~MultimediaObject();

    std::string getName() const;
    std::string getFilename() const;

    void setName(const std::string& name);
    void setFilename(const std::string& filename);

    virtual void play() const;
    virtual std::string display() const;

private:
    std::string name;
    std::string filename;
};

#endif // MULTIMEDIAOBJECT_H
