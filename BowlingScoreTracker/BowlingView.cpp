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

static unsigned int scores[9][2];
static unsigned int frameTenScores[3];
static unsigned int modifiers[9][2];
static unsigned int frameTenModifiers[3];
static char displayScores[9][2];
static char frameTenDisplayScores[3];
static unsigned int currentFrame = 1;
static auto middleOfTenthFrame = 0;
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
        SetTag(frameTextField, 2 * (index - 1), CrassusSetTag);
        if (index == 10)
        {
            if (!frameTenDisplayScores[0])
            {
                SetTextFieldText(frameTextField, "0", CrassusSetTextFieldText);
            }
            else
            {
                char halfFrameTotal[2];
                halfFrameTotal[0] = frameTenDisplayScores[0];
                halfFrameTotal[1] = '\0';
                SetTextFieldText(frameTextField, halfFrameTotal, CrassusSetTextFieldText);
            }
        }
        else
        {
            if (!displayScores[index - 1][0])
            {
                SetTextFieldText(frameTextField, "0", CrassusSetTextFieldText);
            }
            else
            {
                char halfFrameTotal[2];
                halfFrameTotal[0] = displayScores[index - 1][0];
                halfFrameTotal[1] = '\0';
                SetTextFieldText(frameTextField, halfFrameTotal, CrassusSetTextFieldText);
            }
        }
        AddSubview(scrollView, frameLabel, CrassusAddSubview);
        AddSubview(scrollView, frameTextField, CrassusAddSubview);
        scrollViewContentHeight += cellHeight + 2;
        if (index == 10 && (middleOfTenthFrame || bottomOfFrame))
        {
            Frame frameForMiddleOfTenthFrame = {10, static_cast<float>(scrollViewContentHeight), frame.width, static_cast<float>(cellHeight)};
            void * middleFrameTextField = CreateTextField(frameForMiddleOfTenthFrame, CrassusCreateTextField);
            SetTag(middleFrameTextField, 19, CrassusSetTag);
            if (!frameTenDisplayScores[1])
            {
                SetTextFieldText(middleFrameTextField, "0", CrassusSetTextFieldText);
            }
            else
            {
                char halfFrameTotal[2];
                halfFrameTotal[0] = frameTenDisplayScores[1];
                halfFrameTotal[1] = '\0';
                SetTextFieldText(middleFrameTextField, halfFrameTotal, CrassusSetTextFieldText);
            }
            AddSubview(scrollView, middleFrameTextField, CrassusAddSubview);
            scrollViewContentHeight += cellHeight + 2;
        }
        if (index == currentFrame && !bottomOfFrame) continue;
        if ((frameTenDisplayScores[0] != 'X' || frameTenDisplayScores[0] != 'x') && frameTenDisplayScores[1] != '/' && currentFrame == 10) continue;
        Frame frameForBottomOfBowlingFrame = {10, static_cast<float>(scrollViewContentHeight), frame.width, static_cast<float>(cellHeight)};
        void * secondFrameTextField = CreateTextField(frameForBottomOfBowlingFrame, CrassusCreateTextField);
        if (index == 10)
        {
            SetTag(secondFrameTextField, 20, CrassusSetTag);
            if (!frameTenDisplayScores[2])
            {
                SetTextFieldText(secondFrameTextField, "0", CrassusSetTextFieldText);
            }
            else
            {
                char halfFrameTotal[2];
                halfFrameTotal[0] = frameTenDisplayScores[2];
                halfFrameTotal[1] = '\0';
                SetTextFieldText(secondFrameTextField, halfFrameTotal, CrassusSetTextFieldText);
            }
        }
        else
        {
            SetTag(secondFrameTextField, 2 * index - 1, CrassusSetTag);
            if (!displayScores[index - 1][1])
            {
                SetTextFieldText(secondFrameTextField, "0", CrassusSetTextFieldText);
            }
            else
            {
                char halfFrameTotal[2];
                halfFrameTotal[0] = displayScores[index - 1][1];
                halfFrameTotal[1] = '\0';
                SetTextFieldText(secondFrameTextField, halfFrameTotal, CrassusSetTextFieldText);
            }
        }
        AddSubview(scrollView, secondFrameTextField, CrassusAddSubview);
        scrollViewContentHeight += cellHeight + 2;
    }
    unsigned int total = 0;
    
    for (unsigned int frameIndex = 1; frameIndex <= currentFrame; ++frameIndex)
    {
        if (frameIndex == 10)
        {
            if ((frameTenDisplayScores[0] == 'X' || frameTenDisplayScores[0] == 'x') && bottomOfFrame)
            {
                frameTenModifiers[0] &= 1;
                frameTenScores[0] += frameTenScores[1] + frameTenScores[2];
            }
            if (((frameTenDisplayScores[1] == 'X' || frameTenDisplayScores[1] == 'x') && !middleOfTenthFrame) || (frameTenDisplayScores[1] == '/' && bottomOfFrame))
            {
                frameTenModifiers[1] &= 1;
                frameTenScores[1] += frameTenScores[2];
            }
            continue;
        }
        if (frameIndex == 9)
        {
            if ((displayScores[8][0] == 'X' || displayScores[8][0] == 'x') && currentFrame == 10)
            {
                modifiers[8][0] &= 1;
                scores[8][0] += frameTenScores[0] + frameTenScores[1];
            }
            if (displayScores[8][0] == '/' && ((currentFrame == 9 && bottomOfFrame) || currentFrame == 10))
            {
                modifiers[8][0] &= 1;
                scores[8][0] += frameTenScores[0];
            }
            if ((displayScores[8][1] == 'X' || displayScores[8][1] == 'x') && currentFrame == 10 && (middleOfTenthFrame || bottomOfFrame))
            {
                modifiers[8][1] &= 1;
                scores[8][1] += frameTenScores[0] + frameTenScores[1];
            }
            if (displayScores[8][1] == '/' && currentFrame == 10)
            {
                modifiers[8][1] &= 1;
                scores[8][1] += frameTenScores[0];
            }
            continue;
        }
        if (bottomOfFrame)
        {
            if ((displayScores[frameIndex - 1][1] == 'X' || displayScores[frameIndex - 1][1] == 'x') && currentFrame >= frameIndex + 1)
            {
                if (displayScores[frameIndex][0] == 'X' || displayScores[frameIndex][0] == 'x')
                {
                    modifiers[frameIndex - 1][1] &= 1;
                    scores[frameIndex - 1][1] += scores[frameIndex][0] + scores[frameIndex + 1][0];
                }
                else
                {
                    modifiers[frameIndex - 1][1] &= 1;
                    scores[frameIndex - 1][1] += scores[frameIndex][0] + scores[frameIndex][1];
                }
            }
            if (displayScores[frameIndex - 1][1] == '/' && currentFrame > frameIndex)
            {
                modifiers[frameIndex - 1][1] &= 1;
                scores[frameIndex - 1][1] += scores[frameIndex][0];
            }
        }
        else
        {
            if ((displayScores[frameIndex - 1][0] == 'X' || displayScores[frameIndex - 1][0] == 'x') && currentFrame > frameIndex)
            {
                if (displayScores[frameIndex][0] == 'X' || displayScores[frameIndex][0] == 'x')
                {
                    modifiers[frameIndex - 1][0] &= 1;
                    scores[frameIndex - 1][0] += scores[frameIndex][0] + scores[frameIndex + 1][0];
                }
                else
                {
                    modifiers[frameIndex - 1][0] &= 1;
                    scores[frameIndex - 1][0] += scores[frameIndex][0] + scores[frameIndex][1];
                }
            }
        }
    }
    for (unsigned int frameIndex = 0; frameIndex < currentFrame; ++frameIndex)
    {
        total += frameIndex == 10 ? frameTenScores[0] + frameTenScores[1] + frameTenScores[2] + 10 * frameTenModifiers[0] + 10 * frameTenModifiers[1] + 10 * frameTenModifiers[2]: scores[frameIndex][0] + scores[frameIndex][1] + 10 * modifiers[frameIndex][0] + 10 * modifiers[frameIndex][1];
    }
    Frame totalFrame = {10, static_cast<float>(scrollViewContentHeight), frame.width, static_cast<float>(cellHeight)};
    char totalString[4] = "";
    sprintf(totalString, "Total: %d", total);
    void * totalLabel = CreateLabel(totalFrame, totalString, 17, CrassusCreateLabel);
    CenterLabelText(totalLabel, CrassusCenterLabelText);
    AddSubview(scrollView, totalLabel, CrassusAddSubview);
    scrollViewContentHeight += cellHeight + 2;
    Rgba blue = {0.21, 0.21, 1, 1};
    Rgba white = {1, 1, 1, 1};
    Frame addHalfFrameFrame = {10, static_cast<float>(scrollViewContentHeight), frame.width, static_cast<float>(cellHeight)};
    if (currentFrame < 10 || !bottomOfFrame)
    {
        void * addHalfFrameButton = CreateButton(addHalfFrameFrame, "addHalfFrame:", CrassusCreateButton);
        void * addHalfFrameLabel = CreateLabel(addHalfFrameFrame, "Add Half Frame", 17, CrassusCreateLabel);
        SetLabelTextColor(addHalfFrameLabel, white, CrassusSetLabelTextColor);
        SetBackgroundColor(addHalfFrameLabel, blue, CrassusSetBackgroundColor);
        AddSubview(scrollView, addHalfFrameLabel, CrassusAddSubview);
        AddSubview(scrollView, addHalfFrameButton, CrassusAddSubview);
        scrollViewContentHeight += cellHeight + 2;
    }
    if (currentFrame > 1 || bottomOfFrame)
    {
        Frame removeHalfFrameFrame = {10, static_cast<float>(scrollViewContentHeight), frame.width, static_cast<float>(cellHeight)};
        void * removeHalfFrameButton = CreateButton(removeHalfFrameFrame, "removeHalfFrame:", CrassusCreateButton);
        void * removeHalfFrameLabel = CreateLabel(removeHalfFrameFrame, "Remove Half Frame", 17, CrassusCreateLabel);
        SetLabelTextColor(removeHalfFrameLabel, white, CrassusSetLabelTextColor);
        SetBackgroundColor(removeHalfFrameLabel, blue, CrassusSetBackgroundColor);
        AddSubview(scrollView, removeHalfFrameLabel, CrassusAddSubview);
        AddSubview(scrollView, removeHalfFrameButton, CrassusAddSubview);
        scrollViewContentHeight += cellHeight + 2;
    }
    
    SetContentHeight(scrollView, scrollViewContentHeight, CrassusSetContentHeight);
    return scrollView;
}

