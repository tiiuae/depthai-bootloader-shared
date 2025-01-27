#include "depthai-bootloader-shared/Bootloader.hpp"

namespace dai {
namespace bootloader {

// Bootloader.hpp definitions

// Requests
decltype(request::UsbRomBoot::VERSION) constexpr request::UsbRomBoot::VERSION;
decltype(request::UsbRomBoot::NAME) constexpr request::UsbRomBoot::NAME;
decltype(request::BootApplication::VERSION) constexpr request::BootApplication::VERSION;
decltype(request::BootApplication::NAME) constexpr request::BootApplication::NAME;
decltype(request::UpdateFlash::VERSION) constexpr request::UpdateFlash::VERSION;
decltype(request::UpdateFlash::NAME) constexpr request::UpdateFlash::NAME;
decltype(request::GetBootloaderVersion::VERSION) constexpr request::GetBootloaderVersion::VERSION;
decltype(request::GetBootloaderVersion::NAME) constexpr request::GetBootloaderVersion::NAME;
decltype(request::BootMemory::VERSION) constexpr request::BootMemory::VERSION;
decltype(request::BootMemory::NAME) constexpr request::BootMemory::NAME;
decltype(request::UpdateFlashEx::VERSION) constexpr request::UpdateFlashEx::VERSION;
decltype(request::UpdateFlashEx::NAME) constexpr request::UpdateFlashEx::NAME;
decltype(request::UpdateFlashEx2::VERSION) constexpr request::UpdateFlashEx2::VERSION;
decltype(request::UpdateFlashEx2::NAME) constexpr request::UpdateFlashEx2::NAME;
decltype(request::GetBootloaderType::VERSION) constexpr request::GetBootloaderType::VERSION;
decltype(request::GetBootloaderType::NAME) constexpr request::GetBootloaderType::NAME;
decltype(request::SetBootloaderConfig::VERSION) constexpr request::SetBootloaderConfig::VERSION;
decltype(request::SetBootloaderConfig::NAME) constexpr request::SetBootloaderConfig::NAME;
decltype(request::GetBootloaderConfig::VERSION) constexpr request::GetBootloaderConfig::VERSION;
decltype(request::GetBootloaderConfig::NAME) constexpr request::GetBootloaderConfig::NAME;
decltype(request::BootloaderMemory::VERSION) constexpr request::BootloaderMemory::VERSION;
decltype(request::BootloaderMemory::NAME) constexpr request::BootloaderMemory::NAME;
decltype(request::GetBootloaderCommit::VERSION) constexpr request::GetBootloaderCommit::VERSION;
decltype(request::GetBootloaderCommit::NAME) constexpr request::GetBootloaderCommit::NAME;

// Responses
decltype(response::FlashComplete::VERSION) constexpr response::FlashComplete::VERSION;
decltype(response::FlashComplete::NAME) constexpr response::FlashComplete::NAME;
decltype(response::FlashStatusUpdate::VERSION) constexpr response::FlashStatusUpdate::VERSION;
decltype(response::FlashStatusUpdate::NAME) constexpr response::FlashStatusUpdate::NAME;
decltype(response::BootloaderVersion::VERSION) constexpr response::BootloaderVersion::VERSION;
decltype(response::BootloaderVersion::NAME) constexpr response::BootloaderVersion::NAME;
decltype(response::BootloaderType::VERSION) constexpr response::BootloaderType::VERSION;
decltype(response::BootloaderType::NAME) constexpr response::BootloaderType::NAME;
decltype(response::GetBootloaderConfig::VERSION) constexpr response::GetBootloaderConfig::VERSION;
decltype(response::GetBootloaderConfig::NAME) constexpr response::GetBootloaderConfig::NAME;
decltype(response::BootloaderMemory::VERSION) constexpr response::BootloaderMemory::VERSION;
decltype(response::BootloaderMemory::NAME) constexpr response::BootloaderMemory::NAME;
decltype(response::BootApplication::VERSION) constexpr response::BootApplication::VERSION;
decltype(response::BootApplication::NAME) constexpr response::BootApplication::NAME;
decltype(response::BootloaderCommit::VERSION) constexpr response::BootloaderCommit::VERSION;
decltype(response::BootloaderCommit::NAME) constexpr response::BootloaderCommit::NAME;

}  // namespace bootloader
}  // namespace dai