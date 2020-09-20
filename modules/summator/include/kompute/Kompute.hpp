
#include <vulkan/vulkan.h>
#include <vulkan/vulkan.hpp>

// SPDLOG_ACTIVE_LEVEL must be defined before spdlog.h import
#if !defined(SPDLOG_ACTIVE_LEVEL)
#if DEBUG
#define SPDLOG_ACTIVE_LEVEL SPDLOG_LEVEL_DEBUG
#else
#define SPDLOG_ACTIVE_LEVEL SPDLOG_LEVEL_INFO
#endif
#endif

#ifndef KOMPUTE_LOG_OVERRIDE
#if KOMPUTE_ENABLE_SPDLOG
#include <spdlog/spdlog.h>
#else
#include <iostream>
#if SPDLOG_ACTIVE_LEVEL > 1
#define SPDLOG_DEBUG(message, ...)
#else
#define SPDLOG_DEBUG(message, ...)                                             \
    std::cout << "DEBUG: " << message << std::endl
#endif // SPDLOG_ACTIVE_LEVEL > 1
#if SPDLOG_ACTIVE_LEVEL > 2
#define SPDLOG_INFO(message, ...)
#else
#define SPDLOG_INFO(message, ...) std::cout << "INFO: " << message << std::endl
#endif // SPDLOG_ACTIVE_LEVEL > 2
#if SPDLOG_ACTIVE_LEVEL > 3
#define SPDLOG_WARN(message, ...)
#else
#define SPDLOG_WARN(message, ...)                                              \
    std::cout << "WARNING: " << message << std::endl
#endif // SPDLOG_ACTIVE_LEVEL > 3
#if SPDLOG_ACTIVE_LEVEL > 4
#define SPDLOG_ERROR(message, ...)
#else
#define SPDLOG_ERROR(message, ...)                                             \
    std::cout << "ERROR: " << message << std::endl
#endif // SPDLOG_ACTIVE_LEVEL > 4
#endif // KOMPUTE_SPDLOG_ENABLED
#endif // KOMPUTE_LOG_OVERRIDE

/*
    THIS FILE HAS BEEN AUTOMATICALLY GENERATED - DO NOT EDIT

    ---

    Copyright 2020 The Institute for Ethical AI & Machine Learning

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

#ifndef SHADEROP_SHADEROPMULT_HPP
#define SHADEROP_SHADEROPMULT_HPP

namespace kp {
namespace shader_data {
static unsigned const char shaders_glsl_opmult_comp_spv[] = {
  0x03, 0x02, 0x23, 0x07, 0x00, 0x00, 0x01, 0x00, 0x08, 0x00, 0x08, 0x00,
  0x2e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x02, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x06, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x47, 0x4c, 0x53, 0x4c, 0x2e, 0x73, 0x74, 0x64, 0x2e, 0x34, 0x35, 0x30,
  0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x06, 0x00, 0x05, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00,
  0x0b, 0x00, 0x00, 0x00, 0x10, 0x00, 0x06, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x11, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00, 0x02, 0x00, 0x00, 0x00,
  0xc2, 0x01, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x69, 0x6e, 0x64, 0x65, 0x78, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x08, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x67, 0x6c, 0x5f, 0x47,
  0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x49, 0x6e, 0x76, 0x6f, 0x63, 0x61, 0x74,
  0x69, 0x6f, 0x6e, 0x49, 0x44, 0x00, 0x00, 0x00, 0x05, 0x00, 0x06, 0x00,
  0x12, 0x00, 0x00, 0x00, 0x74, 0x65, 0x6e, 0x73, 0x6f, 0x72, 0x4f, 0x75,
  0x74, 0x70, 0x75, 0x74, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x07, 0x00,
  0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x76, 0x61, 0x6c, 0x75,
  0x65, 0x73, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x00, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x03, 0x00, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x05, 0x00, 0x19, 0x00, 0x00, 0x00, 0x74, 0x65, 0x6e, 0x73,
  0x6f, 0x72, 0x4c, 0x68, 0x73, 0x00, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00,
  0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x76, 0x61, 0x6c, 0x75,
  0x65, 0x73, 0x4c, 0x68, 0x73, 0x00, 0x00, 0x00, 0x05, 0x00, 0x03, 0x00,
  0x1b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00,
  0x21, 0x00, 0x00, 0x00, 0x74, 0x65, 0x6e, 0x73, 0x6f, 0x72, 0x52, 0x68,
  0x73, 0x00, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0x21, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x76, 0x61, 0x6c, 0x75, 0x65, 0x73, 0x52, 0x68,
  0x73, 0x00, 0x00, 0x00, 0x05, 0x00, 0x03, 0x00, 0x23, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x29, 0x00, 0x00, 0x00,
  0x4c, 0x45, 0x4e, 0x5f, 0x4c, 0x48, 0x53, 0x00, 0x05, 0x00, 0x04, 0x00,
  0x2a, 0x00, 0x00, 0x00, 0x4c, 0x45, 0x4e, 0x5f, 0x52, 0x48, 0x53, 0x00,
  0x05, 0x00, 0x04, 0x00, 0x2b, 0x00, 0x00, 0x00, 0x4c, 0x45, 0x4e, 0x5f,
  0x4f, 0x55, 0x54, 0x00, 0x47, 0x00, 0x04, 0x00, 0x0b, 0x00, 0x00, 0x00,
  0x0b, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00,
  0x11, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x48, 0x00, 0x05, 0x00, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x03, 0x00,
  0x12, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00,
  0x14, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x47, 0x00, 0x04, 0x00, 0x14, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x18, 0x00, 0x00, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00,
  0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x03, 0x00, 0x19, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x1b, 0x00, 0x00, 0x00,
  0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00,
  0x1b, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x47, 0x00, 0x04, 0x00, 0x20, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x21, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x47, 0x00, 0x03, 0x00, 0x21, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x47, 0x00, 0x04, 0x00, 0x23, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x23, 0x00, 0x00, 0x00,
  0x21, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00,
  0x29, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x47, 0x00, 0x04, 0x00, 0x2a, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x2b, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00,
  0x2d, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00,
  0x13, 0x00, 0x02, 0x00, 0x02, 0x00, 0x00, 0x00, 0x21, 0x00, 0x03, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x15, 0x00, 0x04, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x20, 0x00, 0x04, 0x00, 0x07, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x09, 0x00, 0x00, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00,
  0x0a, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
  0x3b, 0x00, 0x04, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00,
  0x0d, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x16, 0x00, 0x03, 0x00, 0x10, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00,
  0x1d, 0x00, 0x03, 0x00, 0x11, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x1e, 0x00, 0x03, 0x00, 0x12, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00,
  0x20, 0x00, 0x04, 0x00, 0x13, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x13, 0x00, 0x00, 0x00,
  0x14, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x15, 0x00, 0x04, 0x00,
  0x15, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x2b, 0x00, 0x04, 0x00, 0x15, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x03, 0x00, 0x18, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x03, 0x00, 0x19, 0x00, 0x00, 0x00,
  0x18, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x1a, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00,
  0x1a, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x20, 0x00, 0x04, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x03, 0x00, 0x20, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x03, 0x00, 0x21, 0x00, 0x00, 0x00,
  0x20, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x22, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00,
  0x22, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x32, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x2a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x04, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x2b, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x06, 0x00, 0x09, 0x00, 0x00, 0x00,
  0x2d, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00,
  0x2c, 0x00, 0x00, 0x00, 0x36, 0x00, 0x05, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0xf8, 0x00, 0x02, 0x00, 0x05, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00,
  0x07, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,
  0x41, 0x00, 0x05, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00,
  0x0b, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00,
  0x3e, 0x00, 0x03, 0x00, 0x08, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00,
  0x3d, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x1c, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x41, 0x00, 0x06, 0x00,
  0x1d, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00,
  0x16, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00,
  0x3d, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x41, 0x00, 0x06, 0x00, 0x1d, 0x00, 0x00, 0x00,
  0x25, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00,
  0x24, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x26, 0x00, 0x00, 0x00, 0x25, 0x00, 0x00, 0x00, 0x85, 0x00, 0x05, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x27, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00,
  0x26, 0x00, 0x00, 0x00, 0x41, 0x00, 0x06, 0x00, 0x1d, 0x00, 0x00, 0x00,
  0x28, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00,
  0x17, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x28, 0x00, 0x00, 0x00,
  0x27, 0x00, 0x00, 0x00, 0xfd, 0x00, 0x01, 0x00, 0x38, 0x00, 0x01, 0x00
};
static unsigned const int shaders_glsl_opmult_comp_spv_len = 1464;
}
}
#endif // define SHADEROP_SHADEROPMULT_HPP

#include <unordered_map>

#define KP_MAX_DIM_SIZE 1

namespace kp {

/**
 * Structured data used in GPU operations.
 *
 * Tensors are the base building block in Kompute to perform operations across
 * GPUs. Each tensor would have a respective Vulkan memory and buffer, which
 * woudl be used to store their respective data. The tensors can be used for GPU
 * data storage or transfer.
 */
