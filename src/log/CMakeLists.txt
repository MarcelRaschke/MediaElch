add_library(mediaelch_log OBJECT Log.cpp)

# GUI is required due to Globals.h
target_link_libraries(mediaelch_log PRIVATE Qt5::Core Qt5::Widgets)
mediaelch_post_target_defaults(mediaelch_log)
