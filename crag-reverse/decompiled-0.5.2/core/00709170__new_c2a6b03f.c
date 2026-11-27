// 00709170 new

/* <tokio[d7d91d38da47d894]::runtime::builder::Builder>::new */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::builder::Builder>::new(undefined8 *param_1,undefined1 param_2)

{
  bool bVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar11;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined8 *local_40;
  undefined *local_38;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar5 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar5 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
  }
  else {
    *puVar5 = 1;
    puVar5[1] = 1;
    local_38 = &DAT_00795528;
    local_40 = puVar5;
    plVar6 = (longlong *)
             <<std[6c98fd8553dbae28]::hash::random::RandomState>::new::KEYS::{K#0}::{closure#1}as_core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(core[c0acaeba6ab4c2e0]::option::Option<&mut_core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::cell::Cell<(u64,u64)>>>,)>>
             ::call_once(0,8);
    if (plVar6 != (longlong *)0x0) {
      local_58 = (undefined4)*plVar6;
      uStack_54 = *(undefined4 *)((longlong)plVar6 + 4);
      uStack_50 = (undefined4)plVar6[1];
      uStack_4c = *(undefined4 *)((longlong)plVar6 + 0xc);
      *plVar6 = *plVar6 + 1;
      iVar8 = tokio[d7d91d38da47d894]::loom::std::rand::COUNTER;
      LOCK();
      tokio[d7d91d38da47d894]::loom::std::rand::COUNTER =
           tokio[d7d91d38da47d894]::loom::std::rand::COUNTER + 1;
      UNLOCK();
      uVar7 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
              ::hash_one::<u32>(&local_58,iVar8);
      uVar11 = (*(code *)PTR_getenv_00799c98)(extraout_XMM0_Da,0x25);
      if (CONCAT44(uStack_54,local_58) == -1) {
        bVar10 = false;
      }
      else {
        if (local_48 == 0) {
          bVar10 = false;
        }
        else if (local_48 == 1) {
          bVar10 = *(char *)CONCAT44(uStack_4c,uStack_50) != '0';
        }
        else {
          bVar10 = true;
        }
        if (CONCAT44(uStack_54,local_58) != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,1);
        }
      }
      bVar1 = uVar7 >> 0x20 != 0;
      iVar3 = (int)(uVar7 >> 0x20);
      iVar9 = (int)uVar7;
      iVar8 = 0;
      if (bVar1 || iVar3 != iVar9) {
        iVar8 = iVar3;
      }
      iVar4 = 1;
      if (bVar1 || iVar3 != iVar9) {
        iVar4 = iVar9;
      }
      *(undefined1 *)((longlong)param_1 + 0xf4) = param_2;
      param_1[6] = 0xffffffffffffffff;
      param_1[0xe] = 0x400;
      *param_1 = 0;
      param_1[2] = 0;
      param_1[0xf] = 0x200;
      param_1[0xc] = puVar5;
      param_1[0xd] = &DAT_00795528;
      param_1[4] = 0;
      param_1[0x10] = 0;
      param_1[0x12] = 0;
      param_1[0x14] = 0;
      param_1[0x16] = 0;
      param_1[0x18] = 0;
      param_1[0x1a] = 0;
      *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
      *(undefined4 *)(param_1 + 9) = 0;
      *(undefined4 *)(param_1 + 0x1e) = 0x3d;
      *(undefined4 *)((longlong)param_1 + 0xf5) = 0;
      param_1[0x1c] = 0;
      *(int *)(param_1 + 0x1d) = iVar8;
      *(int *)((longlong)param_1 + 0xec) = iVar4;
      *(undefined4 *)((longlong)param_1 + 0xf9) = 0;
      *(bool *)((longlong)param_1 + 0xfd) = bVar10;
      return;
    }
  }
  (*(code *)PTR_panic_access_error_00799458)();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