class Tensor
{
  public:
    /**
     * Type for tensors created: Device allows memory to be transferred from
     * staging buffers. Staging are host memory visible. Storage are device
     * visible but are not set up to transfer or receive data (only for shader
     * storage).
     */
    enum class TensorTypes
    {
        eDevice = 0,  ///< Type is device memory, source and destination
        eStaging = 1, ///< Type is host memory, source and destination
        eStorage = 2, ///< Type is Device memory (only)
    };

    /**
     *  Base constructor, should not be used unless explicitly intended.
     */
    Tensor();

    /**
     *  Default constructor with data provided which would be used to create the
     * respective vulkan buffer and memory.
     *
     *  @param data Vector of data that will be used by the tensor
     *  @param tensorType Type for the tensor which is of type TensorTypes
     */
    Tensor(const std::vector<float>& data,
           TensorTypes tensorType = TensorTypes::eDevice);

    /**
     * Destructor which is in charge of freeing vulkan resources unless they
     * have been provided externally.
     */
    ~Tensor();

    /**
     * Initialiser which calls the initialisation for all the respective tensors
     * as well as creates the respective staging tensors. The staging tensors
     * woudl only be created for the tensors of type TensorType::eDevice as
     * otherwise there is no need to copy from host memory.
     */
    void init(std::shared_ptr<vk::PhysicalDevice> physicalDevice,
              std::shared_ptr<vk::Device> device);

    /**
     * Destroys and frees the GPU resources which include the buffer and memory.
     */
    void freeMemoryDestroyGPUResources();

    /**
     * Returns the vector of data currently contained by the Tensor. It is
     * important to ensure that there is no out-of-sync data with the GPU
     * memory.
     *
     * @return Reference to vector of elements representing the data in the
     * tensor.
     */
    std::vector<float>& data();
    /**
     * Overrides the subscript operator to expose the underlying data's
     * subscript operator which in this case would be its underlying
     * vector's.
     *
     * @param i The index where the element will be returned from.
     * @return Returns the element in the position requested.
     */
    float& operator[](int index);
    /**
     * Returns the size/magnitude of the Tensor, which will be the total number
     * of elements across all dimensions
     *
     * @return Unsigned integer representing the total number of elements
     */
    uint32_t size();
    /**
     * Returns the shape of the tensor, which includes the number of dimensions
     * and the size per dimension.
     *
     * @return Array containing the sizes for each dimension. Zero means
     * respective dimension is not active.
     */
    std::array<uint32_t, KP_MAX_DIM_SIZE> shape();
    /**
     * Retrieve the tensor type of the Tensor
     *
     * @return Tensor type of tensor
     */
    TensorTypes tensorType();
    /**
     * Returns true if the tensor initialisation function has been carried out
     * successful, which would mean that the buffer and memory will have been
     * provisioned.
     */
    bool isInit();

    /**
     * Sets / resets the vector data of the tensor. This function does not
     * perform any copies into GPU memory and is only performed on the host.
     */
    void setData(const std::vector<float>& data);

    /**
     * Records a copy from the memory of the tensor provided to the current
     * thensor. This is intended to pass memory into a processing, to perform
     * a staging buffer transfer, or to gather output (between others).
     *
     * @param commandBuffer Vulkan Command Buffer to record the commands into
     * @param copyFromTensor Tensor to copy the data from
     * @param createBarrier Whether to create a barrier that ensures the data is
     * copied before further operations. Default is true.
     */
    void recordCopyFrom(std::shared_ptr<vk::CommandBuffer> commandBuffer,
                        std::shared_ptr<Tensor> copyFromTensor,
                        bool createBarrier);

    /**
     * Records the buffer memory barrier into the command buffer which
     * ensures that relevant data transfers are carried out correctly.
     *
     * @param commandBuffer Vulkan Command Buffer to record the commands into
     * @param srcAccessMask Access flags for source access mask
     * @param dstAccessMask Access flags for destination access mask
     * @param scrStageMask Pipeline stage flags for source stage mask
     * @param dstStageMask Pipeline stage flags for destination stage mask
     */
    void recordBufferMemoryBarrier(
      std::shared_ptr<vk::CommandBuffer> commandBuffer,
      vk::AccessFlagBits srcAccessMask,
      vk::AccessFlagBits dstAccessMask,
      vk::PipelineStageFlagBits srcStageMask,
      vk::PipelineStageFlagBits dstStageMask);

    /**
     * Constructs a vulkan descriptor buffer info which can be used to specify
     * and reference the underlying buffer component of the tensor without
     * exposing it.
     *
     * @return Descriptor buffer info with own buffer
     */
    vk::DescriptorBufferInfo constructDescriptorBufferInfo();
    /**
     * Maps data from the Host Visible GPU memory into the data vector. It
     * requires the Tensor to be of staging type for it to work.
     */
    void mapDataFromHostMemory();
    /**
     * Maps data from the data vector into the Host Visible GPU memory. It
     * requires the tensor to be of staging type for it to work.
     */
    void mapDataIntoHostMemory();

  private:
    // -------------- NEVER OWNED RESOURCES
    std::shared_ptr<vk::PhysicalDevice> mPhysicalDevice;
    std::shared_ptr<vk::Device> mDevice;

    // -------------- OPTIONALLY OWNED RESOURCES
    std::shared_ptr<vk::Buffer> mBuffer;
    bool mFreeBuffer;
    std::shared_ptr<vk::DeviceMemory> mMemory;
    bool mFreeMemory;

    // -------------- ALWAYS OWNED RESOURCES
    std::vector<float> mData;

    TensorTypes mTensorType = TensorTypes::eDevice;

    std::array<uint32_t, KP_MAX_DIM_SIZE> mShape;
    bool mIsInit = false;

    void createBuffer(); // Creates the vulkan buffer

    // Private util functions
    vk::BufferUsageFlags getBufferUsageFlags();
    vk::MemoryPropertyFlags getMemoryPropertyFlags();
    uint64_t memorySize();
};

} // End namespace kp

namespace kp {

/**
 *  Base Operation which provides the high level interface that Kompute
 *  operations implement in order to perform a set of actions in the GPU.
 *
 *  Operations can perform actions on tensors, and optionally can also own an
 *  Algorithm with respective parameters. kp::Operations with kp::Algorithms
 *  would inherit from kp::OpBaseAlgo.
 */
class OpBase
{
  public:
    /**
     *  Base constructor, should not be used unless explicitly intended.
     */
    OpBase() { SPDLOG_DEBUG("Compute OpBase base constructor"); }

