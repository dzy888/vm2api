// 00556790 <tokio[d7d91d38da47d894]::time::timeout::Timeout<axum[743f01f147681d98]::body::to_bytes::{closure#0}>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::time::timeout::Timeout<axum[743f01f147681d98]::body::to_bytes::{closure#0}>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::time::timeout::Timeout<axum[743f01f147681d98]::body::to_bytes::_closure_0_>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  if ((char)param_1[0x24] == '\x03') {
    if ((int)param_1[0x11] != -2) {
      <alloc[12e961f32105355]::collections::vec_deque::VecDeque<bytes[e9829e187354639b]::bytes::Bytes>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(param_1 + 0x1d);
      lVar1 = param_1[0x1d];
      lVar3 = 0;
      if (lVar1 != 0) {
        lVar3 = lVar1 << 5;
        (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
      }
      if ((int)param_1[0x11] != -1) {
        <http[56314f485c23ccf6]::header::map::HeaderMap>(param_1 + 0x11,lVar3);
      }
    }
    puVar4 = (undefined8 *)param_1[0x22];
    if ((code *)*puVar4 != (code *)0x0) {
      (*(code *)*puVar4)();
    }
  }
  else {
    if ((char)param_1[0x24] != '\0') goto LAB_00556847;
    puVar4 = (undefined8 *)param_1[0xf];
    if ((code *)*puVar4 != (code *)0x0) {
      (*(code *)*puVar4)();
    }
  }
  if (puVar4[1] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,puVar4[2]);
  }
LAB_00556847:
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


