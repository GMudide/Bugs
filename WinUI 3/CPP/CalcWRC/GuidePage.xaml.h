// Copyright (c) Microsoft Corporation and Contributors.
// Licensed under the MIT License.

#pragma once

#include "GuidePage.g.h"

namespace winrt::CalcWRC::implementation
{
    struct GuidePage : GuidePageT<GuidePage>
    {
        GuidePage();

        int32_t MyProperty();
        void MyProperty(int32_t value);
    };
}

namespace winrt::CalcWRC::factory_implementation
{
    struct GuidePage : GuidePageT<GuidePage, implementation::GuidePage>
    {
    };
}
