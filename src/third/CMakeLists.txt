set(third_path ${PROJECT_SOURCE_DIR}/src/third)

include(${third_path}/fmt/CMakeLists.txt)
include(${third_path}/probuf_3.6.1/CMakeLists.txt)
include(${third_path}/libevent/CMakeLists.txt)
include(${third_path}/spdlog/CMakeLists.txt)
set(THIRD_HEADER 
    ${THIRD_FMT_H} 
    ${PROBUF_H}
    ${LIBEVENT_H}
    ${SPDLOG_H}
)
set(THIRD_SRC 
    ${THIRD_FMT_CPP}
)
set(THIRD_LIB 
    ${PROBUF_LIB}
    ${LIBEVENT_LIB}
    ${SPDLOG_NEED_LIB}
)
set(THIRD_INCLUDE
    ${THIRD_FMT_INCLUDE}
    ${PROBUF_INCLUDE}
    ${LIBEVENT_INCLUDE}
    ${SPDLOG_INCLUDE}
)