add_library(
    PeiPcdLib STATIC
    PeiPcdLib.c
)

get_filename_component(PARENT_DIR ${CMAKE_CURRENT_SOURCE_DIR} DIRECTORY)
message(STATUS "PeiPcdLib PARENT_DIR is ${PARENT_DIR}")

target_include_directories(PeiPcdLib PUBLIC
    "${EDK2_MDEPKG_DIR}/Include"
    "${EDK2_MDEPKG_DIR}/Include/X64"
    )

