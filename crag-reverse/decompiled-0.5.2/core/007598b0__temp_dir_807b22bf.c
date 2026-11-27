// 007598b0 temp_dir

/* std[6c98fd8553dbae28]::env::temp_dir */

longlong * __rustcall
std[6c98fd8553dbae28]::env::temp_dir
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  byte extraout_DL;
  byte bVar7;
  undefined1 uStack_1f9;
  longlong *plStack_1f8;
  undefined4 local_1d0;
  undefined2 local_1cc;
  undefined1 local_1ca;
  undefined1 *local_1c8;
  int local_50;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_1cc = 0x5249;
  local_1d0 = 0x44504d54;
  local_1ca = 0;
  (*(code *)PTR_from_bytes_with_nul_0079abd0)(param_4,7);
  if (local_50 == 1) {
    puVar2 = &DAT_00796450;
LAB_00759919:
    if ((1 < ((uint)puVar2 & 3) - 2) && (((ulonglong)puVar2 & 3) != 0)) {
      local_1c8 = puVar2 + -1;
      local_1d0 = CONCAT31(local_1d0._1_3_,3);
      (*(code *)PTR_drop_00799040)();
    }
  }
  else {
    sys::env::unix::getenv::_closure_0_(&local_28,&local_1d0,local_48);
    if (local_28 == -2) {
      puVar2 = (undefined1 *)CONCAT44(uStack_1c,local_20);
      goto LAB_00759919;
    }
    local_38 = local_20;
    uStack_34 = uStack_1c;
    uStack_30 = uStack_18;
    uStack_2c = uStack_14;
    if (local_28 != -1) {
      param_1[1] = CONCAT44(uStack_1c,local_20);
      param_1[2] = CONCAT44(uStack_14,uStack_18);
      *param_1 = local_28;
      return param_1;
    }
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar3 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 0x706d742f;
    *param_1 = 4;
    param_1[1] = (longlong)puVar3;
    param_1[2] = 4;
    return param_1;
  }
  (*(code *)PTR_handle_error_00798ff0)();
  cVar1 = alloc::default_alloc_error_hook::PREV_ALLOC_FAILURE;
  LOCK();
  alloc::default_alloc_error_hook::PREV_ALLOC_FAILURE = 1;
  UNLOCK();
  plStack_1f8 = param_1;
  if (cVar1 != '\0') {
    uVar4 = <std[6c98fd8553dbae28]::sys::stdio::unix::Stderr_as_std[6c98fd8553dbae28]::io::Write>::
            write_fmt(&uStack_1f9,&DAT_0018a020);
    plVar5 = (longlong *)
             core[c0acaeba6ab4c2e0]::ptr::drop_glue::
             <core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>
                       (uVar4);
    return plVar5;
  }
  uVar4 = <std[6c98fd8553dbae28]::sys::stdio::unix::Stderr_as_std[6c98fd8553dbae28]::io::Write>::
          write_fmt(&uStack_1f9,&DAT_00185ef9);
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>(uVar4);
  bVar7 = extraout_DL;
  uVar4 = (*(code *)PTR_lock_0079ad48)();
  cVar1 = (*(code *)PTR_get_backtrace_style_0079b008)();
  if (cVar1 == '\0') {
    uVar6 = <std[6c98fd8553dbae28]::sys::stdio::unix::Stderr_as_std[6c98fd8553dbae28]::io::Write>::
            write_fmt(&uStack_1f9,&anon_e1419182c2f95519b50f33ebe2147d9d_32_llvm_4643690396931717954
                     );
  }
  else if (cVar1 == '\x01') {
    uVar6 = <std[6c98fd8553dbae28]::sys::stdio::unix::Stderr_as_std[6c98fd8553dbae28]::io::Write>::
            write_fmt(&uStack_1f9,&anon_e1419182c2f95519b50f33ebe2147d9d_32_llvm_4643690396931717954
                     );
  }
  else {
    if (cVar1 != '\x02') goto LAB_00759ace;
    uVar6 = <std[6c98fd8553dbae28]::sys::stdio::unix::Stderr_as_std[6c98fd8553dbae28]::io::Write>::
            write_fmt(&uStack_1f9,&DAT_001bfec5,0x9d);
  }
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>(uVar6);
LAB_00759ace:
  plVar5 = (longlong *)
           core[c0acaeba6ab4c2e0]::ptr::drop_glue::
           <std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<alloc[12e961f32105355]::vec::Vec<u8>>>
                     (uVar4,bVar7 & 1);
  return plVar5;
}