    /**
     * Default constructor with parameters that provides the bare minimum
     * requirements for the operations to be able to create and manage their
     * sub-components.
     *
     * @param physicalDevice Vulkan physical device used to find device queues
     * @param device Vulkan logical device for passing to Algorithm
     * @param commandBuffer Vulkan Command Buffer to record commands into
     * @param tensors Tensors that are to be used in this operation
     * @param freeTensors Whether operation manages the memory of the Tensors
     */
    OpBase(std::shared_ptr<vk::PhysicalDevice> physicalDevice,
           std::shared_ptr<vk::Device> device,
           std::shared_ptr<vk::CommandBuffer> commandBuffer,
           std::vector<std::shared_ptr<Tensor>>& tensors,
           bool freeTensors)
    {
        SPDLOG_DEBUG("Compute OpBase constructor with params");

        this->mPhysicalDevice = physicalDevice;
        this->mDevice = device;
        this->mCommandBuffer = commandBuffer;
        this->mTensors = tensors;
        this->mFreeTensors = freeTensors;
    }

    /**
     * Default destructor for OpBase class. This OpBase destructor class should
     * always be called to destroy and free owned resources unless it is
     * intended to destroy the resources in the parent class. This can be done
     * by passing the mFreeTensors=false.
     */
    virtual ~OpBase()
    {
        SPDLOG_DEBUG("Kompute OpBase destructor started");

        if (!this->mDevice) {
            SPDLOG_WARN("Kompute OpBase destructor called with empty device");
            return;
        }

        if (this->mFreeTensors) {
            SPDLOG_DEBUG("Kompute OpBase freeing tensors");
            for (std::shared_ptr<Tensor> tensor : this->mTensors) {
                if (tensor && tensor->isInit()) {
                    tensor->freeMemoryDestroyGPUResources();
                } else {
                    SPDLOG_ERROR("Kompute OpBase expected to free "
                                  "tensor but has already been freed.");
                }
            }
        }
    }

    /**
     * The init function is responsible for setting up all the resources and
     * should be called after the Operation has been created.
     */
    virtual void init() = 0;

    /**
     * The record function is intended to only send a record command or run
     * commands that are expected to record operations that are to be submitted
     * as a batch into the GPU.
     */
    virtual void record() = 0;

    /**
     * Pre eval is called before the Sequence has called eval and submitted the commands to
     * the GPU for processing, and can be used to perform any per-eval setup steps
     * required as the computation iteration begins. It's worth noting that 
     * there are situations where eval can be called multiple times, so the 
     * resources that are created should be idempotent in case it's called multiple
     * times in a row.
     */
    virtual void preEval() = 0;

    /**
     * Post eval is called after the Sequence has called eval and submitted the commands to
     * the GPU for processing, and can be used to perform any tear-down steps
     * required as the computation iteration finishes. It's worth noting that 
     * there are situations where eval can be called multiple times, so the 
     * resources that are destroyed should not require a re-init unless explicitly
     * provided by the user.
     */
    virtual void postEval() = 0;

  protected:
    // -------------- NEVER OWNED RESOURCES
    std::shared_ptr<vk::PhysicalDevice>
      mPhysicalDevice;                   ///< Vulkan Physical Device
    std::shared_ptr<vk::Device> mDevice; ///< Vulkan Logical Device
    std::shared_ptr<vk::CommandBuffer>
      mCommandBuffer; ///< Vulkan Command Buffer

    // -------------- OPTIONALLY OWNED RESOURCES
    std::vector<std::shared_ptr<Tensor>>
      mTensors; ///< Tensors referenced by operation that can be managed
                ///< optionally by operation
    bool mFreeTensors = false; ///< Explicit boolean that specifies whether the
                               ///< tensors are freed (if they are managed)
};

} // End namespace kp

namespace kp {

/**
 *  Container of operations that can be sent to GPU as batch
 */
class Sequence
{
  public:
    /**
     *  Base constructor for Sequence. Should not be used unless explicit
     * intended.
     */
    Sequence();
    /**
     * Main constructor for sequence which requires core vulkan components to
     * generate all dependent resources.
     *
     * @param physicalDevice Vulkan physical device
     * @param device Vulkan logical device
     * @param computeQueue Vulkan compute queue
     * @param queueIndex Vulkan compute queue index in device
     */
    Sequence(std::shared_ptr<vk::PhysicalDevice> physicalDevice,
             std::shared_ptr<vk::Device> device,
             std::shared_ptr<vk::Queue> computeQueue,
             uint32_t queueIndex);
    /**
     * Destructor for sequence which is responsible for cleaning all subsequent
     * owned operations.
     */
    ~Sequence();

    /**
     * Initialises sequence including the creation of the command pool and the
     * command buffer.
     */
    void init();

    /**
     * Begins recording commands for commands to be submitted into the command
     * buffer.
     */
    bool begin();
    /**
     * Ends the recording and stops recording commands when the record command
     * is sent.
     */
    bool end();
    /**
     * Eval sends all the recorded and stored operations in the vector of
     * operations into the gpu as a submit job with a barrier.
     */
    bool eval();

    /**
     * Returns true if the sequence is currently in recording activated.
     *
     * @return Boolean stating if recording ongoing.
     */
    bool isRecording();

    /**
     * Returns true if the sequence has been successfully initialised.
     *
     * @return Boolean stating if sequence has been initialised.
     */
    bool isInit();

    /**
     * Record function for operation to be added to the GPU queue in batch. This
     * template requires classes to be derived from the OpBase class. This
     * function also requires the Sequence to be recording, otherwise it will
     * not be able to add the operation.
     *
     * @param tensors Vector of tensors to use for the operation
     * @param TArgs Template parameters that are used to initialise operation
     * which allows for extensible configurations on initialisation.
     */
    template<typename T, typename... TArgs>
    bool record(std::vector<std::shared_ptr<Tensor>> tensors, TArgs&&... params)
    {
        static_assert(std::is_base_of<OpBase, T>::value,
                      "Kompute Sequence record(...) template only valid with "
                      "OpBase derived classes");

        SPDLOG_DEBUG("Kompute Sequence record function started");

        if (!this->isRecording()) {
            SPDLOG_ERROR(
              "Kompute sequence record attempted when not record BEGIN");
            return false;
        }

        SPDLOG_DEBUG("Kompute Sequence creating OpBase derived class instance");
        T* op = new T(this->mPhysicalDevice,
                      this->mDevice,
                      this->mCommandBuffer,
                      tensors,
                      std::forward<TArgs>(params)...);

        OpBase* baseOp = dynamic_cast<OpBase*>(op);

        std::unique_ptr<OpBase> baseOpPtr{ baseOp };

        SPDLOG_DEBUG(
          "Kompute Sequence running init on OpBase derived class instance");
        baseOpPtr->init();

        SPDLOG_DEBUG(
          "Kompute Sequence running record on OpBase derived class instance");
        baseOpPtr->record();

        mOperations.push_back(std::move(baseOpPtr));

        return true;
    }

  private:
    // -------------- NEVER OWNED RESOURCES
    std::shared_ptr<vk::PhysicalDevice> mPhysicalDevice = nullptr;
    std::shared_ptr<vk::Device> mDevice = nullptr;
    std::shared_ptr<vk::Queue> mComputeQueue = nullptr;
    uint32_t mQueueIndex = -1;

    // -------------- OPTIONALLY OWNED RESOURCES
    std::shared_ptr<vk::CommandPool> mCommandPool = nullptr;
    bool mFreeCommandPool = false;
    std::shared_ptr<vk::CommandBuffer> mCommandBuffer = nullptr;
    bool mFreeCommandBuffer = false;

    // Base op objects
    std::vector<std::unique_ptr<OpBase>> mOperations;

    // State
    bool mIsInit = false;
    bool mRecording = false;

    // Create functions
    void createCommandPool();
    void createCommandBuffer();
};

} // End namespace kp

namespace kp {

/**
    Operation that creates tensor and manages the memory of the components
   created
*/
class OpTensorCreate : public OpBase
{
  public:
    OpTensorCreate();

