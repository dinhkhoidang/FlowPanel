/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"

//==============================================================================
MainContentComponent::MainContentComponent()
{
	main = new PropertyPanel();
	Array<PropertyComponent*> comps;
	contener = new dtstuneflowpanel("name", 500);
	contener->addComponent(new TextButton("1"));
	contener->addComponent(new TextButton("2"));
	contener->addComponent(new TextButton("3"));
	contener->addComponent(new TextButton("4"));
	contener->addComponent(new TextButton("5"));
	contener->addComponent(new TextButton("6"));
	contener->addComponent(new TextButton("7"));
	comps.add(contener);
	main->addProperties(comps);
	//main->addProperties(comps);
	addAndMakeVisible(main);
    setSize (600, 400);
}

MainContentComponent::~MainContentComponent()
{
	contener = nullptr;
}

void MainContentComponent::paint (Graphics& g)
{
    g.fillAll (Colour (0xff001F36));

    g.setFont (Font (16.0f));
    g.setColour (Colours::white);
    g.drawText ("Hello World!", getLocalBounds(), Justification::centred, true);
}

void MainContentComponent::resized()
{
    // This is called when the MainContentComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
	contener->setPreferredHeight(50);

	main->setBounds(getLocalBounds());
	main->refreshAll();
}
