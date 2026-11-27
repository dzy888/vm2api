// 00671180 {closure#1}

/* <craggemini_core[66f3c71560d70857]::multiprotocol::StreamTranscoder>::feed::{closure#1} */

void __rustcall
<craggemini_core[66f3c71560d70857]::multiprotocol::StreamTranscoder>::feed::_closure_1_
          (undefined1 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 extraout_XMM0_Da;
  undefined8 local_e0;
  undefined1 local_d8 [8];
  longlong local_d0;
  longlong lStack_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 local_98 [2];
  undefined8 local_88;
  char local_80 [32];
  undefined8 local_60;
  undefined4 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 *local_40;
  undefined8 local_38;
  
  local_b0 = 0;
  local_a0 = 0;
  local_e0 = param_4;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar2 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar2 == (undefined4 *)0x0) {
    (*(code *)PTR_handle_error_00798ff0)();
  }
  else {
    *(undefined1 *)(puVar2 + 1) = 0x72;
    *puVar2 = 0x6f727265;
    local_60 = 5;
    local_50 = 5;
    local_98[0] = 0;
    local_88 = 0;
    local_58 = puVar2;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar2 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar2 == (undefined4 *)0x0) {
      (*(code *)PTR_handle_error_00798ff0)();
    }
    else {
      *(undefined4 *)((longlong)puVar2 + 3) = 0x65676173;
      *puVar2 = 0x7373656d;
      local_48 = 7;
      local_38 = 7;
      local_40 = puVar2;
      if (-1 < param_3) {
        if (param_3 == 0) {
          lStack_c8 = 1;
LAB_006712b8:
          local_d8[0] = 3;
          local_d0 = param_3;
          local_c0 = param_3;
          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
          ::insert(local_80,local_98,&local_48,local_d8);
          if (local_80[0] != -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (local_80);
          }
          local_d0 = local_98[0];
          local_c0 = local_88;
          local_d8[0] = 5;
          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
          ::insert(local_80,&local_b0,&local_60,local_d8);
          if (local_80[0] != -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (local_80);
          }
          *(undefined8 *)(param_1 + 0x18) = local_a0;
          *(undefined4 *)(param_1 + 8) = (undefined4)local_b0;
          *(undefined4 *)(param_1 + 0xc) = local_b0._4_4_;
          *(undefined4 *)(param_1 + 0x10) = uStack_a8;
          *(undefined4 *)(param_1 + 0x14) = uStack_a4;
          *param_1 = 5;
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>
                    (&local_e0);
          return;
        }
        local_b8 = param_2;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        lStack_c8 = (*(code *)PTR___rust_alloc_00799000)();
        if (lStack_c8 != 0) {
          (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,param_3);
          goto LAB_006712b8;
        }
      }
      (*(code *)PTR_handle_error_00798ff0)();
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


