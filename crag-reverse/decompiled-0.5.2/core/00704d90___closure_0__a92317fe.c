// 00704d90 {closure#0}

/* <std[6c98fd8553dbae28]::sync::once::Once>::call_once_force::<<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<core[c0acaeba6ab4c2e0]::result::Result<(),
   core[c0acaeba6ab4c2e0]::option::Option<i32>>>>::initialize<<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<core[c0acaeba6ab4c2e0]::result::Result<(),
   core[c0acaeba6ab4c2e0]::option::Option<i32>>>>::get_or_init<tokio[d7d91d38da47d894]::signal::unix::signal_enable::{closure#0}>::{closure#0},
   !>::{closure#0}>::{closure#0} */

void __rustcall
<std[6c98fd8553dbae28]::sync::once::Once>::call_once_force::
<<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::option::Option<i32>>>>::initialize<<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::option::Option<i32>>>>::get_or_init<tokio[d7d91d38da47d894]::signal::unix::signal_enable::{closure#0}>::{closure#0},!>::{closure#0}>
::_closure_0_(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined8 *in_RDI;
  int local_48;
  undefined8 local_40;
  
  puVar6 = (undefined8 *)*in_RDI;
  puVar1 = (undefined4 *)*puVar6;
  puVar2 = (undefined4 *)puVar6[2];
  *puVar6 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    (*(code *)PTR_unwrap_failed_00799278)();
  }
  else {
    uVar5 = *puVar1;
    uVar3 = *(undefined8 *)puVar6[1];
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar6 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = 1;
      puVar6[1] = 1;
      puVar6[2] = uVar3;
      *(undefined4 *)(puVar6 + 3) = uVar5;
      uVar5 = (*(code *)PTR_register_sigaction_impl_0079a9e8)
                        (anon_cbe4ed91a1eb3280be5cbdd57023f5c1_0_llvm_17798946807444736387,puVar6);
      if (local_48 == 1) {
        switch((uint)local_40 & 3) {
        case 1:
          local_40 = (*(code *)PTR_drop_00799040)();
        default:
          uVar5 = (undefined4)local_40;
          uVar7 = 0;
          break;
        case 2:
          uVar5 = (undefined4)((ulonglong)local_40 >> 0x20);
          uVar7 = 1;
        }
      }
      else {
        uVar7 = 2;
      }
      *puVar2 = uVar7;
      puVar2[1] = uVar5;
      return;
    }
  }
  (*(code *)PTR_handle_alloc_error_007991d8)();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


