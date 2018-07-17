//
//  Generator.hpp
//  Ellydeez
//
//  Created by Pascal Baltazar on 13/07/2018.
//

#ifndef Generator_hpp
#define Generator_hpp

#include <stdio.h>
#include "SourceBase.hpp"

using namespace std;

namespace Sources {
    
class Generator : public Source {
    
public:
    
    Generator(Group* sourceGroup,
              string pixel_format = "RGB"):
    Source(sourceGroup, pixel_format)
    {}
    
    ~Generator() = default;
    
    void setup()  {}
    void update() {}
    void draw() {}
    void exit() {}
    
private:
    
    
    
};
    
} //namespace Source

#endif /* Generator_hpp */
