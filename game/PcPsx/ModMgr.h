#pragma once

#include "Doom/cdmaptbl.h"
#include "Wess/psxcd.h"

namespace ModMgr {
    void init(const int argc, const char** const argv) noexcept;
    void shutdown() noexcept;

    // File overrides mechanism
    bool areOverridesAvailableForFile(const CdMapTbl_File discFile) noexcept;
    bool isFileOverriden(const PsxCd_File& file) noexcept;
    bool openOverridenFile(const CdMapTbl_File discFile, PsxCd_File& fileOut) noexcept;
    void closeOverridenFile(PsxCd_File& file) noexcept;
    int32_t readFromOverridenFile(void* const pDest, int32_t numBytes, PsxCd_File& file) noexcept;
    int32_t seekForOverridenFile(PsxCd_File& file, int32_t offset, const PsxCd_SeekMode mode) noexcept;
    int32_t tellForOverridenFile(PsxCd_File& file) noexcept;
}