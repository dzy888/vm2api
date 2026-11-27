// 0070bd90 {closure#0}

/* <std[6c98fd8553dbae28]::sync::once::Once>::call_once::<<signal_hook_registry[9dd8ecc3788bb260]::GlobalData>::ensure::{closure#0}>::{closure#0}
    */

void __rustcall
<std[6c98fd8553dbae28]::sync::once::Once>::call_once::
<<signal_hook_registry[9dd8ecc3788bb260]::GlobalData>::ensure::{closure#0}>::_closure_0_
          (undefined8 *param_1)

{
  char cVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 *local_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  cVar1 = *(char *)*param_1;
  *(char *)*param_1 = '\0';
  if (cVar1 == '\x01') {
    uStack_70 = 8;
    local_68 = 0;
    uStack_80 = 0;
    uStack_78 = (undefined8 *)0x0;
    local_88 = 1;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar4 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar4 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar4 + 4) = (undefined4)local_68;
      *(undefined4 *)((longlong)puVar4 + 0x24) = local_68._4_4_;
      *(undefined4 *)(puVar4 + 5) = (undefined4)uStack_60;
      *(undefined4 *)((longlong)puVar4 + 0x2c) = uStack_60._4_4_;
      *(undefined4 *)(puVar4 + 2) = (undefined4)uStack_78;
      *(undefined4 *)((longlong)puVar4 + 0x14) = uStack_78._4_4_;
      *(undefined4 *)(puVar4 + 3) = (undefined4)uStack_70;
      *(undefined4 *)((longlong)puVar4 + 0x1c) = uStack_70._4_4_;
      *puVar4 = local_88;
      puVar4[1] = uStack_80;
      local_38 = 0;
      uStack_30 = 0;
      uStack_20 = 0;
      uStack_18 = 0;
      local_28 = puVar4;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar4 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar4 == (undefined8 *)0x0) {
        (*(code *)PTR_handle_alloc_error_007991d8)();
      }
      else {
        *puVar4 = 0;
        local_68 = uStack_18;
        uStack_78 = local_28;
        uStack_70 = uStack_20;
        local_88 = local_38;
        uStack_80 = uStack_30;
        uStack_60 = 0;
        local_58 = 0;
        local_48 = 0;
        uStack_40 = 0;
        uStack_50 = puVar4;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        puVar5 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
        if (puVar5 != (undefined4 *)0x0) {
          *(undefined8 *)(puVar5 + 0x10) = local_48;
          *(undefined8 *)(puVar5 + 0x12) = uStack_40;
          puVar5[0xc] = (undefined4)local_58;
          puVar5[0xd] = local_58._4_4_;
          puVar5[0xe] = (undefined4)uStack_50;
          puVar5[0xf] = uStack_50._4_4_;
          puVar5[8] = (undefined4)local_68;
          puVar5[9] = local_68._4_4_;
          puVar5[10] = (undefined4)uStack_60;
          puVar5[0xb] = uStack_60._4_4_;
          puVar5[4] = (undefined4)uStack_78;
          puVar5[5] = uStack_78._4_4_;
          puVar5[6] = (undefined4)uStack_70;
          puVar5[7] = uStack_70._4_4_;
          *puVar5 = (undefined4)local_88;
          puVar5[1] = local_88._4_4_;
          puVar5[2] = (undefined4)uStack_80;
          puVar5[3] = uStack_80._4_4_;
          lVar3 = (longlong)signal_hook_registry[9dd8ecc3788bb260]::GLOBAL_DATA;
          LOCK();
          signal_hook_registry[9dd8ecc3788bb260]::GLOBAL_DATA = puVar5;
          UNLOCK();
          if (lVar3 != 0) {
            (*(code *)PTR_panic_00799338)
                      ((undefined4)local_88,&PTR_s__vendor_signal_hook_registry_1_4_00795728);
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::
            <signal_hook_registry[9dd8ecc3788bb260]::GlobalData>(&local_88,0x1f);
                    /* WARNING: Subroutine does not return */
            _Unwind_Resume();
          }
          return;
        }
        (*(code *)PTR_handle_alloc_error_007991d8)();
      }
      goto LAB_0070bf0a;
    }
  }
  else {
    (*(code *)PTR_unwrap_failed_00799278)();
  }
  (*(code *)PTR_handle_alloc_error_007991d8)();
LAB_0070bf0a:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