    /**
     * Default constructor with parameters that provides the bare minimum
     * requirements for the operations to be able to create and manage their
     * sub-components.
     *
     * @param physicalDevice Vulkan physical device used to find device queues
     * @param device Vulkan logical device for passing to Algorithm
     * @param commandBuffer Vulkan Command Buffer to record commands into
     * @param tensors Tensors that will be used to create in operation.
     * @param freeTensors Whether operation manages the memory of the Tensors
     */
    OpTensorCreate(std::shared_ptr<vk::PhysicalDevice> physicalDevice,
                   std::shared_ptr<vk::Device> device,
                   std::shared_ptr<vk::CommandBuffer> commandBuffer,
                   std::vector<std::shared_ptr<Tensor>> tensors);

    /**
     * Default destructor which in this case expects the parent class to free
     * the tensors
     */
    ~OpTensorCreate() override;

    /**
     * In charge of initialising the primary Tensor as well as the staging
     * tensor as required. It will only initialise a staging tensor if the
     * Primary tensor is of type Device. For staging tensors it performs a 
     * mapDataIntoHostMemory which would perform immediately as opposed to 
     * on sequence eval/submission.
     */
    void init() override;

    /**
     * Record runs the core actions to create the tensors. For device tensors
     * it records a copyCommand to move the data from the staging tensor to the 
     * device tensor. The mapping for staging tensors happens in the init function
     * not in the record function.
     */
    void record() override;

    /**
     * Does not perform any preEval commands.
     */
    virtual void preEval() override;

    /**
     * Performs a copy back into the main tensor to ensure that the data
     * contained is the one that is now being stored in the GPU.
     */
    virtual void postEval() override;

  private:
    // Never owned resources
    std::vector<std::shared_ptr<Tensor>> mStagingTensors;
};

} // End namespace kp

#define KP_DEFAULT_SESSION "DEFAULT"

namespace kp {

/**
    Base orchestrator which creates and manages device and child components
*/
class Manager
{
  public:
    /**
        Base constructor and default used which creates the base resources
       including choosing the device 0 by default.
    */
    Manager();

    /**
        Similar to base constructor but allows the user to provide the device
       they would like to create the resources on.
    */
    Manager(uint32_t physicalDeviceIndex);

    /**
     * Manager constructor which allows your own vulkan application to integrate
     * with the vulkan kompute use.
     *
     * @param instance Vulkan compute instance to base this application
     * @physicalDevice Vulkan physical device to use for application
     * @device Vulkan logical device to use for all base resources
     * @physicalDeviceIndex Index for vulkan physical device used
     */
    Manager(std::shared_ptr<vk::Instance> instance,
            std::shared_ptr<vk::PhysicalDevice> physicalDevice,
            std::shared_ptr<vk::Device> device,
            uint32_t physicalDeviceIndex);

    /**
     * Manager destructor which would ensure all owned resources are destroyed
     * unless explicitly stated that resources should not be destroyed or freed.
     */
    ~Manager();

    /**
     * Get or create a managed Sequence that will be contained by this manager.
     * If the named sequence does not currently exist, it would be created and
     * initialised.
     *
     * @param sequenceName The name for the named sequence to be retrieved or
     * created
     * @return Weak pointer to the manager owned sequence resource
     */
    std::weak_ptr<Sequence> getOrCreateManagedSequence(
      std::string sequenceName);

    /**
     * Operation that adds extra operations to existing or new created
     * sequences.
     *
     * @param tensors The tensors to be used in the operation recorded
     * @param sequenceName The name of the sequence to be retrieved or created
     * @param TArgs Template parameters that will be used to initialise
     * Operation to allow for extensible configurations on initialisation
     */
    template<typename T, typename... TArgs>
    void evalOp(std::vector<std::shared_ptr<Tensor>> tensors,
                std::string sequenceName = KP_DEFAULT_SESSION,
                TArgs&&... params)
    {
        SPDLOG_DEBUG("Kompute Manager evalOp triggered");
        std::weak_ptr<Sequence> sqWeakPtr =
          this->getOrCreateManagedSequence(sequenceName);

        if (std::shared_ptr<kp::Sequence> sq = sqWeakPtr.lock()) {
            SPDLOG_DEBUG("Kompute Manager evalOp running sequence BEGIN");
            sq->begin();

            SPDLOG_DEBUG("Kompute Manager evalOp running sequence RECORD");
            sq->record<T>(tensors, std::forward<TArgs>(params)...);

            SPDLOG_DEBUG("Kompute Manager evalOp running sequence END");
            sq->end();

            SPDLOG_DEBUG("Kompute Manager evalOp running sequence EVAL");
            sq->eval();
        }
        SPDLOG_DEBUG("Kompute Manager evalOp running sequence SUCCESS");
    }

    /**
     * Operation that adds extra operations to existing or new created
     * sequences.
     *
     * @param tensors The tensors to be used in the operation recorded
     * @param sequenceName The name of the sequence to be retrieved or created
     * @param TArgs Template parameters that will be used to initialise
     * Operation to allow for extensible configurations on initialisation
     */
    template<typename T, typename... TArgs>
    void evalOpDefault(std::vector<std::shared_ptr<Tensor>> tensors,
                       TArgs&&... params)
    {
        SPDLOG_DEBUG("Kompute Manager evalOp Default triggered");
        this->evalOp<T>(
          tensors, KP_DEFAULT_SESSION, std::forward<TArgs>(params)...);
    }

    /**
     * Function that simplifies the common workflow of tensor creation and
     * initialization. It will take the constructor parameters for a Tensor
     * and will will us it to create a new Tensor and then create it using
     * the OpCreateTensor command.
     *
     * @param data The data to initialize the tensor with
     * @param tensorType The type of tensor to initialize
     * @returns Initialized Tensor with memory Syncd to GPU device
     */
    std::shared_ptr<Tensor> buildTensor(
      const std::vector<float>& data,
      Tensor::TensorTypes tensorType = Tensor::TensorTypes::eDevice)
    {
        SPDLOG_DEBUG("Kompute Manager createInitTensor triggered");

        SPDLOG_DEBUG("Kompute Manager creating new tensor shared ptr");
        std::shared_ptr<Tensor> tensor =
          std::make_shared<Tensor>(kp::Tensor(data, tensorType));

        this->evalOpDefault<OpTensorCreate>({ tensor });

        return tensor;
    }

  private:
    // -------------- OPTIONALLY OWNED RESOURCES
    std::shared_ptr<vk::Instance> mInstance = nullptr;
    bool mFreeInstance = false;
    std::shared_ptr<vk::PhysicalDevice> mPhysicalDevice = nullptr;
    uint32_t mPhysicalDeviceIndex = -1;
    std::shared_ptr<vk::Device> mDevice = nullptr;
    bool mFreeDevice = false;
    uint32_t mComputeQueueFamilyIndex = -1;
    std::shared_ptr<vk::Queue> mComputeQueue = nullptr;

    // -------------- ALWAYS OWNED RESOURCES
    std::unordered_map<std::string, std::shared_ptr<Sequence>>
      mManagedSequences;

#if DEBUG
    vk::DebugReportCallbackEXT mDebugReportCallback;
    vk::DispatchLoaderDynamic mDebugDispatcher;
#endif

    // Create functions
    void createInstance();
    void createDevice();
};

} // End namespace kp

#include <fstream>

namespace kp {

/**
    Abstraction for compute shaders that are run on top of tensors grouped via
   ParameterGroups (which group descriptorsets)
*/
class Algorithm
{
  public:
    /**
        Base constructor for Algorithm. Should not be used unless explicit
       intended.
    */
    Algorithm();

    /**
     *  Default constructor for Algorithm
     *
     *  @param device The Vulkan device to use for creating resources
     *  @param commandBuffer The vulkan command buffer to bind the pipeline and
     * shaders
     */
    Algorithm(std::shared_ptr<vk::Device> device,
              std::shared_ptr<vk::CommandBuffer> commandBuffer);

