// Copyright (c) Microsoft Corporation and Contributors.
// Licensed under the MIT License.

#include "pch.h"

#include <winrt/CalcWRC.h>

#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif

#include <winrt/Windows.UI.Xaml.Interop.h>

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::CoreApp::implementation
{
    MainWindow::MainWindow()
    {
        InitializeComponent();
    }

    int32_t MainWindow::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainWindow::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void MainWindow::myButton_Click(IInspectable const&, RoutedEventArgs const&)
    {

        //this->Frame().Navigate(xaml_typename<Page1>());

        //auto rootFrame = Content().as<Microsoft::UI::Xaml::Controls::Frame>();
        //if (!rootFrame) {
        //    rootFrame = Microsoft::UI::Xaml::Controls::Frame();
        //    Content(rootFrame);
        //    if (!rootFrame.Content()) {
        //        rootFrame.Navigate(, *this);
        //    }
        //}

        contentFrame().Navigate(xaml_typename<CalcWRC::GuidePage>());

        CalcWRC::Calc m_thermometer;
        m_thermometer.AdjustTemperature(1.f);
        myButton().Content(box_value(L"Clicked"));
    }
}