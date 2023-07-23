add_executable(Decorator.01.My
    main.cpp
)

target_include_directories(Decorator.01.My
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}
)

add_subdirectory(Information)
