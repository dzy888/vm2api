// 006ba790 drop_slow

/* WARNING: Switch with 1 destination removed at 0x006ba86e */
/* <alloc[12e961f32105355]::sync::Arc<hyper[c4782d5b5c5e3493]::body::chan::Shared>>::drop_slow */

void __rustcall
<alloc[12e961f32105355]::sync::Arc<hyper[c4782d5b5c5e3493]::body::chan::Shared>>::drop_slow
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = *param_1;
  if (*(longlong *)(lVar2 + 0x18) != 0) {
    if (*(longlong *)(lVar2 + 0x20) == 0) {
      if (**(longlong **)(lVar2 + 0x28) != 0) {
        puVar3 = (undefined8 *)(*(longlong **)(lVar2 + 0x28))[1];
        if ((code *)*puVar3 != (code *)0x0) {
          (*(code *)*puVar3)();
        }
        if (puVar3[1] != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(param_4,puVar3[2]);
        }
      }
      param_2 = 0x18;
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
    }
    else {
      param_2 = *(undefined8 *)(lVar2 + 0x28);
      (**(code **)(*(longlong *)(lVar2 + 0x20) + 0x20))(param_4,*(undefined8 *)(lVar2 + 0x30));
    }
  }
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <core[c0acaeba6ab4c2e0]::option::Option<hyper[c4782d5b5c5e3493]::error::Error>>
            (*(undefined8 *)(lVar2 + 0xa0),param_2);
  if (*(int *)(lVar2 + 0x40) != -1) {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<http[56314f485c23ccf6]::header::map::HeaderMap>
              (lVar2 + 0x40);
  }
  if (*(longlong *)(lVar2 + 0xb0) != 0) {
    (**(code **)(*(longlong *)(lVar2 + 0xb0) + 0x18))();
  }
  if (*(longlong *)(lVar2 + 200) != 0) {
    (**(code **)(*(longlong *)(lVar2 + 200) + 0x18))();
  }
  if (lVar2 != -1) {
    LOCK();
    plVar1 = (longlong *)(lVar2 + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_free_0079adc8)(param_4,8);
      return;
    }
  }
  return;
}


