// 002e9770 <tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::{closure#0}::{closure#11}>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::{closure#0}::{closure#11}>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::_closure_0_::_closure_11_>>
          (longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined *puVar3;
  ulonglong uVar4;
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
    goto LAB_002e9cb2;
  }
  switch(*(undefined1 *)((longlong)param_1 + 0x317)) {
  case 3:
    goto switchD_002e9811_caseD_3;
  case 4:
    if (*(char *)((longlong)param_1 + 0x7a9) == '\x03') {
      cVar1 = *(char *)((longlong)param_1 + 0x36d);
      if (cVar1 == '\0') {
        lVar7 = 0x330;
        goto switchD_002e99c7_default;
      }
      if (cVar1 == '\x04') {
        lVar7 = 0x348;
        switch(*(undefined1 *)((longlong)param_1 + 0x4a2)) {
        case 3:
          if ((char)param_1[0x9c] == '\x03') {
            if ((char)param_1[0x9b] == '\x03') {
              <tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<(tokio[d7d91d38da47d894]::fs::file::Operation,tokio[d7d91d38da47d894]::io::blocking::Buf)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
              ::drop(param_1 + 0x9a);
              goto LAB_002e9b38;
            }
            if ((char)param_1[0x9b] != '\0') goto LAB_002e9b38;
            lVar8 = param_1[0x97];
            goto LAB_002e9b24;
          }
          goto LAB_002e9b38;
        case 4:
          <craggemini_core[66f3c71560d70857]::bridge::verify_exe_digest_cached::_closure_0_>
                    (param_1 + 0x95);
          break;
        case 5:
          if ((char)param_1[0x9c] == '\x03') {
            if ((char)param_1[0x9b] == '\x03') {
              <tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<(tokio[d7d91d38da47d894]::fs::file::Operation,tokio[d7d91d38da47d894]::io::blocking::Buf)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
              ::drop(param_1 + 0x9a);
            }
            else if ((char)param_1[0x9b] == '\0') {
              lVar8 = param_1[0x97];
              goto joined_r0x002e9b06;
            }
          }
          break;
        case 6:
          if ((char)param_1[0xb6] == '\x03') {
            lVar8 = 0x570;
            if ((char)param_1[0xb5] == '\x03') {
              <tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<(tokio[d7d91d38da47d894]::fs::file::Operation,tokio[d7d91d38da47d894]::io::blocking::Buf)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
              ::drop(param_1 + 0xb4);
            }
            else if (((char)param_1[0xb5] == '\0') && (param_1[0xb1] != 0)) {
              (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_002e99c7::switchdataD_0018f010,1);
            }
          }
          else {
            lVar8 = 0x558;
            if ((char)param_1[0xb6] != '\0') break;
          }
          lVar8 = *(longlong *)((longlong)param_1 + lVar8);
joined_r0x002e9b06:
          if (lVar8 != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)();
          }
          break;
        default:
          goto switchD_002e99c7_default;
        }
        lVar8 = param_1[0x90];
LAB_002e9b24:
        if (lVar8 != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
LAB_002e9b38:
        if ((*(char *)((longlong)param_1 + 0x4a1) != '\0') && (param_1[0x8d] != 0)) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
        *(undefined1 *)((longlong)param_1 + 0x4a1) = 0;
        if (param_1[0x8a] == 0) goto switchD_002e99c7_default;
LAB_002e9b77:
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      else {
        if (cVar1 != '\x03') break;
        if ((char)param_1[0x78] == '\x03') {
          if ((char)param_1[0x77] == '\x03') {
            <tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<(tokio[d7d91d38da47d894]::fs::file::Operation,tokio[d7d91d38da47d894]::io::blocking::Buf)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
            ::drop(param_1 + 0x76);
          }
          else if (((char)param_1[0x77] == '\0') && (param_1[0x73] != 0)) {
            (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_002e9811::switchdataD_0018eff8,1);
          }
        }
        if (param_1[0x6e] != 0) goto LAB_002e9b77;
      }
      lVar7 = 0x348;
    }
    else {
      lVar7 = 0x318;
      if (*(char *)((longlong)param_1 + 0x7a9) != '\0') break;
    }
switchD_002e99c7_default:
    if (*(longlong *)((longlong)param_1 + lVar7) != 0) goto LAB_002e9b98;
    break;
  case 5:
  case 8:
    if ((char)param_1[0x8c] == '\x03') {
      if (param_1[0x86] != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_002e9811::switchdataD_0018eff8,1);
      }
      puVar6 = (ulonglong *)(param_1 + 0x75);
    }
    else {
      if ((char)param_1[0x8c] != '\0') break;
      puVar6 = (ulonglong *)(param_1 + 99);
    }
    uVar5 = *puVar6;
    uVar4 = 2;
    if ((uVar5 ^ 0x8000000000000000) < 5) {
      uVar4 = uVar5 ^ 0x8000000000000000;
    }
    if (uVar4 != 1) {
      if ((uVar4 == 2) && (uVar5 < 0xfffffffffffffffe)) goto LAB_002e9929;
      break;
    }
    uVar5 = puVar6[1];
    if (0xfffffffffffffffd < uVar5) break;
LAB_002e9929:
    if (uVar5 == 0) break;
LAB_002e9b98:
    (*(code *)PTR___rust_dealloc_00798fc8)();
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
switchD_002e9811_default:
    <craggemini_core[66f3c71560d70857]::bridge::Bridge>(param_1 + 0x16);
    *(undefined1 *)(param_1 + 0x15) = 0;
LAB_002e9cb2:
    if (*param_1 == 2) {
      return;
    }
    if (*param_1 == 0) {
      plVar2 = (longlong *)param_1[1];
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        (*(code *)PTR_drop_slow_00799078)();
      }
    }
    else {
      plVar2 = (longlong *)param_1[1];
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
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
  puVar3 = PTR___rust_dealloc_00798fc8;
  if (*(char *)((longlong)param_1 + 0x315) != '\0') {
    lVar7 = param_1[0x5c];
    if (lVar7 != 0) {
      lVar8 = param_1[0x5b] + 8;
      do {
        if (*(longlong *)(lVar8 + -8) != 0) {
          (*(code *)puVar3)();
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
switchD_002e9811_caseD_3:
  *(undefined1 *)((longlong)param_1 + 0x316) = 0;
  goto switchD_002e9811_default;
}


