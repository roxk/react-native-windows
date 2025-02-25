
/*
 * This file is auto-generated from a NativeModule spec file in js.
 *
 * This is a C++ Spec class that should be used with MakeTurboModuleProvider to register native modules
 * in a way that also verifies at compile time that the native module matches the interface required
 * by the TurboModule JS spec.
 */
#pragma once

#include "NativeModules.h"
#include <tuple>

namespace Microsoft::ReactNativeSpecs {

REACT_STRUCT(ImageEditorSpec_Options_offset)
struct ImageEditorSpec_Options_offset {
    REACT_FIELD(x)
    double x;
    REACT_FIELD(y)
    double y;
};

REACT_STRUCT(ImageEditorSpec_Options_size)
struct ImageEditorSpec_Options_size {
    REACT_FIELD(width)
    double width;
    REACT_FIELD(height)
    double height;
};

REACT_STRUCT(ImageEditorSpec_Options_displaySize)
struct ImageEditorSpec_Options_displaySize {
    REACT_FIELD(width)
    double width;
    REACT_FIELD(height)
    double height;
};

REACT_STRUCT(ImageEditorSpec_Options)
struct ImageEditorSpec_Options {
    REACT_FIELD(offset)
    ImageEditorSpec_Options_offset offset;
    REACT_FIELD(size)
    ImageEditorSpec_Options_size size;
    REACT_FIELD(displaySize)
    std::optional<ImageEditorSpec_Options_displaySize> displaySize;
    REACT_FIELD(resizeMode)
    std::optional<std::string> resizeMode;
    REACT_FIELD(allowExternalStorage)
    std::optional<bool> allowExternalStorage;
};

struct ImageEditorSpec : winrt::Microsoft::ReactNative::TurboModuleSpec {
  static constexpr auto methods = std::tuple{
      Method<void(std::string, ImageEditorSpec_Options, Callback<std::string>, Callback<std::string>) noexcept>{0, L"cropImage"},
  };

  template <class TModule>
  static constexpr void ValidateModule() noexcept {
    constexpr auto methodCheckResults = CheckMethods<TModule, ImageEditorSpec>();

    REACT_SHOW_METHOD_SPEC_ERRORS(
          0,
          "cropImage",
          "    REACT_METHOD(cropImage) void cropImage(std::string uri, ImageEditorSpec_Options && cropData, std::function<void(std::string)> const & successCallback, std::function<void(std::string)> const & errorCallback) noexcept { /* implementation */ }}\n"
          "    REACT_METHOD(cropImage) static void cropImage(std::string uri, ImageEditorSpec_Options && cropData, std::function<void(std::string)> const & successCallback, std::function<void(std::string)> const & errorCallback) noexcept { /* implementation */ }}\n");
  }
};

} // namespace Microsoft::ReactNativeSpecs
