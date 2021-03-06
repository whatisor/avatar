#ifndef Cubemap_hpp
#define Cubemap_hpp

#include "../base/glsupport.h"
#include <stdio.h>
#include <string>
class Cubemap {
public:
    Cubemap();
    ~Cubemap();

    void loadTextures(std::string posX, std::string negX,
                      std::string posY, std::string negY,
                      std::string posZ, std::string negZ);
    
    GLuint getTexture() const { return texture; }

private:
    GLuint texture;
};

#endif /* Cubemap_hpp */
