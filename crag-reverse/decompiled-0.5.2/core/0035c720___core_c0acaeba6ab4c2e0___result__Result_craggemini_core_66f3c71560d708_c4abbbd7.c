// 0035c720 <core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::acp_backend::AcpTurnOutcome,craggemini_core[66f3c71560d70857]::protocol::Failure>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::acp_backend::AcpTurnOutcome,
   craggemini_core[66f3c71560d70857]::protocol::Failure>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::acp_backend::AcpTurnOutcome,craggemini_core[66f3c71560d70857]::protocol::Failure>>
          (char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*param_1 == '\x02') {
    <craggemini_core[66f3c71560d70857]::protocol::Failure>(param_1 + 8);
    return;
  }
  if (*param_1 == '\0') {
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    if ((*(longlong *)(param_1 + 8) != -1) && (*(longlong *)(param_1 + 8) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    puVar1 = PTR___rust_dealloc_00798fc8;
    lVar4 = *(longlong *)(param_1 + 0xd8);
    if (lVar4 != 0) {
      lVar2 = *(longlong *)(param_1 + 0xd0) + 8;
      do {
        if (*(longlong *)(lVar2 + -8) != 0) {
          (*(code *)puVar1)(param_4,1);
        }
        lVar2 = lVar2 + 0x18;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    lVar2 = 0x20;
    if (*(longlong *)(param_1 + 200) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
    }
  }
  else {
    lVar4 = *(longlong *)(param_1 + 200);
    if (lVar4 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    puVar1 = PTR___rust_dealloc_00798fc8;
    lVar2 = *(longlong *)(param_1 + 0xf0);
    if (lVar2 != 0) {
      lVar3 = *(longlong *)(param_1 + 0xe8) + 8;
      do {
        lVar4 = *(longlong *)(lVar3 + -8);
        if (lVar4 != 0) {
          (*(code *)puVar1)(param_4,1);
        }
        lVar3 = lVar3 + 0x18;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    if (*(longlong *)(param_1 + 0xe0) != 0) {
      lVar4 = *(longlong *)(param_1 + 0xe0) * 0x18;
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
    }
    puVar1 = PTR___rust_dealloc_00798fc8;
    lVar2 = *(longlong *)(param_1 + 0x108);
    if (lVar2 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x100) + 0x38;
      do {
        if (*(longlong *)(lVar3 + -0x38) != 0) {
          (*(code *)puVar1)(param_4,1);
        }
        if (*(longlong *)(lVar3 + -0x20) != 0) {
          (*(code *)puVar1)(param_4,1);
        }
        lVar4 = *(longlong *)(lVar3 + -8);
        if (lVar4 != 0) {
          (*(code *)puVar1)(param_4,1);
        }
        lVar3 = lVar3 + 0x48;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    if (*(longlong *)(param_1 + 0xf8) != 0) {
      lVar4 = *(longlong *)(param_1 + 0xf8) * 0x48;
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
    }
    lVar2 = 0x38;
    <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1 + 8,lVar4);
  }
  <core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::resume::CanonicalMessage>>
            (param_1 + lVar2);
  return;
}