    /**
     * Initialiser for the shader data provided to the algoithm as well as
     * tensor parameters that will be used in shader.
     *
     * @param shaderFileData The bytes in spir-v format of the shader
     * @tensorParams The Tensors to be used in the Algorithm / shader for
     * processing
     */
    void init(const std::vector<char>& shaderFileData,
              std::vector<std::shared_ptr<Tensor>> tensorParams);

    /**
     * Destructor for Algorithm which is responsible for freeing and desroying
     * respective pipelines and owned parameter groups.
     */
    ~Algorithm();

    /**
     * Records the dispatch function with the provided template parameters or
     * alternatively using the size of the tensor by default.
     *
     * @param x Layout X dispatch value
     * @param y Layout Y dispatch value
     * @param z Layout Z dispatch value
     */
    void recordDispatch(uint32_t x = 1, uint32_t y = 1, uint32_t z = 1);

  private:
    // -------------- NEVER OWNED RESOURCES
    std::shared_ptr<vk::Device> mDevice;
    std::shared_ptr<vk::CommandBuffer> mCommandBuffer;

    // -------------- OPTIONALLY OWNED RESOURCES
    std::shared_ptr<vk::DescriptorSetLayout> mDescriptorSetLayout;
    bool mFreeDescriptorSetLayout = false;
    std::shared_ptr<vk::DescriptorPool> mDescriptorPool;
    bool mFreeDescriptorPool = false;
    std::shared_ptr<vk::DescriptorSet> mDescriptorSet;
    bool mFreeDescriptorSet = false;
    std::shared_ptr<vk::ShaderModule> mShaderModule;
    bool mFreeShaderModule = false;
    std::shared_ptr<vk::PipelineLayout> mPipelineLayout;
    bool mFreePipelineLayout = false;
    std::shared_ptr<vk::PipelineCache> mPipelineCache;
    bool mFreePipelineCache = false;
    std::shared_ptr<vk::Pipeline> mPipeline;
    bool mFreePipeline = false;

    // Create util functions
    void createShaderModule(const std::vector<char>& shaderFileData);
    void createPipeline(std::vector<uint32_t> specializationData = {});

    // Parameters
    void createParameters(std::vector<std::shared_ptr<Tensor>>& tensorParams);
    void createDescriptorPool();
};

} // End namespace kp

namespace kp {

/**
 * Operation that provides a general abstraction that simplifies the use of 
 * algorithm and parameter components which can be used with shaders.
 * By default it enables the user to provide a dynamic number of tensors
 * which are then passed as inputs. 
 *
 * All of these tensors are expected to be initlaised and this is checked with throw std exception in the init function.
 *
 * See OpLhsRhsOut for an example implementation on a more specific granularity on tensor parameters.
 * 
 * The template parameters specify the processing GPU layout number of
 * iterations for each x, y, z parameter. More specifically, this will be the
 * input to ".dispatch(uint32_t tX, uint32_t tY, uint32_t, tZ)"
 */
template<uint32_t tX = 0, uint32_t tY = 0, uint32_t tZ = 0>
class OpAlgoBase : public OpBase
{
  public:
    /**
     *  Base constructor, should not be used unless explicitly intended.
     */
    OpAlgoBase();

    /**
     * Default constructor with parameters that provides the bare minimum
     * requirements for the operations to be able to create and manage their
     * sub-components.
     *
     * @param physicalDevice Vulkan physical device used to find device queues
     * @param device Vulkan logical device for passing to Algorithm
     * @param commandBuffer Vulkan Command Buffer to record commands into
     * @param tensors Tensors that are to be used in this operation
     * @param shaderFilePath Optional parameter to specify the shader to load (either in spirv or raw format)
     */
    OpAlgoBase(std::shared_ptr<vk::PhysicalDevice> physicalDevice,
           std::shared_ptr<vk::Device> device,
           std::shared_ptr<vk::CommandBuffer> commandBuffer,
           std::vector<std::shared_ptr<Tensor>>& tensors);

    /**
     * Constructor that enables a file to be passed to the operation with
     * the contents of the shader. This can be either in raw format or in
     * compiled SPIR-V binary format.
     *
     * @param physicalDevice Vulkan physical device used to find device queues
     * @param device Vulkan logical device for passing to Algorithm
     * @param commandBuffer Vulkan Command Buffer to record commands into
     * @param tensors Tensors that are to be used in this operation
     * @param shaderFilePath Optional parameter to specify the shader to load (either in spirv or raw format)
     */
    OpAlgoBase(std::shared_ptr<vk::PhysicalDevice> physicalDevice,
           std::shared_ptr<vk::Device> device,
           std::shared_ptr<vk::CommandBuffer> commandBuffer,
           std::vector<std::shared_ptr<Tensor>>& tensors,
           std::string shaderFilePath);

    /**
     * Constructor that enables raw shader data to be passed to the main operation
     * which can be either in raw shader glsl code or in compiled SPIR-V binary.
     *
     * @param physicalDevice Vulkan physical device used to find device queues
     * @param device Vulkan logical device for passing to Algorithm
     * @param commandBuffer Vulkan Command Buffer to record commands into
     * @param tensors Tensors that are to be used in this operation
     * @param shaderDataRaw Optional parameter to specify the shader data either in binary or raw form
     */
    OpAlgoBase(std::shared_ptr<vk::PhysicalDevice> physicalDevice,
           std::shared_ptr<vk::Device> device,
           std::shared_ptr<vk::CommandBuffer> commandBuffer,
           std::vector<std::shared_ptr<Tensor>>& tensors,
           const std::vector<char>& shaderDataRaw);

    /**
     * Default destructor, which is in charge of destroying the algorithm
     * components but does not destroy the underlying tensors
     */
    virtual ~OpAlgoBase() override;

    /**
     * The init function is responsible for the initialisation of the algorithm
     * component based on the parameters specified, and allows for extensibility
     * on the options provided. Further dependent classes can perform more 
     * specific checks such as ensuring tensors provided are initialised, etc.
     */
    virtual void init() override;

    /**
     * This records the commands that are to be sent to the GPU. This includes
     * the barriers that ensure the memory has been copied before going in and
     * out of the shader, as well as the dispatch operation that sends the
     * shader processing to the gpu. This function also records the GPU memory
     * copy of the output data for the staging bufffer so it can be read by the
     * host.
     */
    virtual void record() override;

    /**
     * Does not perform any preEval commands.
     */
    virtual void preEval() override;

    /**
     * Executes after the recorded commands are submitted, and performs a copy
     * of the GPU Device memory into the staging buffer so the output data can
     * be retrieved.
     */
    virtual void postEval() override;

  protected:
    // -------------- NEVER OWNED RESOURCES

    // -------------- OPTIONALLY OWNED RESOURCES
    std::shared_ptr<Algorithm> mAlgorithm;
    bool mFreeAlgorithm = false;

    // -------------- ALWAYS OWNED RESOURCES

    uint32_t mX;
    uint32_t mY;
    uint32_t mZ;

    std::string mShaderFilePath; ///< Optional member variable which can be provided for the OpAlgoBase to find the data automatically and load for processing
    std::vector<char> mShaderDataRaw; ///< Optional member variable which can be provided to contain either the raw shader content or the spirv binary content

    virtual std::vector<char> fetchSpirvBinaryData();
};

} // End namespace kp

// Including implemenation for template class
#ifndef OPALGOBASE_IMPL
#define OPALGOBASE_IMPL

