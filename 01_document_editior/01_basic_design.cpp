
#include <SFML/Graphics.hpp>
#include<iostream>
#include<vector>
#include<string>
using namespace std;

enum class ElementType{
    TEXT,
    IMAGE
};

struct Element{
    ElementType type;
    string data;
};


    
class SFMLRenderer{
// SFMLRenderer
      //  ├─ opens a window
     //  ├─ loads font
    //  ├─ loads images
   //  └─ draws elements in order
};


// add fonts and lining

// Pagionation

// Scrolling

// save

// open 

class DocumentEditor{
    private:
    vector<Element> elements;
    public:
    void addText(string text){ // will take text as input 
        Element e1;
        e1.type = ElementType::TEXT;
        e1.data = text;
        elements.push_back(e1);
    }
    void addImages(string path){ //will take the path as string.
        Element e1;
        e1.type = ElementType::IMAGE;
        e1.data = path;
        elements.push_back(e1);
    }

    void renderDocument(){  // will show the text and images in the render format 

    }
    void saveFile(){  // save the file to a specific location.

    }
    void Open(){ // open a file

    }
};

int main(){


    return 0;
}
