/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 4.2.3

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright (c) 2015 - ROLI Ltd.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "dts-tune-flow-panel.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
dtstuneflowpanel::dtstuneflowpanel (String name, int height): PropertyComponent(name.isNotEmpty()?name:"PropertyComponent", height)
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

dtstuneflowpanel::~dtstuneflowpanel()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

	m_Components.clear();

    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void dtstuneflowpanel::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::white);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void dtstuneflowpanel::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

	juce::Rectangle<int> r = getBoundsInParent();
	int height = 0;
	int width = 0;
	//int pf=0;
	for (auto const i : m_Components) {
	 height = jmax(i->getHeight(),height);
	 width += i->getWidth();
	}
	pf = height;
	int posX = 0;
	int posY = 0;
	for (auto i : m_Components)
	{
		if ((posX + i->getWidth())> r.getWidth())
		{
			posY += height +10;
			posX = 0;
			
		}
		i->setBounds(posX, posY, i->getWidth(), i->getHeight());
		posX += (i->getWidth() + 10);
		pf= i->getBottom();
		
	}
	
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
	
}

void dtstuneflowpanel::refresh()
{
	setPreferredHeight(pf);
	
}

void dtstuneflowpanel::addComponent(Component * comp)
{
	comp->setSize(100, 50);
	addAndMakeVisible(comp);
	m_Components.add(comp);
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="dtstuneflowpanel" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ffffffff"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
