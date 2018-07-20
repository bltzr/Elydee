//
//  Syphon.hpp
//  Ellydeez
//
//  Created by Pascal Baltazar on 12/07/2018.
//

#ifndef Syphon_hpp
#define Syphon_hpp

#include <stdio.h>
#include "ofxSyphon.h"
#include "SourceBase.hpp"

namespace Sources {
    
class Syphon : public Source {
    
public:
    
    Syphon( ofJson& params );
    
    Syphon( const string& pixelFormat = "RGB"):
    Source( pixelFormat )
    {}
    
    ~Syphon() = default ;
    
    void setup() override;
    void update() override;
    void draw() override {}
    void exit() override {}
    
protected:
    
    ofPixels& getPixels() override;
    
private:
    
    ofxSyphonClient     syphon;
    ofFbo               fbo;
    ofPixels            pixels;
    
    int                 GLFormat{GL_RGB};
    bool                disableAlpha{1};
    
    string              name{""};
    string              app{"Simple Server"};
    
};

} //namespace Source

#endif /* Syphon_hpp */
