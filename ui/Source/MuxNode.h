/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 5.3.2

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2017 - ROLI Ltd.

  ==============================================================================
*/

#pragma once

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
//[/Headers]

#include "Node.h"


//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class MuxNode  : public Component
{
public:
    //==============================================================================
    MuxNode (bool _type, const uint8_t _pin);
    ~MuxNode();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;
    void mouseMove (const MouseEvent& e) override;
    void mouseEnter (const MouseEvent& e) override;
    void mouseExit (const MouseEvent& e) override;
    void mouseDown (const MouseEvent& e) override;
    void mouseDrag (const MouseEvent& e) override;
    void mouseDoubleClick (const MouseEvent& e) override;



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
	uint8_t pin;
	bool type;
    //[/UserVariables]

    //==============================================================================
    std::unique_ptr<Label> label;
    std::unique_ptr<Node> node;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MuxNode)
};

//[EndFile] You can add extra defines here...
//[/EndFile]
