// Copyright (c) Microsoft Corporation and Contributors.
// Licensed under the MIT License.

#include "pch.h"
#include "GuidePage.xaml.h"
#if __has_include("GuidePage.g.cpp")
#include "GuidePage.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::CalcWRC::implementation
{
    GuidePage::GuidePage()
    {
        InitializeComponent();
    }

    int32_t GuidePage::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void GuidePage::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }
}