void UpdateTotal(void * containingView)
{
    void * window = GetWindowFromView(containingView, CrassusGetWindowFromView);
    void * masterView = GetMasterView(window, CrassusGetMasterView);
    Rgba white = {1, 1, 1, 1};
    SetBackgroundColor(masterView, white, CrassusSetBackgroundColor);
    CArray subviews = GetSubviews(masterView, CrassusGetSubviews);
    RemoveSubviews(subviews, CrassusRemoveSubviews);
    Frame frame = GetFrame(masterView, CrassusGetFrame);
    AddSubview(masterView, BowlingScreen(frame), CrassusAddSubview);
}

void AddHalfFrame(void * containingView)
{
    if (currentFrame == 10)
    {
        middleOfTenthFrame = middleOfTenthFrame ? 0 : 1;
    }
    else
    {
        if (bottomOfFrame) ++currentFrame;
        if (displayScores[currentFrame - 1][0] == 'X' || displayScores[currentFrame - 1][0] == 'x')
        {
            displayScores[currentFrame - 1][1] = '-';
            scores[currentFrame - 1][1] = 0;
            ++currentFrame;
            UpdateTotal(containingView);
            return;
        }
        bottomOfFrame = bottomOfFrame ? 0 : 1;
    }
    UpdateTotal(containingView);
}

