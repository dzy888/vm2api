// 0056af30 <craggemini_core[66f3c71560d70857]::server::submit_web_tool::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::server::submit_web_tool::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::server::submit_web_tool::_closure_0_>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  cVar1 = *(char *)(param_1 + 0x102);
  if (cVar1 == '\0') {
    <http[56314f485c23ccf6]::request::Request<axum_core[61c49771464cda0a]::body::Body>>(param_1);
    return;
  }
  if (cVar1 == '\x03') {
    if (*(char *)(param_1 + 0x398) == '\x03') {
      (*(code *)PTR_drop_007990e8)();
      if (*(longlong *)(param_1 + 0x240) != 0) {
        (**(code **)(*(longlong *)(param_1 + 0x240) + 0x18))();
      }
      <tokio[d7d91d38da47d894]::time::timeout::Timeout<axum[743f01f147681d98]::body::to_bytes::_closure_0_>>
                (param_1 + 0x260);
      (*(code *)PTR_drop_007994f0)();
      *(undefined1 *)(param_1 + 0x39a) = 0;
    }
    else if (*(char *)(param_1 + 0x398) == '\0') {
      <http[56314f485c23ccf6]::request::Request<axum_core[61c49771464cda0a]::body::Body>>
                (param_1 + 0x110);
    }
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    <craggemini_core[66f3c71560d70857]::server::dispatch_json_turn::_closure_0_>(param_1 + 0x3d8);
    *(undefined1 *)(param_1 + 0x10a) = 0;
    if (*(longlong *)(param_1 + 0x110) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    *(undefined1 *)(param_1 + 0x10b) = 0;
    lVar3 = *(longlong *)(param_1 + 0x340);
    if ((lVar3 != -1) && (lVar3 != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    if (((*(char *)(param_1 + 0x107) != '\0') &&
        (lVar3 = *(longlong *)(param_1 + 0x358), lVar3 != -1)) && (lVar3 != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    if (((*(char *)(param_1 + 0x108) != '\0') &&
        (lVar3 = *(longlong *)(param_1 + 0x370), lVar3 != -1)) && (lVar3 != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    puVar2 = PTR___rust_dealloc_00798fc8;
    if (*(char *)(param_1 + 0x109) != '\0') {
      lVar4 = *(longlong *)(param_1 + 0x308);
      if (lVar4 != 0) {
        lVar5 = *(longlong *)(param_1 + 0x300) + 8;
        do {
          lVar3 = *(longlong *)(lVar5 + -8);
          if (lVar3 != 0) {
            (*(code *)puVar2)(param_4,1);
          }
          lVar5 = lVar5 + 0x18;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
      if (*(longlong *)(param_1 + 0x2f8) != 0) {
        lVar3 = *(longlong *)(param_1 + 0x2f8) * 0x18;
        (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
      }
    }
    if (((*(char *)(param_1 + 0x106) != '\0') &&
        (lVar3 = *(longlong *)(param_1 + 0x3a0), lVar3 != -1)) && (lVar3 != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    if ((*(char *)(param_1 + 0x105) != '\0') && (*(char *)(param_1 + 0x3b8) != -1)) {
      <serde_json[dc3825464c436029]::value::Value>(param_1 + 0x3b8,lVar3);
    }
  }
  *(undefined1 *)(param_1 + 0x109) = 0;
  *(undefined4 *)(param_1 + 0x105) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  return;
}


