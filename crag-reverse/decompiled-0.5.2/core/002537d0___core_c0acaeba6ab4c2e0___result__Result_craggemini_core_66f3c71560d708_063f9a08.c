// 002537d0 <core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::bridge::BridgeOutcome,craggemini_core[66f3c71560d70857]::protocol::Failure>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::bridge::BridgeOutcome,
   craggemini_core[66f3c71560d70857]::protocol::Failure>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::bridge::BridgeOutcome,craggemini_core[66f3c71560d70857]::protocol::Failure>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *param_1;
  if (lVar3 == -2) {
    if ((param_1[1] != -1) && (param_1[1] != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    if ((param_1[4] != -1) && (param_1[4] != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::protocol::UpstreamErrorDetail>>>
              (param_1[7]);
    return;
  }
  if (lVar3 == -1) {
    if ((param_1[10] != -1) && (param_1[10] != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    puVar1 = PTR___rust_dealloc_00798fc8;
    lVar3 = param_1[3];
    if (lVar3 != 0) {
      lVar2 = param_1[2] + 8;
      do {
        if (*(longlong *)(lVar2 + -8) != 0) {
          (*(code *)puVar1)(param_4,1);
        }
        lVar2 = lVar2 + 0x18;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    if (param_1[1] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
    }
    lVar3 = param_1[5];
    for (lVar2 = param_1[6] + 1; lVar2 != 1; lVar2 = lVar2 + -1) {
      <craggemini_core[66f3c71560d70857]::tools::GroundingMetadata>(lVar3);
      lVar3 = lVar3 + 0x48;
    }
    if (param_1[4] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
    }
    puVar1 = PTR___rust_dealloc_00798fc8;
    lVar3 = param_1[9];
    if (lVar3 != 0) {
      lVar2 = param_1[8] + 0x38;
      do {
        if (*(longlong *)(lVar2 + -0x38) != 0) {
          (*(code *)puVar1)(param_4,1);
        }
        if (*(longlong *)(lVar2 + -0x20) != 0) {
          (*(code *)puVar1)(param_4,1);
        }
        if ((*(longlong *)(lVar2 + -8) != -1) && (*(longlong *)(lVar2 + -8) != 0)) {
          (*(code *)puVar1)(param_4,1);
        }
        lVar2 = lVar2 + 0x48;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    lVar3 = 0x68;
    if (param_1[7] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
    }
  }
  else {
    if (lVar3 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    if ((param_1[0xf] != -1) && (param_1[0xf] != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    puVar1 = PTR___rust_dealloc_00798fc8;
    lVar3 = param_1[5];
    if (lVar3 != 0) {
      lVar2 = param_1[4] + 8;
      do {
        if (*(longlong *)(lVar2 + -8) != 0) {
          (*(code *)puVar1)(param_4,1);
        }
        lVar2 = lVar2 + 0x18;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    if (param_1[3] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
    }
    lVar3 = param_1[7];
    for (lVar2 = param_1[8] + 1; lVar2 != 1; lVar2 = lVar2 + -1) {
      <craggemini_core[66f3c71560d70857]::tools::GroundingMetadata>(lVar3);
      lVar3 = lVar3 + 0x48;
    }
    if (param_1[6] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
    }
    puVar1 = PTR___rust_dealloc_00798fc8;
    lVar3 = param_1[0xb];
    if (lVar3 != 0) {
      lVar2 = param_1[10] + 0x38;
      do {
        if (*(longlong *)(lVar2 + -0x38) != 0) {
          (*(code *)puVar1)(param_4,1);
        }
        if (*(longlong *)(lVar2 + -0x20) != 0) {
          (*(code *)puVar1)(param_4,1);
        }
        if ((*(longlong *)(lVar2 + -8) != -1) && (*(longlong *)(lVar2 + -8) != 0)) {
          (*(code *)puVar1)(param_4,1);
        }
        lVar2 = lVar2 + 0x48;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    if (param_1[9] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
    }
    puVar1 = PTR___rust_dealloc_00798fc8;
    lVar3 = param_1[0xe];
    if (lVar3 != 0) {
      lVar2 = param_1[0xd] + 0x38;
      do {
        if (*(longlong *)(lVar2 + -0x38) != 0) {
          (*(code *)puVar1)(param_4,1);
        }
        if (*(longlong *)(lVar2 + -0x20) != 0) {
          (*(code *)puVar1)(param_4,1);
        }
        if (*(longlong *)(lVar2 + -8) != 0) {
          (*(code *)puVar1)(param_4,1);
        }
        lVar2 = lVar2 + 0x48;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    if (param_1[0xc] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
    }
    lVar3 = 0x90;
    <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1 + 0x24);
  }
  <core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::resume::CanonicalMessage>>
            ((longlong)param_1 + lVar3);
  return;
}


