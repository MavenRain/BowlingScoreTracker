//
//  BowlingView.cpp
//  BowlingScoreTracker
//
//  Created by SolomonRain on 3/11/16.
//  Copyright © 2016 TheObiGLLC. All rights reserved.
//

#include "GlobalDefinitions.h"
#include "ViewDelegate.h"
#include "TableViewSource.h"
#include "TableViewSourceDelegate.h"
#include "TableViewCellDelegate.h"
#include "TableViewDelegate.h"
#include "LabelDelegate.h"
#include "TextFieldDelegate.h"
#include "IndexPathDelegate.h"
#include "ScrollViewDelegate.h"
#include "WindowDelegate.h"
#include "BowlingView.hpp"
#include <vector>
#include <string>

using namespace std;

static unsigned int scores[10][2];
static unsigned int currentFrame = 1;
static auto bottomOfFrame = 0;
static auto cellHeight = 44;

void* BowlingScreen(Frame frame)
{
    void* scrollView = CreateScrollView(frame, CrassusCreateScrollView);
    auto scrollViewContentHeight = 10.0;
    for (unsigned int index = 1; index <= currentFrame; ++index)
    {
        string frameText("Frame ");
        char frameNumber[3];
        sprintf(frameNumber, "%d", index);
        frameText += frameNumber;
        Frame frameForCurrentBowlingFrame = {10, static_cast<float>(scrollViewContentHeight), frame.width, static_cast<float>(cellHeight)};
        void * frameLabel = CreateLabel(frameForCurrentBowlingFrame, frameText.c_str(), 17, CrassusCreateLabel);
        scrollViewContentHeight += cellHeight + 2;
        Frame frameForTopOfBowlingFrame = {10, static_cast<float>(scrollViewContentHeight), frame.width, static_cast<float>(cellHeight)};
        void * frameTextField = CreateTextField(frameForTopOfBowlingFrame, CrassusCreateTextField);
        SetTag(frameTextField, 2 * index, CrassusSetTag);
        if (!scores[index - 1][0])
        {
            SetTextFieldText(frameTextField, "0", CrassusSetTextFieldText);
        }
        else
        {
            char halfFrameTotal[3];
            sprintf(halfFrameTotal, "%d", scores[index - 1][0]);
            SetTextFieldText(frameTextField, halfFrameTotal, CrassusSetTextFieldText);
        }
         
        
        AddSubview(scrollView, frameLabel, CrassusAddSubview);
        AddSubview(scrollView, frameTextField, CrassusAddSubview);
        scrollViewContentHeight += cellHeight + 2;
        if (index == currentFrame && !bottomOfFrame) continue;
        Frame frameForBottomOfBowlingFrame = {10, static_cast<float>(scrollViewContentHeight), frame.width, static_cast<float>(cellHeight)};
        void * secondFrameTextField = CreateTextField(frameForBottomOfBowlingFrame, CrassusCreateTextField);
        SetTag(secondFrameTextField, 2 * index + 1, CrassusSetTag);
        if (!scores[index - 1][1])
        {
            SetTextFieldText(secondFrameTextField, "0", CrassusSetTextFieldText);
        }
        else
        {
            char halfFrameTotal[3];
            sprintf(halfFrameTotal, "%d", scores[index - 1][1]);
            SetTextFieldText(secondFrameTextField, halfFrameTotal, CrassusSetTextFieldText);
        }
         
        
        AddSubview(scrollView, secondFrameTextField, CrassusAddSubview);
        scrollViewContentHeight += cellHeight + 2;
    }
    unsigned int total = 0;
    for (unsigned int frameIndex = 0; frameIndex < currentFrame; ++frameIndex)
    {
        total += scores[frameIndex][0] + scores[frameIndex][1];
    }
    Frame totalFrame = {10, static_cast<float>(scrollViewContentHeight), frame.width, static_cast<float>(cellHeight)};
    char totalString[4];
    sprintf(totalString, "      %d", total);
    void * totalLabel = CreateLabel(totalFrame, totalString, 17, CrassusCreateLabel);
    AddSubview(scrollView, totalLabel, CrassusAddSubview);
    scrollViewContentHeight += cellHeight + 2;
    Frame updateFrame = {10, static_cast<float>(scrollViewContentHeight), frame.width, static_cast<float>(cellHeight)};
    void * updateButton = CreateButton(updateFrame, "updateTotal:", CrassusCreateButton);
    Rgba blue = {0.21, 0.21, 1, 1};
    Rgba white = {1, 1, 1, 1};
    void * updateLabel = CreateLabel(updateFrame, "Update Total", 17, CrassusCreateLabel);
    SetLabelTextColor(updateLabel, white, CrassusSetLabelTextColor);
    SetBackgroundColor(updateLabel, blue, CrassusSetBackgroundColor);
    AddSubview(scrollView, updateLabel, CrassusAddSubview);
    AddSubview(scrollView, updateButton, CrassusAddSubview);
    scrollViewContentHeight += cellHeight + 2;
    Frame addHalfFrameFrame = {10, static_cast<float>(scrollViewContentHeight), frame.width, static_cast<float>(cellHeight)};
    void * addHalfFrameButton = CreateButton(addHalfFrameFrame, "addHalfFrame:", CrassusCreateButton);
    void * addHalfFrameLabel = CreateLabel(addHalfFrameFrame, "Add Half Frame", 17, CrassusCreateLabel);
    SetLabelTextColor(addHalfFrameLabel, white, CrassusSetLabelTextColor);
    SetBackgroundColor(addHalfFrameLabel, blue, CrassusSetBackgroundColor);
    AddSubview(scrollView, addHalfFrameLabel, CrassusAddSubview);
    AddSubview(scrollView, addHalfFrameButton, CrassusAddSubview);
    scrollViewContentHeight += cellHeight + 2;
    Frame removeHalfFrameFrame = {10, static_cast<float>(scrollViewContentHeight), frame.width, static_cast<float>(cellHeight)};
    void * removeHalfFrameButton = CreateButton(removeHalfFrameFrame, "removeHalfFrame:", CrassusCreateButton);
    void * removeHalfFrameLabel = CreateLabel(removeHalfFrameFrame, "Remove Half Frame", 17, CrassusCreateLabel);
    SetLabelTextColor(removeHalfFrameLabel, white, CrassusSetLabelTextColor);
    SetBackgroundColor(removeHalfFrameLabel, blue, CrassusSetBackgroundColor);
    AddSubview(scrollView, removeHalfFrameLabel, CrassusAddSubview);
    AddSubview(scrollView, removeHalfFrameButton, CrassusAddSubview);
    scrollViewContentHeight += cellHeight + 2;
    
    SetContentHeight(scrollView, scrollViewContentHeight, CrassusSetContentHeight);
    return scrollView;
}

void UpdateTotal(void * containingView)
{
    void * window = GetWindowFromView(containingView, CrassusGetWindowFromView);
    void * masterView = GetMasterView(window, CrassusGetMasterView);
    CArray subviews = GetSubviews(masterView, CrassusGetSubviews);
    RemoveSubviews(subviews, CrassusRemoveSubviews);
    Frame frame = GetFrame(masterView, CrassusGetFrame);
    AddSubview(masterView, BowlingScreen(frame), CrassusAddSubview);
}

void AddHalfFrame(void * containingView)
{
    if (bottomOfFrame) ++currentFrame;
    bottomOfFrame = bottomOfFrame ? 0 : 1;
    UpdateTotal(containingView);
}

void RemoveHalfFrame(void * containingView)
{
    if (!bottomOfFrame) --currentFrame;
    bottomOfFrame = bottomOfFrame ? 0 : 1;
    UpdateTotal(containingView);
}

void EditingChanged(void* textField)
{
    auto tag = GetTag(textField, CrassusGetTag);
    auto text = GetTextFieldText(textField, CrassusGetTextFieldText);
    string updatedNumber(text);
    scores[(tag - tag % 2) / 2 - 1][tag % 2] = stoi(updatedNumber);
}















































































