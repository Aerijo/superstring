cmake_minimum_required(VERSION 3.13)
project(superstring)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread -Wall")

add_compile_definitions(HAVE_CONFIG_H)
add_compile_definitions(PCRE2_CODE_UNIT_WIDTH=8)
add_compile_definitions(SUPPORT_JIT)

include_directories(src/core)
include_directories(vendor)
include_directories(vendor/libcxx)
include_directories(vendor/pcre2-10.32/src)

add_executable(superstring
        vendor/pcre2-10.32/src/pcre2_auto_possess.c
        vendor/pcre2-10.32/src/pcre2_chartables.c
        vendor/pcre2-10.32/src/pcre2_compile.c
        vendor/pcre2-10.32/src/pcre2_config.c
        vendor/pcre2-10.32/src/pcre2_context.c
        vendor/pcre2-10.32/src/pcre2_convert.c
        vendor/pcre2-10.32/src/pcre2_dfa_match.c
        vendor/pcre2-10.32/src/pcre2_error.c
        vendor/pcre2-10.32/src/pcre2_extuni.c
        vendor/pcre2-10.32/src/pcre2_find_bracket.c
        vendor/pcre2-10.32/src/pcre2_jit_compile.c
        vendor/pcre2-10.32/src/pcre2_maketables.c
        vendor/pcre2-10.32/src/pcre2_match.c
        vendor/pcre2-10.32/src/pcre2_match_data.c
        vendor/pcre2-10.32/src/pcre2_newline.c
        vendor/pcre2-10.32/src/pcre2_ord2utf.c
        vendor/pcre2-10.32/src/pcre2_pattern_info.c
        vendor/pcre2-10.32/src/pcre2_serialize.c
        vendor/pcre2-10.32/src/pcre2_string_utils.c
        vendor/pcre2-10.32/src/pcre2_study.c
        vendor/pcre2-10.32/src/pcre2_substitute.c
        vendor/pcre2-10.32/src/pcre2_substring.c
        vendor/pcre2-10.32/src/pcre2_tables.c
        vendor/pcre2-10.32/src/pcre2_ucd.c
        vendor/pcre2-10.32/src/pcre2_valid_utf.c
        vendor/pcre2-10.32/src/pcre2_xclass.c

        src/core/encoding-conversion.cc
        src/core/regex.cc
        src/core/marker-index.cc
        src/core/range.cc
        src/core/patch.cc
        src/core/point.cc
        src/core/text-slice.cc
        src/core/text-slice.cc
        src/core/text.cc
        src/core/text-buffer.cc

        src/main.cpp src/core/char8_t.h)
