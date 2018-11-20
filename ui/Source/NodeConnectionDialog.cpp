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

#include "NodeConnectionDialog.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
NodeConnectionDialog::NodeConnectionDialog ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    ynode.reset (new Label ("new label",
                            TRANS("00")));
    addAndMakeVisible (ynode.get());
    ynode->setFont (Font (32.0f, Font::plain).withTypefaceStyle ("Bold"));
    ynode->setJustificationType (Justification::centred);
    ynode->setEditable (true, true, false);
    ynode->setColour (TextEditor::textColourId, Colours::black);
    ynode->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    ynode->addListener (this);

    ynode->setBounds (100, 0, 60, 60);

    xnode.reset (new Label ("new label",
                            TRANS("00")));
    addAndMakeVisible (xnode.get());
    xnode->setFont (Font (32.0f, Font::plain).withTypefaceStyle ("Bold"));
    xnode->setJustificationType (Justification::centred);
    xnode->setEditable (true, true, false);
    xnode->setColour (TextEditor::textColourId, Colours::black);
    xnode->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    xnode->addListener (this);

    xnode->setBounds (0, 0, 60, 56);

    internalPath1.startNewSubPath (100.0f, 30.0f);
    internalPath1.lineTo (60.0f, 45.0f);
    internalPath1.lineTo (60.0f, 15.0f);
    internalPath1.closeSubPath();


    //[UserPreSize]
    //[/UserPreSize]

    setSize (160, 60);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

NodeConnectionDialog::~NodeConnectionDialog()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    ynode = nullptr;
    xnode = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void NodeConnectionDialog::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xff323e44));

    {
        int x = 0, y = 42, width = 16, height = 16;
        String text (TRANS("X"));
        Colour fillColour = Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (Font (16.0f, Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    Justification::centred, true);
    }

    {
        int x = 96, y = 42, width = 16, height = 16;
        String text (TRANS("Y"));
        Colour fillColour = Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (Font (16.0f, Font::plain).withTypefaceStyle ("Bold"));
        g.drawText (text, x, y, width, height,
                    Justification::centred, true);
    }

    {
        float x = 0, y = 0;
        Colour fillColour = Colour (0xff5bd5c1);
        Colour strokeColour = Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath1, AffineTransform::translation(x, y));
        g.setColour (strokeColour);
        g.strokePath (internalPath1, PathStrokeType (2.0f), AffineTransform::translation(x, y));
    }

    {
        int x = 0, y = 0, width = getWidth() - 0, height = getHeight() - 0;
        Colour strokeColour = Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (strokeColour);
        g.drawRect (x, y, width, height, 2);

    }

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void NodeConnectionDialog::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void NodeConnectionDialog::labelTextChanged (Label* labelThatHasChanged)
{
    //[UserlabelTextChanged_Pre]
    //[/UserlabelTextChanged_Pre]

    if (labelThatHasChanged == ynode.get())
    {
        //[UserLabelCode_ynode] -- add your label text handling code here..
        //[/UserLabelCode_ynode]
    }
    else if (labelThatHasChanged == xnode.get())
    {
        //[UserLabelCode_xnode] -- add your label text handling code here..
        //[/UserLabelCode_xnode]
    }

    //[UserlabelTextChanged_Post]
    //[/UserlabelTextChanged_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="NodeConnectionDialog" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.33"
                 fixedSize="1" initialWidth="160" initialHeight="60">
  <BACKGROUND backgroundColour="ff323e44">
    <TEXT pos="0 42 16 16" fill="solid: ffffffff" hasStroke="0" text="X"
          fontname="Default font" fontsize="16.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <TEXT pos="96 42 16 16" fill="solid: ffffffff" hasStroke="0" text="Y"
          fontname="Default font" fontsize="16.0" kerning="0.0" bold="1"
          italic="0" justification="36" typefaceStyle="Bold"/>
    <PATH pos="0 0 100 100" fill="solid: ff5bd5c1" hasStroke="1" stroke="2, mitered, butt"
          strokeColour="solid: ffffffff" nonZeroWinding="1">s 100 30 l 60 45 l 60 15 x</PATH>
    <RECT pos="0 0 0M 0M" fill="solid: 0" hasStroke="1" stroke="2, mitered, butt"
          strokeColour="solid: ffffffff"/>
  </BACKGROUND>
  <LABEL name="new label" id="76e3c48f12dd1a40" memberName="ynode" virtualName=""
         explicitFocusOrder="0" pos="100 0 60 60" edTextCol="ff000000"
         edBkgCol="0" labelText="00" editableSingleClick="1" editableDoubleClick="1"
         focusDiscardsChanges="0" fontname="Default font" fontsize="32.0"
         kerning="0.0" bold="1" italic="0" justification="36" typefaceStyle="Bold"/>
  <LABEL name="new label" id="ef88cdc1dc8eff91" memberName="xnode" virtualName=""
         explicitFocusOrder="0" pos="0 0 60 56" edTextCol="ff000000" edBkgCol="0"
         labelText="00" editableSingleClick="1" editableDoubleClick="1"
         focusDiscardsChanges="0" fontname="Default font" fontsize="32.0"
         kerning="0.0" bold="1" italic="0" justification="36" typefaceStyle="Bold"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
