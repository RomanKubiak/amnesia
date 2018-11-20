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

#include "MuxNode.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
MuxNode::MuxNode (bool _type, const uint8_t _pin)
    : type(_type), pin(_pin)
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    label.reset (new Label ("new label",
                            TRANS("12")));
    addAndMakeVisible (label.get());
    label->setFont (Font (10.0f, Font::plain).withTypefaceStyle ("Bold"));
    label->setJustificationType (Justification::centred);
    label->setEditable (false, false, false);
    label->setColour (Label::backgroundColourId, Colour (0x9cffffff));
    label->setColour (Label::textColourId, Colour (0xb4373737));
    label->setColour (TextEditor::textColourId, Colour (0xffda9595));
    label->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    node.reset (new Node());
    addAndMakeVisible (node.get());
    node->setBounds (0, 0, 12, 12);


    //[UserPreSize]
	label->setText(String(pin), NotificationType::dontSendNotification);
	label->addMouseListener(this, false);
    //[/UserPreSize]

    setSize (64, 12);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

MuxNode::~MuxNode()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    label = nullptr;
    node = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void MuxNode::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void MuxNode::resized()
{
    //[UserPreResize] Add your own custom resize code here..
	if (!type)
	{
		label->setBounds (12, 0, getWidth() - 12, getHeight() - 0);
		node->setBounds(0, 0, 12, 12);
	}
	else
	{
    //[/UserPreResize]

    label->setBounds (0, 0, getWidth() - 12, getHeight() - 0);
    //[UserResized] Add your own custom resize handling here..
		node->setBounds(getWidth()-12, 0, 12, 12);
	}
    //[/UserResized]
}

void MuxNode::mouseMove (const MouseEvent& e)
{
    //[UserCode_mouseMove] -- Add your code here...
    //[/UserCode_mouseMove]
}

void MuxNode::mouseEnter (const MouseEvent& e)
{
    //[UserCode_mouseEnter] -- Add your code here...
    //[/UserCode_mouseEnter]
}

void MuxNode::mouseExit (const MouseEvent& e)
{
    //[UserCode_mouseExit] -- Add your code here...
    //[/UserCode_mouseExit]
}

void MuxNode::mouseDown (const MouseEvent& e)
{
    //[UserCode_mouseDown] -- Add your code here...
    //[/UserCode_mouseDown]
}

void MuxNode::mouseDrag (const MouseEvent& e)
{
    //[UserCode_mouseDrag] -- Add your code here...
    //[/UserCode_mouseDrag]
}

void MuxNode::mouseDoubleClick (const MouseEvent& e)
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

<JUCER_COMPONENT documentType="Component" className="MuxNode" componentName=""
                 parentClasses="public Component" constructorParams="bool _type, const uint8_t _pin"
                 variableInitialisers="type(_type), pin(_pin)" snapPixels="8"
                 snapActive="1" snapShown="1" overlayOpacity="0.33" fixedSize="1"
                 initialWidth="64" initialHeight="12">
  <METHODS>
    <METHOD name="mouseDown (const MouseEvent&amp; e)"/>
    <METHOD name="mouseDrag (const MouseEvent&amp; e)"/>
    <METHOD name="mouseEnter (const MouseEvent&amp; e)"/>
    <METHOD name="mouseExit (const MouseEvent&amp; e)"/>
    <METHOD name="mouseDoubleClick (const MouseEvent&amp; e)"/>
    <METHOD name="mouseMove (const MouseEvent&amp; e)"/>
  </METHODS>
  <BACKGROUND backgroundColour="0"/>
  <LABEL name="new label" id="96e2a861ca58ea3d" memberName="label" virtualName=""
         explicitFocusOrder="0" pos="12 0 12M 0M" bkgCol="9cffffff" textCol="b4373737"
         edTextCol="ffda9595" edBkgCol="0" labelText="12" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="10.0" kerning="0.0" bold="1" italic="0" justification="36"
         typefaceStyle="Bold"/>
  <JUCERCOMP name="" id="f7dd1ebb2ea84ab4" memberName="node" virtualName=""
             explicitFocusOrder="0" pos="0 0 12 12" sourceFile="Node.cpp"
             constructorParams=""/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