namespace kp {

template<uint32_t tX, uint32_t tY, uint32_t tZ>
OpAlgoBase<tX, tY, tZ>::OpAlgoBase()
{
    SPDLOG_DEBUG("Kompute OpAlgoBase constructor base");
}

template<uint32_t tX, uint32_t tY, uint32_t tZ>
OpAlgoBase<tX, tY, tZ>::OpAlgoBase(std::shared_ptr<vk::PhysicalDevice> physicalDevice,
                           std::shared_ptr<vk::Device> device,
                           std::shared_ptr<vk::CommandBuffer> commandBuffer,
                           std::vector<std::shared_ptr<Tensor>>& tensors)
  : OpBase(physicalDevice, device, commandBuffer, tensors, false)
{
    SPDLOG_DEBUG("Kompute OpAlgoBase constructor with params numTensors: {} , shaderFilePath: {}", tensors.size());

    // The dispatch size is set up based on either explicitly provided template
    // parameters or by default it would take the shape and size of the tensors
    if (tX > 0) {
        // If at least the x value is provided we use mainly the parameters
        // provided
        this->mX = tX;
        this->mY = tY > 0 ? tY : 1;
        this->mZ = tZ > 0 ? tZ : 1;
    } else {
        this->mX = tensors[0]->size();
        this->mY = 1;
        this->mZ = 1;
    }
    SPDLOG_INFO("Kompute OpAlgoBase dispatch size X: {}, Y: {}, Z: {}",
                 this->mX,
                 this->mY,
                 this->mZ);

    this->mAlgorithm = std::make_shared<Algorithm>(device, commandBuffer);
}

template<uint32_t tX, uint32_t tY, uint32_t tZ>
OpAlgoBase<tX, tY, tZ>::OpAlgoBase(std::shared_ptr<vk::PhysicalDevice> physicalDevice,
                           std::shared_ptr<vk::Device> device,
                           std::shared_ptr<vk::CommandBuffer> commandBuffer,
                           std::vector<std::shared_ptr<Tensor>>& tensors,
                           std::string shaderFilePath)
  : OpAlgoBase(physicalDevice, device, commandBuffer, tensors)
{
    SPDLOG_DEBUG("Kompute OpAlgoBase shaderFilePath constructo with shaderfile path: {}", shaderFilePath);

    this->mShaderFilePath = shaderFilePath;
}

template<uint32_t tX, uint32_t tY, uint32_t tZ>
OpAlgoBase<tX, tY, tZ>::OpAlgoBase(std::shared_ptr<vk::PhysicalDevice> physicalDevice,
                           std::shared_ptr<vk::Device> device,
                           std::shared_ptr<vk::CommandBuffer> commandBuffer,
                           std::vector<std::shared_ptr<Tensor>>& tensors,
                           const std::vector<char>& shaderDataRaw)
  : OpAlgoBase(physicalDevice, device, commandBuffer, tensors)
{
    SPDLOG_DEBUG("Kompute OpAlgoBase shaderFilePath constructo with shader raw data length: {}", shaderDataRaw.size());

    this->mShaderDataRaw = shaderDataRaw;
}

template<uint32_t tX, uint32_t tY, uint32_t tZ>
OpAlgoBase<tX, tY, tZ>::~OpAlgoBase()
{
    SPDLOG_DEBUG("Kompute OpAlgoBase destructor started");
}

template<uint32_t tX, uint32_t tY, uint32_t tZ>
void
OpAlgoBase<tX, tY, tZ>::init()
{
    SPDLOG_DEBUG("Kompute OpAlgoBase init called");

    if (this->mTensors.size() < 1) {
        throw std::runtime_error(
          "Kompute OpAlgoBase called with less than 1 tensor");
    } 

    for (std::shared_ptr<Tensor> tensor : this->mTensors) {
        if(!tensor->isInit()) {
            throw std::runtime_error("Kompute OpAlgoBase validation failed; all tensor parameters must be initialised.");
        }
    }

    SPDLOG_DEBUG("Kompute OpAlgoBase fetching spirv data");

    std::vector<char>& shaderFileData = this->fetchSpirvBinaryData();

    SPDLOG_DEBUG("Kompute OpAlgoBase Initialising algorithm component");

    this->mAlgorithm->init(shaderFileData, this->mTensors);
}

template<uint32_t tX, uint32_t tY, uint32_t tZ>
void
OpAlgoBase<tX, tY, tZ>::record()
{
    SPDLOG_DEBUG("Kompute OpAlgoBase record called");

    // Barrier to ensure the data is finished writing to buffer memory
    for (std::shared_ptr<Tensor> tensor : this->mTensors) {
        tensor->recordBufferMemoryBarrier(
          this->mCommandBuffer,
          vk::AccessFlagBits::eHostWrite,
          vk::AccessFlagBits::eShaderRead,
          vk::PipelineStageFlagBits::eHost,
          vk::PipelineStageFlagBits::eComputeShader);
    }

    this->mAlgorithm->recordDispatch(this->mX, this->mY, this->mZ);
}

template<uint32_t tX, uint32_t tY, uint32_t tZ>
void
OpAlgoBase<tX, tY, tZ>::preEval()
{
    SPDLOG_DEBUG("Kompute OpAlgoBase preEval called");
}

template<uint32_t tX, uint32_t tY, uint32_t tZ>
void
OpAlgoBase<tX, tY, tZ>::postEval()
{
    SPDLOG_DEBUG("Kompute OpAlgoBase postSubmit called");
}

template<uint32_t tX, uint32_t tY, uint32_t tZ>
std::vector<char> OpAlgoBase<tX, tY, tZ>::fetchSpirvBinaryData() 
{
    SPDLOG_WARN(
      "Kompute OpAlgoBase Running shaders directly from spirv file");

    if (this->mShaderFilePath.size()) {
        std::ifstream fileStream(this->mShaderFilePath,
                                 std::ios::binary | std::ios::in | std::ios::ate);

        if (!fileStream.good()) {
            throw std::runtime_error("Error reading file: " + this->mShaderFilePath);
        }

        size_t shaderFileSize = fileStream.tellg();
        fileStream.seekg(0, std::ios::beg);
        char* shaderDataRaw = new char[shaderFileSize];
        fileStream.read(shaderDataRaw, shaderFileSize);
        fileStream.close();

        SPDLOG_WARN(
          "Kompute OpAlgoBase fetched {} bytes", shaderFileSize);

        return std::vector<char>(shaderDataRaw,
                                 shaderDataRaw + shaderFileSize);
    }
    else if (this->mShaderDataRaw.size()) {
        return this->mShaderDataRaw;
    }
    else {
        throw std::runtime_error("Kompute OpAlgoBase Error reached fetchSpirvBinaryData but neither filepath nor data provided");
    }
}

}

#endif // #ifndef OPALGOBASE_IMPL

#include <fstream>

namespace kp {

/**
 * Operation base class to simplify the creation of operations that require
 * right hand and left hand side datapoints together with a single output.
 * The expected data passed is two input tensors and one output tensor.
 * The template parameters specify the processing GPU layout number of
 * iterations for each x, y, z parameter. More specifically, this will be the
 * input to ".dispatch(uint32_t tX, uint32_t tY, uint32_t, tZ)"
 */
template<uint32_t tX = 0, uint32_t tY = 0, uint32_t tZ = 0>
class OpAlgoLhsRhsOut : public OpAlgoBase<tX, tY, tZ>
{
  public:
    /**
     *  Base constructor, should not be used unless explicitly intended.
     */
    OpAlgoLhsRhsOut();

    /**
     * Default constructor with parameters that provides the bare minimum
     * requirements for the operations to be able to create and manage their
     * sub-components.
     *
     * @param physicalDevice Vulkan physical device used to find device queues
     * @param device Vulkan logical device for passing to Algorithm
     * @param commandBuffer Vulkan Command Buffer to record commands into
     * @param tensors Tensors that are to be used in this operation
     * @param freeTensors Whether operation manages the memory of the Tensors
     */
    OpAlgoLhsRhsOut(std::shared_ptr<vk::PhysicalDevice> physicalDevice,
           std::shared_ptr<vk::Device> device,
           std::shared_ptr<vk::CommandBuffer> commandBuffer,
           std::vector<std::shared_ptr<Tensor>> tensors);

