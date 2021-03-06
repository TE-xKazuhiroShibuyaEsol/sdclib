# Current Target
set( CURRENT_TARGET_NAME PulseOximeterProvider )

# Add this for better project structure after cmake generation
project(${CURRENT_TARGET_NAME})

message(STATUS "Adding Target ${CURRENT_TARGET_NAME}...")
add_executable(${CURRENT_TARGET_NAME} "")

# Variables for better handling
set(SRC_DIR ${CMAKE_CURRENT_LIST_DIR})


# Add the sources to the target
target_sources(${CURRENT_TARGET_NAME}
    PRIVATE
        # Source Files
        ${SRC_DIR}/PulseOximeterProvider.cpp
        ${SRC_DIR}/PulseOximeterProviderMain.cpp
        ${SRC_DIR}/SerialConnection.cpp
        ${SRC_DIR}/SerialConnectionEventHandler.cpp
        ${SRC_DIR}/ContextWorker.cpp
        # Add the includes too (for better generation)
        #...
)

get_filename_component(PATH_ASIO_ROOT ${CMAKE_SOURCE_DIR}/Dependencies/asio/asio/include REALPATH)
target_include_directories(${CURRENT_TARGET_NAME} PUBLIC ${PATH_ASIO_ROOT})
target_compile_definitions(${CURRENT_TARGET_NAME} PUBLIC ASIO_STANDALONE)


# Make sure this include dir can be found inside the project to include
target_include_directories(${CURRENT_TARGET_NAME} PUBLIC ${SRC_DIR})
# Additional include directories
target_include_directories(${CURRENT_TARGET_NAME} PUBLIC ${PATH_INCLUDE_ROOT})


# link libraries
target_link_libraries(${CURRENT_TARGET_NAME} PRIVATE SDCLib)

# build
set_target_properties(  ${CURRENT_TARGET_NAME}
                        PROPERTIES
                        RUNTIME_OUTPUT_DIRECTORY ${PATH_RUNTIME_OUTPUT}
                        LIBRARY_OUTPUT_DIRECTORY ${PATH_LIBRARY_OUTPUT}
                        ARCHIVE_OUTPUT_DIRECTORY ${PATH_ARCHIVE_OUTPUT}
                        DEBUG_POSTFIX _d
                        )
# install
install(TARGETS ${CURRENT_TARGET_NAME} CONFIGURATIONS ${CMAKE_BUILD_TYPE} RUNTIME DESTINATION ${PATH_INSTALL_RUNTIME})

# ...

