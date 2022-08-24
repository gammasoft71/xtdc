/**
 @file
 @brief Contains form definitions.
 @copyright Copyright (c) 2022 Gammasoft. All rights reserved.
*/
#pragma once
#include "control.h"

struct xtd_form {
  /// @brief Internal handle.
  /// @warning Internal use only
  xtd_handle internal_handle;
};
typedef struct xtd_form xtd_form;

xtd_form* xtd_ptr_to_xtd_form_ptr(xtd_handle ptr);

xtd_control* xtd_form_create(void);
void xtd_form_destroy(xtd_form* value);