void RemoveHalfFrame(void * containingView)
{
    if (currentFrame == 10)
    {
        if (!middleOfTenthFrame && !bottomOfFrame)
        {
            frameTenScores[0] = 0;
            frameTenModifiers[0] = 0;
            frameTenDisplayScores[0] = '0';
            --currentFrame;
            bottomOfFrame = 1;
        }
        if (middleOfTenthFrame)
        {
            frameTenScores[1] = 0;
            frameTenModifiers[1] = 0;
            frameTenDisplayScores[1] = '0';
            middleOfTenthFrame = 0;
        }
        if (bottomOfFrame)
        {
            frameTenScores[2] = 0;
            frameTenModifiers[2] = 0;
            frameTenDisplayScores[2] = '0';
            middleOfTenthFrame = 1;
            bottomOfFrame = 0;
        }
    }
    else
    {
        scores[currentFrame - 1][bottomOfFrame] = 0;
        modifiers[currentFrame - 1][bottomOfFrame] = 0;
        displayScores[currentFrame - 1][bottomOfFrame] = '0';
        if (!bottomOfFrame) --currentFrame;
        bottomOfFrame = bottomOfFrame ? 0 : 1;
    }
    UpdateTotal(containingView);
}

void EditingChanged(void* textField)
{
    auto tag = GetTag(textField, CrassusGetTag);
    auto text = GetTextFieldText(textField, CrassusGetTextFieldText);
    string updatedNumber(text);
    string allowedCharacters("0123456789/Xx");
    void * containingView = GetSuperview(textField, CrassusGetSuperview);
    if (allowedCharacters.find(text) == string::npos)
    {
        UpdateTotal(containingView);
        return;
    }
    if ((tag % 2) && tag < 18 && (updatedNumber.find("X") != string::npos || updatedNumber.find("x") != string::npos))
    {
        UpdateTotal(containingView);
        return;
    }
    if (tag < 19 && !(tag % 2) && updatedNumber.find("/") != string::npos)
    {
        UpdateTotal(containingView);
        return;
    }
    if (tag < 18)
    {
        displayScores[tag / 2][tag % 2] = text[0];
    }
    else
    {
        frameTenDisplayScores[tag % 3] = text[0];
    }
    if (tag == 20)
    {
        if (text[0] == '/')
        {
            UpdateTotal(containingView);
            return;
        }
        if (text[0] == 'X' || text[0] == 'x')
        {
            frameTenScores[2] = 10;
            UpdateTotal(containingView);
            return;
        }
        else
        {
            frameTenScores[2] = updatedNumber.length() ? stoi(updatedNumber) : 0;
            UpdateTotal(containingView);
            return;
        }
    }
    if (text[0] != 'X' && text[0] != 'x' && text[0] != '/')
    {
        if (tag == 18 || tag == 19)
        {
            frameTenScores[tag % 3] = updatedNumber.length() ? stoi(updatedNumber) : 0;
        }
        else
        {
            scores[tag / 2][tag % 2] = updatedNumber.length() ? stoi(updatedNumber) : 0;
        }
    }
    UpdateTotal(containingView);
}

void EditingWillBegin(void * textField)
{
    SelectAllText(textField, CrassusSelectAllText);
}





































































































