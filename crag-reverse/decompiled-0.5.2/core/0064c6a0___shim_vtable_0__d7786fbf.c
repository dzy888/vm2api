// 0064c6a0 {shim:vtable#0}

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <<std[6c98fd8553dbae28]::sync::once::Once>::call_once_force<<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<std[6c98fd8553dbae28]::collections::hash::set::HashSet<craggemini_core[66f3c71560d70857]::bridge::VerifiedExeKey>>>>::initialize<<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<std[6c98fd8553dbae28]::collections::hash::set::HashSet<craggemini_core[66f3c71560d70857]::bridge::VerifiedExeKey>>>>::get_or_init<craggemini_core[66f3c71560d70857]::bridge::verified_exe_cache::{closure#0}>::{closure#0},
   !>::{closure#0}>::{closure#0} as
   core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(&std[6c98fd8553dbae28]::sync::once::OnceState,)>>::call_once::{shim:vtable#0}
    */

void __rustcall
<<std[6c98fd8553dbae28]::sync::once::Once>::call_once_force<<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<std[6c98fd8553dbae28]::collections::hash::set::HashSet<craggemini_core[66f3c71560d70857]::bridge::VerifiedExeKey>>>>::initialize<<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<std[6c98fd8553dbae28]::collections::hash::set::HashSet<craggemini_core[66f3c71560d70857]::bridge::VerifiedExeKey>>>>::get_or_init<craggemini_core[66f3c71560d70857]::bridge::verified_exe_cache::{closure#0}>::{closure#0},!>::{closure#0}>::{closure#0}as_core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(&std[6c98fd8553dbae28]::sync::once::OnceState,)>>
::call_once::_shim_vtable_0_(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong unaff_R14;
  longlong in_FS_OFFSET;
  undefined3 uStack_33;
  undefined5 local_30;
  undefined3 uStack_2b;
  undefined5 uStack_28;
  undefined3 uStack_23;
  undefined5 local_20;
  undefined3 uStack_1b;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  puVar1 = *(undefined4 **)*param_1;
  *(undefined8 *)*param_1 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    (*(code *)PTR_unwrap_failed_00799278)();
  }
  else {
    unaff_R14 = -0x38;
    if (*(char *)(in_FS_OFFSET + -0x28) == '\x01') {
      lVar4 = *(longlong *)(in_FS_OFFSET + -0x38);
      param_3 = *(undefined8 *)(in_FS_OFFSET + -0x30);
      goto LAB_0064c6d1;
    }
  }
  lVar4 = (*(code *)PTR_hashmap_random_keys_00799248)();
  *(undefined8 *)(in_FS_OFFSET + unaff_R14 + 8) = param_3;
  *(undefined1 *)(in_FS_OFFSET + unaff_R14 + 0x10) = 1;
LAB_0064c6d1:
  *(longlong *)(in_FS_OFFSET + unaff_R14) = lVar4 + 1;
  uVar2 = _UNK_007904e8;
  local_30 = SUB85(anon_63b06cc94833867f683611f039574387_277_llvm_6903579140370050947,0);
  uStack_2b = (undefined3)
              ((ulonglong)anon_63b06cc94833867f683611f039574387_277_llvm_6903579140370050947 >> 0x28
              );
  uStack_28 = (undefined5)_UNK_007904d8;
  uStack_23 = (undefined3)((ulonglong)_UNK_007904d8 >> 0x28);
  local_20 = (undefined5)_DAT_007904e0;
  uStack_1b = (undefined3)((ulonglong)_DAT_007904e0 >> 0x28);
  uStack_18 = (undefined4)_UNK_007904e8;
  uStack_14 = (undefined4)((ulonglong)_UNK_007904e8 >> 0x20);
  uVar3 = uStack_14;
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 0;
  uStack_14._0_1_ = (undefined1)((ulonglong)uVar2 >> 0x20);
  *(ulonglong *)((longlong)puVar1 + 5) = CONCAT53(local_30,uStack_33);
  *(ulonglong *)((longlong)puVar1 + 0xd) = CONCAT53(uStack_28,uStack_2b);
  *(ulonglong *)((longlong)puVar1 + 0x15) = CONCAT53(local_20,uStack_23);
  *(ulonglong *)((longlong)puVar1 + 0x1d) =
       CONCAT17((undefined1)uStack_14,CONCAT43(uStack_18,uStack_1b));
  puVar1[9] = uVar3;
  *(longlong *)(puVar1 + 10) = lVar4;
  *(undefined8 *)(puVar1 + 0xc) = param_3;
  return;
}