    /**
     * Default destructor, which is in charge of destroying the algorithm
     * components but does not destroy the underlying tensors
     */
    virtual ~OpAlgoLhsRhsOut() override;

    /**
     * The init function is responsible for ensuring that all of the tensors
     * provided are aligned with requirements such as LHS, RHS and Output
     * tensors, and  creates the algorithm component which processes the
     * computation.
     */
    virtual void init() override;

    /**
     * This records the commands that are to be sent to the GPU. This includes
     * the barriers that ensure the memory has been copied before going in and
     * out of the shader, as well as the dispatch operation that sends the
     * shader processing to the gpu. This function also records the GPU memory
     * copy of the output data for the staging bufffer so it can be read by the
     * host.
     */
    virtual void record() override;

    /**
     * Executes after the recorded commands are submitted, and performs a copy
     * of the GPU Device memory into the staging buffer so the output data can
     * be retrieved.
     */
    virtual void postSubmit() override;

  protected:
    // -------------- NEVER OWNED RESOURCES
    std::shared_ptr<Tensor> mTensorLHS; ///< Reference to the parameter used in the left hand side equation of the shader
    std::shared_ptr<Tensor> mTensorRHS; ///< Reference to the parameter used in the right hand side equation of the shader
    std::shared_ptr<Tensor> mTensorOutput; ///< Reference to the parameter used in the output of the shader and will be copied with a staging vector

    // -------------- ALWAYS OWNED RESOURCES
    std::shared_ptr<Tensor> mTensorOutputStaging; ///< Staging temporary tensor user do to copy the output of the tensor
};

} // End namespace kp

// Including implemenation for template class
#ifndef OPALGOLHSRHSOUT_CPP
#define OPALGOLHSRHSOUT_CPP

namespace kp {

template<uint32_t tX, uint32_t tY, uint32_t tZ>
OpAlgoLhsRhsOut<tX, tY, tZ>::OpAlgoLhsRhsOut()
{
    SPDLOG_DEBUG("Kompute OpAlgoLhsRhsOut constructor base");
}

template<uint32_t tX, uint32_t tY, uint32_t tZ>
OpAlgoLhsRhsOut<tX, tY, tZ>::OpAlgoLhsRhsOut(std::shared_ptr<vk::PhysicalDevice> physicalDevice,
                           std::shared_ptr<vk::Device> device,
                           std::shared_ptr<vk::CommandBuffer> commandBuffer,
                           std::vector<std::shared_ptr<Tensor>> tensors)
  // The inheritance is initialised with the copyOutputData to false given that
  // this depencendant class handles the transfer of data via staging buffers in 
  // a granular way.
  : OpAlgoBase<tX, tY, tZ>(physicalDevice, device, commandBuffer, tensors)
{
    SPDLOG_DEBUG("Kompute OpAlgoLhsRhsOut constructor with params");
}

template<uint32_t tX, uint32_t tY, uint32_t tZ>
OpAlgoLhsRhsOut<tX, tY, tZ>::~OpAlgoLhsRhsOut()
{
    SPDLOG_DEBUG("Kompute OpAlgoLhsRhsOut destructor started");
}

template<uint32_t tX, uint32_t tY, uint32_t tZ>
void
OpAlgoLhsRhsOut<tX, tY, tZ>::init()
{
    SPDLOG_DEBUG("Kompute OpAlgoLhsRhsOut init called");

    if (this->mTensors.size() < 3) {
        throw std::runtime_error(
          "Kompute OpAlgoLhsRhsOut called with less than 1 tensor");
    } else if (this->mTensors.size() > 3) {
        SPDLOG_WARN("Kompute OpAlgoLhsRhsOut called with more than 3 this->mTensors");
    }

    this->mTensorLHS = this->mTensors[0];
    this->mTensorRHS = this->mTensors[1];
    this->mTensorOutput = this->mTensors[2];

    if (!(this->mTensorLHS->isInit() && this->mTensorRHS->isInit() &&
          this->mTensorOutput->isInit())) {
        throw std::runtime_error(
          "Kompute OpAlgoLhsRhsOut all tensor parameters must be initialised. LHS: " +
          std::to_string(this->mTensorLHS->isInit()) +
          " RHS: " + std::to_string(this->mTensorRHS->isInit()) +
          " Output: " + std::to_string(this->mTensorOutput->isInit()));
    }

    if (!(this->mTensorLHS->size() == this->mTensorRHS->size() &&
          this->mTensorRHS->size() == this->mTensorOutput->size())) {
        throw std::runtime_error(
          "Kompute OpAlgoLhsRhsOut all tensor parameters must be the same size LHS: " +
          std::to_string(this->mTensorLHS->size()) +
          " RHS: " + std::to_string(this->mTensorRHS->size()) +
          " Output: " + std::to_string(this->mTensorOutput->size()));
    }

    this->mTensorOutputStaging = std::make_shared<Tensor>(
      this->mTensorOutput->data(), Tensor::TensorTypes::eStaging);

    this->mTensorOutputStaging->init(
      this->mPhysicalDevice, this->mDevice, this->mCommandBuffer);

    SPDLOG_DEBUG("Kompute OpAlgoLhsRhsOut fetching spirv data");

    std::vector<char>& shaderFileData = this->fetchSpirvBinaryData();

    SPDLOG_DEBUG("Kompute OpAlgoLhsRhsOut Initialising algorithm component");

    this->mAlgorithm->init(shaderFileData, this->mTensors);
}

template<uint32_t tX, uint32_t tY, uint32_t tZ>
void
OpAlgoLhsRhsOut<tX, tY, tZ>::record()
{
    SPDLOG_DEBUG("Kompute OpAlgoLhsRhsOut record called");

    // Barrier to ensure the data is finished writing to buffer memory
    this->mTensorLHS->recordBufferMemoryBarrier(
      this->mCommandBuffer,
      vk::AccessFlagBits::eHostWrite,
      vk::AccessFlagBits::eShaderRead,
      vk::PipelineStageFlagBits::eHost,
      vk::PipelineStageFlagBits::eComputeShader);
    this->mTensorRHS->recordBufferMemoryBarrier(
      this->mCommandBuffer,
      vk::AccessFlagBits::eHostWrite,
      vk::AccessFlagBits::eShaderRead,
      vk::PipelineStageFlagBits::eHost,
      vk::PipelineStageFlagBits::eComputeShader);

    this->mAlgorithm->recordDispatch(this->mX, this->mY, this->mZ);

    // Barrier to ensure the shader code is executed before buffer read
    this->mTensorOutput->recordBufferMemoryBarrier(
      this->mCommandBuffer,
      vk::AccessFlagBits::eShaderWrite,
      vk::AccessFlagBits::eTransferRead,
      vk::PipelineStageFlagBits::eComputeShader,
      vk::PipelineStageFlagBits::eTransfer);

    this->mTensorOutputStaging->recordCopyFrom(
            this->mCommandBuffer,
            this->mTensorOutput,
            true);
}

template<uint32_t tX, uint32_t tY, uint32_t tZ>
void
OpAlgoLhsRhsOut<tX, tY, tZ>::postSubmit()
{
    SPDLOG_DEBUG("Kompute OpAlgoLhsRhsOut postSubmit called");

    this->mTensorOutputStaging->mapDataFromHostMemory();

    this->mTensorOutput->setData(this->mTensorOutputStaging->data());
}

}

#endif // #ifndef OPALGOLHSRHSOUT_CPP

#include <fstream>

#if RELEASE

#endif

namespace kp {

/**
 * Operation that performs multiplication on two tensors and outpus on third
 * tensor. The template parameters specify the processing GPU layout number of
 * iterations for each x, y, z parameter. More specifically, this will be the
 * input to ".dispatch(uint32_t tX, uint32_t tY, uint32_t, tZ)"
 */
template<uint32_t tX = 0, uint32_t tY = 0, uint32_t tZ = 0>
class OpMult : public OpAlgoBase<tX, tY, tZ>
{
  public:
    /**
     *  Base constructor, should not be used unless explicitly intended.
     */
    OpMult() {

    }

