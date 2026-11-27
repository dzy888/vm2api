// 002ec740 <<craggemini_core[66f3c71560d70857]::oauth::OAuthManager>::complete_oauth::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::oauth::OAuthManager>::complete_oauth::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::oauth::OAuthManager>::complete_oauth::_closure_0_>
          (longlong param_1)

{
  longlong lVar1;
  
  switch(*(undefined1 *)(param_1 + 0x65d)) {
  case 3:
    <<craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt>::terminate::_closure_0_>
              (param_1 + 0x660);
    break;
  case 4:
    <<craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt>::terminate::_closure_0_>
              (param_1 + 0x660);
    break;
  case 5:
    <<craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt>::terminate::_closure_0_>
              (param_1 + 0x660);
    break;
  case 6:
    if ((((*(char *)(param_1 + 0x730) == '\x03') && (*(char *)(param_1 + 0x728) == '\x03')) &&
        (*(char *)(param_1 + 0x720) == '\x03')) &&
       ((*(char *)(param_1 + 0x718) == '\x03' && (*(char *)(param_1 + 0x710) == '\x03')))) {
      (*(code *)PTR_drop_007990e0)();
      if (*(longlong *)(param_1 + 0x6e8) != 0) {
        (**(code **)(*(longlong *)(param_1 + 0x6e8) + 0x18))();
      }
    }
    goto LAB_002ec946;
  case 7:
    <<craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt>::terminate::_closure_0_>
              (param_1 + 0x668);
    if ((1 < ((uint)*(ulonglong *)(param_1 + 0x660) & 3) - 2) &&
       ((*(ulonglong *)(param_1 + 0x660) & 3) != 0)) {
      (*(code *)PTR_drop_00799040)();
    }
    goto LAB_002ec946;
  case 8:
    <tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::oauth::OAuthManager>::complete_oauth::_closure_0_::_closure_1_>>
              (param_1 + 0x660);
    goto LAB_002ec8fa;
  case 9:
    <<craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt>::terminate::_closure_0_>
              (param_1 + 0x660);
    lVar1 = *(longlong *)(param_1 + 0x600);
    if (lVar1 != -3) {
      if (lVar1 == -2) {
        <craggemini_core[66f3c71560d70857]::protocol::Failure>(param_1 + 0x608);
      }
      else {
        if ((lVar1 != -1) && (lVar1 != 0)) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
        if ((*(longlong *)(param_1 + 0x618) != -1) && (*(longlong *)(param_1 + 0x618) != 0)) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
        if ((*(longlong *)(param_1 + 0x630) != -1) && (*(longlong *)(param_1 + 0x630) != 0)) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
      }
    }
LAB_002ec8fa:
    *(undefined1 *)(param_1 + 0x658) = 0;
    *(undefined2 *)(param_1 + 0x65a) = 0;
    if (*(longlong *)(param_1 + 0x5e8) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if (*(longlong *)(param_1 + 0x5d0) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
LAB_002ec946:
    if (*(longlong *)(param_1 + 0x5b0) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    break;
  default:
    goto switchD_002ec76b_default;
  }
  if (*(char *)(param_1 + 0x659) != '\0') {
    <craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt>(param_1 + 0x40);
  }
  *(undefined1 *)(param_1 + 0x659) = 0;
  *(undefined1 *)(param_1 + 0x65c) = 0;
  if ((*(longlong *)(param_1 + 0x2f0) != -1) && (*(longlong *)(param_1 + 0x2f0) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (*(longlong *)(param_1 + 0x2d8) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
switchD_002ec76b_default:
  return;
}


