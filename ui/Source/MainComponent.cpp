#include "MainComponent.h"
#include "NodeConnectionDialog.h"
MainComponent::MainComponent()
{
    setFramesPerSecond (15); // This sets the frequency of the update calls.
	for (int n = 0; n < 16; n++)
	{
		MuxNode *x = xNodes.add(new MuxNode(NODE_X, n));
		MuxNode *y = yNodes.add(new MuxNode(NODE_Y, n));

		
		addAndMakeVisible (x);
		addAndMakeVisible (y);

		x->setTopLeftPosition(0, n * (H / 16));
		y->setTopLeftPosition(W - y->getWidth(), n * (H / 16));
	}

	setSize (W, H);
	addKeyListener(this);
	setWantsKeyboardFocus(true);
}

MainComponent::~MainComponent()
{
}

void MainComponent::update()
{
}

void MainComponent::paint (Graphics& g)
{
	g.fillAll(Colours::black);
}

void MainComponent::resized()
{
}

bool MainComponent::keyPressed (const KeyPress &key, Component *originatingComponent)
{
	if (key.getTextCharacter() == 'x')
	{
		ScopedPointer <NodeConnectionDialog> dialog (new NodeConnectionDialog());
		DialogWindow::showModalDialog("Enter X", (Component *)dialog, this, Colours::white, true, false);
	}

	return (false);
}