    /**
     * Default constructor with parameters that provides the bare minimum
     * requirements for the operations to be able to create and manage their
     * sub-components.
     *
     * @param physicalDevice Vulkan physical device used to find device queues
     * @param device Vulkan logical device for passing to Algorithm
     * @param commandBuffer Vulkan Command Buffer to record commands into
     * @param tensors Tensors that are to be used in this operation
     * @param freeTensors Whether operation manages the memory of the Tensors
     */
    OpMult(std::shared_ptr<vk::PhysicalDevice> physicalDevice,
           std::shared_ptr<vk::Device> device,
           std::shared_ptr<vk::CommandBuffer> commandBuffer,
           std::vector<std::shared_ptr<Tensor>> tensors)
      : OpAlgoBase<tX, tY, tZ>(physicalDevice, device, commandBuffer, tensors, "")
    {
        SPDLOG_DEBUG("Kompute OpMult constructor with params");

#ifndef RELEASE
        this->mShaderFilePath = "shaders/glsl/opmult.comp";
#endif
    }

#if RELEASE
    /**
     * If release it will be using the static version of the shader which is 
     * loaded using this file directly.
     *
     * @param physicalDevice Vulkan physical device used to find device queues
     * @param device Vulkan logical device for passing to Algorithm
     * @param commandBuffer Vulkan Command Buffer to record commands into
     * @param tensors Tensors that are to be used in this operation
     * @param freeTensors Whether operation manages the memory of the Tensors
     */
    std::vector<char> fetchSpirvBinaryData() override
    {
        SPDLOG_WARN(
          "Kompute OpMult Running shaders directly from header");

        return std::vector<char>(
          shader_data::shaders_glsl_opmult_comp_spv,
          shader_data::shaders_glsl_opmult_comp_spv +
            kp::shader_data::shaders_glsl_opmult_comp_spv_len);

    }
#endif

    /**
     * Default destructor, which is in charge of destroying the algorithm
     * components but does not destroy the underlying tensors
     */
    ~OpMult() override {
        SPDLOG_DEBUG("Kompute OpMult destructor started");
    }

};

} // End namespace kp

namespace kp {

/**
    Operation that copies the data from the first tensor to the rest of the tensors provided, using a record command for all the vectors. This operation does not own/manage the memory of the tensors passed to it. The operation must only receive tensors of type 
*/
class OpTensorCopy : public OpBase
{
  public:
    OpTensorCopy();

    /**
     * Default constructor with parameters that provides the core vulkan resources and the tensors that will be used in the operation.
     *
     * @param physicalDevice Vulkan physical device used to find device queues
     * @param device Vulkan logical device for passing to Algorithm
     * @param commandBuffer Vulkan Command Buffer to record commands into
     * @param tensors Tensors that will be used to create in operation.
     */
    OpTensorCopy(std::shared_ptr<vk::PhysicalDevice> physicalDevice,
                   std::shared_ptr<vk::Device> device,
                   std::shared_ptr<vk::CommandBuffer> commandBuffer,
                   std::vector<std::shared_ptr<Tensor>> tensors);

    /**
     * Default destructor. This class does not manage memory so it won't be expecting the parent to perform a release.
     */
    ~OpTensorCopy() override;

    /**
     * Performs basic checks such as ensuring there are at least two tensors provided, that they are initialised and that they are not of type TensorTypes::eStorage.
     */
    void init() override;

    /**
     * Records the copy commands from teh first tensor into all the other tensors provided. Also optionally records a barrier.
     */
    void record() override;

    /**
     * Does not perform any preEval commands.
     */
    virtual void preEval() override;

    /**
     * Copies the local vectors for all the tensors to sync the data with the gpu.
     */
    virtual void postEval() override;

  private:
};

} // End namespace kp

namespace kp {

/**
    Operation that syncs tensor's device by mapping local data into the device memory. For TensorTypes::eDevice it will use a staging tensor to perform the copy. For TensorTypes::eStaging it will only copy the data and perform a map, which will be executed during the record (as opposed to during the sequence eval/submit). This function cannot be carried out for TensorTypes::eStaging.
*/
class OpTensorSyncDevice : public OpBase
{
  public:
    OpTensorSyncDevice();

    /**
     * Default constructor with parameters that provides the core vulkan resources and the tensors that will be used in the operation. The tensos provided cannot be of type TensorTypes::eStorage.
     *
     * @param physicalDevice Vulkan physical device used to find device queues
     * @param device Vulkan logical device for passing to Algorithm
     * @param commandBuffer Vulkan Command Buffer to record commands into
     * @param tensors Tensors that will be used to create in operation.
     */
    OpTensorSyncDevice(std::shared_ptr<vk::PhysicalDevice> physicalDevice,
                   std::shared_ptr<vk::Device> device,
                   std::shared_ptr<vk::CommandBuffer> commandBuffer,
                   std::vector<std::shared_ptr<Tensor>> tensors);

    /**
     * Default destructor. This class does not manage memory so it won't be expecting the parent to perform a release.
     */
    ~OpTensorSyncDevice() override;

    /**
     * Performs basic checks such as ensuring that there is at least one tensor provided, that they are initialized and that they are not of type TensorTpes::eStaging. For staging tensors in host memory, the map is performed during the init function.
     */
    void init() override;

    /**
     * For device tensors, it records the copy command to the device tensor from the temporary staging tensor.
     */
    void record() override;

    /**
     * Does not perform any preEval commands.
     */
    virtual void preEval() override;

    /**
     * Does not perform any postEval commands.
     */
    virtual void postEval() override;

  private:
    // Never owned resources
    std::vector<std::shared_ptr<Tensor>> mStagingTensors;
};

} // End namespace kp

namespace kp {

/**
    Operation that syncs tensor's local data by mapping the data from device memory into the local vector. For TensorTypes::eDevice it will use a staging tensor to perform the copy. For TensorTypes::eStaging it will only copy the data and perform a map, which will be executed during the postSubmit (there will be no copy during the sequence eval/submit). This function cannot be carried out for TensorTypes::eStaging.
*/
class OpTensorSyncLocal : public OpBase
{
  public:
    OpTensorSyncLocal();

    /**
     * Default constructor with parameters that provides the core vulkan resources and the tensors that will be used in the operation. The tensors provided cannot be of type TensorTypes::eStorage.
     *
     * @param physicalDevice Vulkan physical device used to find device queues
     * @param device Vulkan logical device for passing to Algorithm
     * @param commandBuffer Vulkan Command Buffer to record commands into
     * @param tensors Tensors that will be used to create in operation.
     */
    OpTensorSyncLocal(std::shared_ptr<vk::PhysicalDevice> physicalDevice,
                   std::shared_ptr<vk::Device> device,
                   std::shared_ptr<vk::CommandBuffer> commandBuffer,
                   std::vector<std::shared_ptr<Tensor>> tensors);

    /**
     * Default destructor. This class manages the memory of the staging tensors it owns but these are released in the postSubmit, before it arrives to the destructor.
     */
    ~OpTensorSyncLocal() override;

    /**
     * Performs basic checks such as ensuring that there is at least one tensor provided, that they are initialized and that they are not of type TensorTpes::eStaging.
     */
    void init() override;

    /**
     * For device tensors, it records the copy command into the staging tensor from the device tensor.
     */
    void record() override;

    /**
     * Does not perform any preEval commands.
     */
    virtual void preEval() override;

    /**
     * For host tensors it performs the map command from the host memory into local memory.
     */
    virtual void postEval() override;

  private:
    // Never owned resources
    std::vector<std::shared_ptr<Tensor>> mStagingTensors;
};

} // End namespace kp
