#include <xtd/forms/form.h>

extern "C" {
#include "../include/xtd_c/form.h"

  using namespace xtd;
  using namespace xtd::forms;
  
  xtd_form* xtd_ptr_to_xtd_form_ptr(xtd_handle ptr) {
    return (xtd_form*)ptr;
  }
  
  xtd_control* xtd_form_create(void) {
    object* result = new form();
    return reinterpret_cast<xtd_control*>(result);
  }
  
  void xtd_form_destroy(xtd_form* value) {
    delete reinterpret_cast<control*>(value);
  }
}