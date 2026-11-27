// 00256d50 <tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::{closure#0}::{closure#11}>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::{closure#0}::{closure#11}>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::_closure_0_::_closure_11_>>
          (longlong *param_1)

{
  char cVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined *puVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (*(char *)((longlong)param_1 + 0xa9) != '\x04') {
    if ((((*(char *)((longlong)param_1 + 0xa9) == '\x03') && ((char)param_1[0x2c] == '\x03')) &&
        ((char)param_1[0x1d] == '\x03')) &&
       (((char)param_1[0x2b] == '\x03' && ((char)param_1[0x2a] == '\x03')))) {
      (*(code *)PTR_drop_007990e0)();
      if (param_1[0x25] != 0) {
        (**(code **)(param_1[0x25] + 0x18))();
      }
    }
    goto LAB_00257022;
  }
  switch(*(undefined1 *)((longlong)param_1 + 0x317)) {
  case 3:
    goto switchD_00256df1_caseD_3;
  case 4:
    if (*(char *)((longlong)param_1 + 0x7a9) == '\x03') {
      cVar1 = *(char *)((longlong)param_1 + 0x36d);
      if (cVar1 == '\0') {
        lVar7 = 0x330;
      }
      else if (cVar1 == '\x04') {
        lVar7 = 0x348;
        <craggemini_core[66f3c71560d70857]::bridge::verify_agy_inner::_closure_0_>(param_1 + 0x6e);
      }
      else {
        if (cVar1 != '\x03') break;
        if ((char)param_1[0x78] == '\x03') {
          if ((char)param_1[0x77] == '\x03') {
            <tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<(tokio[d7d91d38da47d894]::fs::file::Operation,tokio[d7d91d38da47d894]::io::blocking::Buf)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
            ::drop(param_1 + 0x76);
          }
          else if (((char)param_1[0x77] == '\0') && (param_1[0x73] != 0)) {
            (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_00256df1::switchdataD_00182198,1);
          }
        }
        lVar7 = 0x348;
        if (param_1[0x6e] != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
      }
    }
    else {
      lVar7 = 0x318;
      if (*(char *)((longlong)param_1 + 0x7a9) != '\0') break;
    }
    uVar2 = *(ulonglong *)((longlong)param_1 + lVar7);
joined_r0x00256f0a:
    if (uVar2 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    break;
  case 5:
  case 8:
    if ((char)param_1[0x8c] == '\x03') {
      if (param_1[0x86] != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_00256df1::switchdataD_00182198,1);
      }
      puVar6 = (ulonglong *)(param_1 + 0x75);
    }
    else {
      if ((char)param_1[0x8c] != '\0') break;
      puVar6 = (ulonglong *)(param_1 + 99);
    }
    uVar2 = *puVar6;
    uVar5 = 2;
    if ((uVar2 ^ 0x8000000000000000) < 5) {
      uVar5 = uVar2 ^ 0x8000000000000000;
    }
    if (uVar5 == 1) {
      uVar2 = puVar6[1];
    }
    else if (uVar5 != 2) break;
    if (uVar2 < 0xfffffffffffffffe) goto joined_r0x00256f0a;
    break;
  case 6:
    break;
  case 7:
    if ((((char)param_1[0x75] == '\x03') && ((char)param_1[0x74] == '\x03')) &&
       (((char)param_1[0x73] == '\x03' && ((char)param_1[0x72] == '\x03')))) {
      (*(code *)PTR_drop_007990e0)();
      if (param_1[0x6d] != 0) {
        (**(code **)(param_1[0x6d] + 0x18))();
      }
    }
    break;
  default:
switchD_00256df1_default:
    <craggemini_core[66f3c71560d70857]::bridge::Bridge>(param_1 + 0x16);
    *(undefined1 *)(param_1 + 0x15) = 0;
LAB_00257022:
    if (*param_1 == 2) {
      return;
    }
    if (*param_1 == 0) {
      plVar3 = (longlong *)param_1[1];
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        (*(code *)PTR_drop_slow_00799078)();
      }
    }
    else {
      plVar3 = (longlong *)param_1[1];
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        (*(code *)PTR_drop_slow_00799070)();
      }
    }
    <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>(param_1 + 2);
    return;
  }
  if (((*(char *)((longlong)param_1 + 0x314) != '\0') && (param_1[0x5d] != -1)) &&
     (param_1[0x5d] != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  *(undefined1 *)((longlong)param_1 + 0x314) = 0;
  puVar4 = PTR___rust_dealloc_00798fc8;
  if (*(char *)((longlong)param_1 + 0x315) != '\0') {
    lVar7 = param_1[0x5c];
    if (lVar7 != 0) {
      lVar8 = param_1[0x5b] + 8;
      do {
        if (*(longlong *)(lVar8 + -8) != 0) {
          (*(code *)puVar4)();
        }
        lVar8 = lVar8 + 0x18;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    if (param_1[0x5a] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x315) = 0;
  if (param_1[0x57] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (param_1[0x54] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
switchD_00256df1_caseD_3:
  *(undefined1 *)((longlong)param_1 + 0x316) = 0;
  goto switchD_00256df1_default;
}


