#include "pale.h"

VALUE rb_mPale;

RUBY_FUNC_EXPORTED void
Init_pale(void)
{
  rb_mPale = rb_define_module("Pale");
}
