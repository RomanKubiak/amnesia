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

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "Node.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
Node::Node ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]


    //[UserPreSize]
    //[/UserPreSize]

    setSize (12, 12);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

Node::~Node()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]



    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void Node::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
	if (isMouseOver())
	{
		g.fillAll (Colours::turquoise);
	}
	else
	{
    //[/UserPrePaint]

    g.fillAll (Colour (0x70ffffff));

    //[UserPaint] Add your own custom painting code here..
	}
    //[/UserPaint]
}

void Node::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void Node::mouseMove (const MouseEvent& e)
{
    //[UserCode_mouseMove] -- Add your code here...
    //[/UserCode_mouseMove]
}

void Node::mouseEnter (const MouseEvent& e)
{
    //[UserCode_mouseEnter] -- Add your code here...
    //[/UserCode_mouseEnter]
}

void Node::mouseExit (const MouseEvent& e)
{
    //[UserCode_mouseExit] -- Add your code here...
    //[/UserCode_mouseExit]
}

void Node::mouseDown (const MouseEvent& e)
{
    //[UserCode_mouseDown] -- Add your code here...
    //[/UserCode_mouseDown]
}

void Node::mouseDrag (const MouseEvent& e)
{
    //[UserCode_mouseDrag] -- Add your code here...
    //[/UserCode_mouseDrag]
}

void Node::mouseUp (const MouseEvent& e)
{
    //[UserCode_mouseUp] -- Add your code here...
    //[/UserCode_mouseUp]
}

void Node::mouseDoubleClick (const MouseEvent& e)
{
    //[UserCode_mouseDoubleClick] -- Add your code here...
    //[/UserCode_mouseDoubleClick]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="Node" componentName="" parentClasses="public Component"
                 constructorParams="" variableInitialisers="" snapPixels="8" snapActive="1"
                 snapShown="1" overlayOpacity="0.33" fixedSize="1" initialWidth="12"
                 initialHeight="12">
  <METHODS>
    <METHOD name="mouseEnter (const MouseEvent&amp; e)"/>
    <METHOD name="mouseMove (const MouseEvent&amp; e)"/>
    <METHOD name="mouseExit (const MouseEvent&amp; e)"/>
    <METHOD name="mouseDown (const MouseEvent&amp; e)"/>
    <METHOD name="mouseDrag (const MouseEvent&amp; e)"/>
    <METHOD name="mouseUp (const MouseEvent&amp; e)"/>
    <METHOD name="mouseDoubleClick (const MouseEvent&amp; e)"/>
  </METHODS>
  <BACKGROUND backgroundColour="70ffffff"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
