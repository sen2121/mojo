/*
 * Copyright (c) 2010, Google Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 *     * Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above
 * copyright notice, this list of conditions and the following disclaimer
 * in the documentation and/or other materials provided with the
 * distribution.
 *     * Neither the name of Google Inc. nor the names of its
 * contributors may be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef SKY_ENGINE_PLATFORM_SCROLL_SCROLLANIMATOR_H_
#define SKY_ENGINE_PLATFORM_SCROLL_SCROLLANIMATOR_H_

#include "sky/engine/platform/PlatformExport.h"
#include "sky/engine/platform/geometry/FloatSize.h"
#include "sky/engine/platform/scroll/ScrollTypes.h"
#include "sky/engine/wtf/FastAllocBase.h"
#include "sky/engine/wtf/Forward.h"
#include "sky/engine/wtf/Noncopyable.h"

namespace blink {

class FloatPoint;
class ScrollableArea;
class Scrollbar;

class PLATFORM_EXPORT ScrollAnimator {
    WTF_MAKE_FAST_ALLOCATED; WTF_MAKE_NONCOPYABLE(ScrollAnimator);
public:
    static PassOwnPtr<ScrollAnimator> create(ScrollableArea*);

    virtual ~ScrollAnimator();

    // Computes a scroll destination for the given parameters.  Returns false if
    // already at the destination.  Otherwise, starts scrolling towards the
    // destination and returns true.  Scrolling may be immediate or animated.
    // The base class implementation always scrolls immediately, never animates.
    virtual bool scroll(ScrollbarOrientation, ScrollGranularity, float step, float delta);

    virtual void scrollToOffsetWithoutAnimation(const FloatPoint&);

    ScrollableArea* scrollableArea() const { return m_scrollableArea; }

    virtual void setIsActive() { }

    void setCurrentPosition(const FloatPoint&);
    FloatPoint currentPosition() const;

    virtual void cancelAnimations() { }

    virtual void contentsResized() const { }

    virtual void contentAreaDidShow() const { }
    virtual void contentAreaDidHide() const { }

    virtual void finishCurrentScrollAnimations() { }

    virtual void didAddVerticalScrollbar(Scrollbar*) { }
    virtual void willRemoveVerticalScrollbar(Scrollbar*) { }
    virtual void didAddHorizontalScrollbar(Scrollbar*) { }
    virtual void willRemoveHorizontalScrollbar(Scrollbar*) { }

    virtual bool shouldScrollbarParticipateInHitTesting(Scrollbar*) { return true; }

    virtual void notifyContentAreaScrolled(const FloatSize&) { }

protected:
    explicit ScrollAnimator(ScrollableArea*);

    virtual void notifyPositionChanged();

    ScrollableArea* m_scrollableArea;
    float m_currentPosX; // We avoid using a FloatPoint in order to reduce
    float m_currentPosY; // subclass code complexity.

private:
    float clampScrollPosition(ScrollbarOrientation, float);
};

} // namespace blink

#endif  // SKY_ENGINE_PLATFORM_SCROLL_SCROLLANIMATOR_H_
