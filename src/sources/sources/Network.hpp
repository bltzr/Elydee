//
//  Network.hpp
//  Ellydeez
//
//  Created by Pascal Baltazar on 13/07/2018.
//

#ifndef Network_hpp
#define Network_hpp

#include <stdio.h>
#include "SourceBase.hpp"

using namespace std;

namespace Sources {

class Network : public Source {
    
public:
    
    Network(Group* sourceGroup,
            string pixel_format = "RGB"):
    Source(sourceGroup, pixel_format)
    {}
    
    ~Network() = default;
    
    void setup()    {}
    void update()   {}
    void draw()     {}
    void exit()     {}
    
private:
    
    int port;
    
    
};
    
} //namespace Source

#endif /* Network_hpp */
