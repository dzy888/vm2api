// 0036fde0 <craggemini_core[66f3c71560d70857]::bridge::verify_agy_inner::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x0036ffc7 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::bridge::verify_agy_inner::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::bridge::verify_agy_inner::_closure_0_>(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  switch(*(undefined1 *)(param_1 + 0x132)) {
  case 3:
    if (*(char *)(param_1 + 0x170) == '\x03') {
      if (*(char *)(param_1 + 0x168) == '\x03') {
        cVar1 = (*(code *)PTR_drop_join_handle_fast_00799080)();
        if (cVar1 != '\0') {
          (*(code *)PTR_drop_join_handle_slow_00799088)();
        }
        goto LAB_0036ff7c;
      }
      if (*(char *)(param_1 + 0x168) != '\0') goto LAB_0036ff7c;
      lVar2 = *(longlong *)(param_1 + 0x148);
      goto LAB_0036ff68;
    }
    goto LAB_0036ff7c;
  case 4:
    <craggemini_core[66f3c71560d70857]::bridge::verify_exe_digest_cached::_closure_0_>
              (param_1 + 0x138);
    break;
  case 5:
    if (*(char *)(param_1 + 0x170) == '\x03') {
      if (*(char *)(param_1 + 0x168) == '\x03') {
        cVar1 = (*(code *)PTR_drop_join_handle_fast_00799080)();
        if (cVar1 != '\0') {
          (*(code *)PTR_drop_join_handle_slow_00799088)();
        }
      }
      else if (*(char *)(param_1 + 0x168) == '\0') {
        lVar2 = *(longlong *)(param_1 + 0x148);
        goto joined_r0x0036ff4a;
      }
    }
    break;
  case 6:
    if (*(char *)(param_1 + 0x240) == '\x03') {
      lVar2 = 0x200;
      if (*(char *)(param_1 + 0x238) == '\x03') {
        cVar1 = (*(code *)PTR_drop_join_handle_fast_00799080)();
        if (cVar1 != '\0') {
          (*(code *)PTR_drop_join_handle_slow_00799088)();
        }
      }
      else if ((*(char *)(param_1 + 0x238) == '\0') && (*(longlong *)(param_1 + 0x218) != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_0036fe09::switchdataD_0019207c,1);
      }
    }
    else {
      lVar2 = 0x1e8;
      if (*(char *)(param_1 + 0x240) != '\0') break;
    }
    lVar2 = *(longlong *)(param_1 + lVar2);
joined_r0x0036ff4a:
    if (lVar2 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    break;
  default:
    goto switchD_0036fe09_default;
  }
  lVar2 = *(longlong *)(param_1 + 0x110);
LAB_0036ff68:
  if (lVar2 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
LAB_0036ff7c:
  if ((*(char *)(param_1 + 0x131) != '\0') && (*(longlong *)(param_1 + 0xf8) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  *(undefined1 *)(param_1 + 0x131) = 0;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    (*(code *)PTR_free_0079adc8)();
    return;
  }
switchD_0036fe09_default:
  return;
}


