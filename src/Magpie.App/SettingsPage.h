#pragma once

#include "Settings.h"
#include "SettingsPage.g.h"

namespace winrt::Magpie::App::implementation {

struct SettingsPage : SettingsPageT<SettingsPage> {
	SettingsPage();

	void ThemeComboBox_SelectionChanged(Windows::Foundation::IInspectable const&, Windows::UI::Xaml::Controls::SelectionChangedEventArgs const& args);

	void PortableModeToggleSwitch_Toggled(Windows::Foundation::IInspectable const&, Windows::UI::Xaml::RoutedEventArgs const&);

	void ComboBox_DropDownOpened(winrt::Windows::Foundation::IInspectable const&, winrt::Windows::Foundation::IInspectable const&);

private:
	Magpie::App::Settings _settings{ nullptr };
};

}

namespace winrt::Magpie::App::factory_implementation {

struct SettingsPage : SettingsPageT<SettingsPage, implementation::SettingsPage> {
};

}
