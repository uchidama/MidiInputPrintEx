/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class MIDI_InputExAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    MIDI_InputExAudioProcessorEditor (MIDI_InputExAudioProcessor&);
    ~MIDI_InputExAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;
    
    void setString(juce::String str);
    
private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    MIDI_InputExAudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MIDI_InputExAudioProcessorEditor)
    juce::String m_str;
    
};
