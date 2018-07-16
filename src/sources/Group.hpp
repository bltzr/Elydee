//
//  Group.hpp
//  Ellydeez
//
//  Created by Pascal Baltazar on 11/07/2018.
//

#ifndef Group_hpp
#define Group_hpp

#include <stdio.h>
#include <list>
#include "ofMain.h"
//#include "SourceBase.hpp"
//#include "SourcePool.hpp"

using namespace std;

class SourcePool;
class Source;

class Group {
    
public:

    Group(string name):
        groupName{name}{}
    
    ofPixels& getPixels()           {return pixels;}
    
    // if we want to be able to change the name, we must update it
    // in all registered Sources and all client Sinks
    std::string getName() cosnt     {return groupName;}
    
    void setActiveSource(Source* src) {activeSource = src;}
    Source* getActiveSource() const {return activeSource;}
    
protected:
    
    void add(Source*);
    void remove(Source*);
    void moveTo(Source*, Group*);
    
private:
    
    string              groupName;
    
    list<Source*>       sources;
    Source*             activeSource;
    
    ofPixels            pixels;
    
    friend class        SourcePool;
    friend class        OutLine;

};

#endif /* Group_hpp */
