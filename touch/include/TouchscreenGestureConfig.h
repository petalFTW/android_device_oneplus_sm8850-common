/*
 * SPDX-FileCopyrightText: 2025 The LineageOS Project
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#include "TouchscreenGesture.h"

namespace aidl {
namespace vendor {
namespace lineage {
namespace touch {

// s3910 on macan reports the wake tap as kGestureDoubleTap, not single tap, so advertise
// the bastard or the toggle does fuck all
const int TouchscreenGesture::kSupportedGestures = makeBitField(
        kGestureDoubleTap,
        kGestureUpVee, kGestureDownVee, kGestureLeftVee, kGestureRightVee,
        kGestureCircle, kGestureDoubleSwipe,
        kGestureLeftToRight, kGestureRightToLeft, kGestureUpToDown, kGestureDownToUp,
        kGestureM, kGestureW, kGestureSingleTap);

}  // namespace touch
}  // namespace lineage
}  // namespace vendor
}  // namespace aidl
