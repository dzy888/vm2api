// 005af140 <hyper[c4782d5b5c5e3493]::proto::h1::conn::State>

/* WARNING: Switch with 1 destination removed at 0x005af336 */
/* WARNING: Switch with 1 destination removed at 0x006ba5dc */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<hyper[c4782d5b5c5e3493]::proto::h1::conn::State> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<hyper[c4782d5b5c5e3493]::proto::h1::conn::State>
          (longlong param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong *plVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (*(int *)(param_1 + 0x30) != -1) {
    <http[56314f485c23ccf6]::header::map::HeaderMap>(param_1 + 0x30);
  }
  <core[c0acaeba6ab4c2e0]::option::Option<hyper[c4782d5b5c5e3493]::error::Error>>
            (*(undefined8 *)(param_1 + 0x140));
  if (((*(byte *)(param_1 + 0x128) != 0xff) && (10 < *(byte *)(param_1 + 0x128))) &&
     (*(longlong *)(param_1 + 0x138) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (*(longlong *)(param_1 + 0x148) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x150);
    pcVar2 = (code *)*puVar1;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)();
    }
    if (puVar1[1] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x158);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      <alloc[12e961f32105355]::sync::Arc<dyn_hyper[c4782d5b5c5e3493]::ext::informational::OnInformationalCallback+core[c0acaeba6ab4c2e0]::marker::Send+core[c0acaeba6ab4c2e0]::marker::Sync>>
      ::drop_slow(param_1 + 0x158);
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x168);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      <alloc[12e961f32105355]::sync::Arc<dyn_hyper[c4782d5b5c5e3493]::ext::informational::OnInformationalCallback+core[c0acaeba6ab4c2e0]::marker::Send+core[c0acaeba6ab4c2e0]::marker::Sync>>
      ::drop_slow(param_1 + 0x168);
    }
  }
  if (((*(longlong *)(param_1 + 0x90) == 1) || ((int)*(longlong *)(param_1 + 0x90) == 2)) &&
     ((*(uint *)(param_1 + 0x98) < 2 && (*(longlong *)(param_1 + 200) != 0)))) {
    (*(code *)PTR_drop_007994e8)();
  }
  lVar6 = *(longlong *)(param_1 + 0xf8);
  lVar7 = lVar6;
  if (((3 < lVar6 + 0x7ffffffffffffffeU || lVar6 + 0x7ffffffffffffffeU == 1) &&
      (-0x7fffffffffffffff < lVar6)) && (lVar6 != -1)) {
    if (*(longlong *)(param_1 + 0x108) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x100) + 0x38;
      lVar6 = 1 - *(longlong *)(param_1 + 0x108);
      do {
        if (*(longlong *)(lVar7 + -0x38) != 0) {
          (**(code **)(*(longlong *)(lVar7 + -0x38) + 0x20))();
        }
        lVar7 = lVar7 + 0x20;
        lVar6 = lVar6 + 1;
      } while (lVar6 != 1);
      lVar6 = *(longlong *)(param_1 + 0xf8);
    }
    lVar7 = 0;
    if (lVar6 != 0) {
      lVar7 = lVar6 << 5;
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
  if ((*(longlong *)(param_1 + 0x20) != 0) && (lVar6 = *(longlong *)(param_1 + 0x28), lVar6 != 0)) {
    uVar5 = (*(code *)PTR_set_complete_00799058)();
    if ((uVar5 & 5) == 1) {
      (**(code **)(*(longlong *)(lVar6 + 0x20) + 0x10))();
    }
    plVar3 = *(longlong **)(param_1 + 0x28);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        lVar6 = *(longlong *)(param_1 + 0x28);
        uVar4 = *(ulonglong *)(lVar6 + 0x30);
        if ((uVar4 & 1) != 0) {
          (*(code *)PTR_drop_task_00799060)();
        }
        if ((uVar4 & 8) != 0) {
          (*(code *)PTR_drop_task_00799060)();
        }
        if (*(longlong *)(lVar6 + 0x38) != 0) {
          <core[c0acaeba6ab4c2e0]::result::Result<hyper[c4782d5b5c5e3493]::upgrade::Upgraded,hyper[c4782d5b5c5e3493]::error::Error>>
                    (lVar6 + 0x40,lVar7);
        }
        if (lVar6 != -1) {
          LOCK();
          plVar3 = (longlong *)(lVar6 + 8);
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (*plVar3 == 0) {
            (*(code *)PTR_free_0079adc8)();
            return;
          }
        }
        return;
      }
    }
  }
  return;
}


