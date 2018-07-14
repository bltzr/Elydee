//
//  SinkPool.hpp
//  Ellydeez
//
//  Created by Pascal Baltazar on 13/07/2018.
//

#ifndef SinkPool_hpp
#define SinkPool_hpp

#include <stdio.h>
#include "OSC2APA102.hpp"

class SinkPool {
    
public:
    
    void setup();
    void update();
    void draw();
    void exit();
    
protected:
    
    void add(std::string sinkName, ...);
    void remove(std::string sinkName);
    void remove(Sink*);
    
private:
    
    std::map<std::string, Sink*> sinks;
    // std::map<std::string, Group*>  groups; // ????
    
    std::list<Sinks::OSC2APA102> osc2apa102s;

    
};

#endif /* SinkPool_hpp */