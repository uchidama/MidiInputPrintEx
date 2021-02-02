/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
MIDI_InputExAudioProcessorEditor::MIDI_InputExAudioProcessorEditor (MIDI_InputExAudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)
{
    m_str = "MIDI Note:";
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (400, 300);
}

MIDI_InputExAudioProcessorEditor::~MIDI_InputExAudioProcessorEditor()
{
}

void MIDI_InputExAudioProcessorEditor::setString(juce::String str)
{
    m_str = str;
    repaint();
}


//==============================================================================
void MIDI_InputExAudioProcessorEditor::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));

    g.setColour (juce::Colours::white);
    g.setFont (15.0f);
    g.drawFittedText (m_str, getLocalBounds(), juce::Justification::centred, 1);
}

void MIDI_InputExAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
}
