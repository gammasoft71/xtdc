/**
 @file
 @brief Contains control definitions.
 @copyright Copyright (c) 2022 Gammasoft. All rights reserved.
*/
#pragma once
#include <xtd_c/event_handler.h>
#include <xtd_c/object.h>
#include <xtd_c/point.h>
#include <xtd_c/size.h>

struct xtd_control {
  /// @brief Internal handle.
  /// @warning Internal use only
  xtd_handle internal_handle;
};
typedef struct xtd_control xtd_control;

xtd_control* xtd_ptr_to_xtd_control_ptr(xtd_handle ptr);

xtd_control* xtd_control_create(void);
void xtd_control_destroy(xtd_control* value);

xtd_point xtd_control_get_location(xtd_control* control);
void xtd_control_set_location(xtd_control* control, xtd_point point);

xtd_control* xtd_control_get_parent(xtd_control* control);
void xtd_control_set_parent(xtd_control* control, xtd_control* parent);
void xtd_control_reset_parent(xtd_control* control);

size_t xtd_control_get_text(xtd_control* control, char* text, size_t size);
void xtd_control_set_text(xtd_control* control, const char* text);

void xtd_control_set_click_event(xtd_control* control, xtd_event_handler e, xtd_handle user_data);
void xtd_control_reset_click_event(xtd_control* control);