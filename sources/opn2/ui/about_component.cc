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
#include "version.h"
//[/Headers]

#include "about_component.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
About_Component::About_Component ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    hyperlinkButton.reset (new HyperlinkButton (TRANS("Home page"),
                                                URL ("https://github.com/jpcima/ADLplug")));
    addAndMakeVisible (hyperlinkButton.get());
    hyperlinkButton->setTooltip (TRANS("https://github.com/jpcima/ADLplug"));
    hyperlinkButton->setButtonText (TRANS("Home page"));

    hyperlinkButton->setBounds (8, 56, 88, 24);

    label.reset (new Label ("new label",
                            CharPointer_UTF8 ("This program is free software developed by Jean Pierre Cimalando. \xc2\xa9 2018\n"
                            "Many thanks to people who make this program possible.")));
    addAndMakeVisible (label.get());
    label->setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Regular"));
    label->setJustificationType (Justification::centredLeft);
    label->setEditable (false, false, false);
    label->setColour (Label::textColourId, Colours::aliceblue);
    label->setColour (TextEditor::textColourId, Colours::black);
    label->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label->setBounds (8, 88, 488, 40);

    label2.reset (new Label ("new label",
                             CharPointer_UTF8 ("Vitaly Novichkov for the OPNMIDI library\n"
                             "Joel Yliluoma for the original ADLMIDI software\n"
                             "Alexey Khokholov for Nuked OPN2\n"
                             "MAMEDev and contributors for MAME YM2612\n"
                             "St\xc3\xa9phane Dallongeville and Shay Green for GENS OPN2")));
    addAndMakeVisible (label2.get());
    label2->setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Regular"));
    label2->setJustificationType (Justification::centredLeft);
    label2->setEditable (false, false, false);
    label2->setColour (Label::textColourId, Colours::aliceblue);
    label2->setColour (TextEditor::textColourId, Colours::black);
    label2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label2->setBounds (8, 136, 488, 80);

    lbl_prog_version.reset (new Label ("new label",
                                       TRANS("Foobar 1.0")));
    addAndMakeVisible (lbl_prog_version.get());
    lbl_prog_version->setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Bold"));
    lbl_prog_version->setJustificationType (Justification::centredLeft);
    lbl_prog_version->setEditable (false, false, false);
    lbl_prog_version->setColour (Label::textColourId, Colours::aliceblue);
    lbl_prog_version->setColour (TextEditor::textColourId, Colours::black);
    lbl_prog_version->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    lbl_prog_version->setBounds (8, 8, 150, 20);

    lbl_prog_version_extra.reset (new Label ("new label",
                                             TRANS("Final")));
    addAndMakeVisible (lbl_prog_version_extra.get());
    lbl_prog_version_extra->setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Bold"));
    lbl_prog_version_extra->setJustificationType (Justification::centredLeft);
    lbl_prog_version_extra->setEditable (false, false, false);
    lbl_prog_version_extra->setColour (Label::textColourId, Colours::yellow);
    lbl_prog_version_extra->setColour (TextEditor::textColourId, Colours::black);
    lbl_prog_version_extra->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    lbl_prog_version_extra->setBounds (8, 28, 150, 20);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (500, 234);


    //[Constructor] You can add your own custom stuff here..
    lbl_prog_version->setText(JucePlugin_Name " " ADLplug_Version, dontSendNotification);
    lbl_prog_version_extra->setText(ADLplug_VersionExtra, dontSendNotification);
    //[/Constructor]
}

About_Component::~About_Component()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    hyperlinkButton = nullptr;
    label = nullptr;
    label2 = nullptr;
    lbl_prog_version = nullptr;
    lbl_prog_version_extra = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void About_Component::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xff323e44));

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void About_Component::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="About_Component" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.33"
                 fixedSize="0" initialWidth="500" initialHeight="234">
  <BACKGROUND backgroundColour="ff323e44"/>
  <HYPERLINKBUTTON name="new hyperlink" id="ab6eab2236ebdf3d" memberName="hyperlinkButton"
                   virtualName="" explicitFocusOrder="0" pos="8 56 88 24" tooltip="https://github.com/jpcima/ADLplug"
                   buttonText="Home page" connectedEdges="0" needsCallback="0" radioGroupId="0"
                   url="https://github.com/jpcima/ADLplug"/>
  <LABEL name="new label" id="e558d7bffe2fa0ac" memberName="label" virtualName=""
         explicitFocusOrder="0" pos="8 88 488 40" textCol="fff0f8ff" edTextCol="ff000000"
         edBkgCol="0" labelText="This program is free software developed by Jean Pierre Cimalando. &#169; 2018&#10;Many thanks to people who make this program possible."
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15.0" kerning="0.0" bold="0"
         italic="0" justification="33"/>
  <LABEL name="new label" id="5ed4be24f6c40a04" memberName="label2" virtualName=""
         explicitFocusOrder="0" pos="8 136 488 80" textCol="fff0f8ff"
         edTextCol="ff000000" edBkgCol="0" labelText="Vitaly Novichkov for the OPNMIDI library&#10;Joel Yliluoma for the original ADLMIDI software&#10;Alexey Khokholov for Nuked OPN2&#10;MAMEDev and contributors for MAME YM2612&#10;St&#233;phane Dallongeville and Shay Green for GENS OPN2"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15.0" kerning="0.0" bold="0"
         italic="0" justification="33"/>
  <LABEL name="new label" id="368ceb7955ceaf95" memberName="lbl_prog_version"
         virtualName="" explicitFocusOrder="0" pos="8 8 150 20" textCol="fff0f8ff"
         edTextCol="ff000000" edBkgCol="0" labelText="Foobar 1.0" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="1" italic="0" justification="33"
         typefaceStyle="Bold"/>
  <LABEL name="new label" id="2220fa22c7ad951b" memberName="lbl_prog_version_extra"
         virtualName="" explicitFocusOrder="0" pos="8 28 150 20" textCol="ffffff00"
         edTextCol="ff000000" edBkgCol="0" labelText="Final" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.0" kerning="0.0" bold="1" italic="0" justification="33"
         typefaceStyle="Bold"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]