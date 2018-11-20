#pragma once

#include "MuxNode.h"
#define W 320
#define H 240

#define NODE_X true
#define NODE_Y false

class MainComponent   : public AnimatedAppComponent, public KeyListener
{
public:
    //==============================================================================
    MainComponent();
    ~MainComponent();
	bool keyPressed (const KeyPress &key, Component *originatingComponent);
    void update() override;
    void paint (Graphics& g) override;
    void resized() override;

private:
	OwnedArray <MuxNode> xNodes, yNodes;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};
