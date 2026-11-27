// 001a01a0 <craggemini[b21da2d71f2da7a3]::mcp_stdio::run_internal_mcp_stdio::{closure#7},()>

/* std[6c98fd8553dbae28]::sys::backtrace::__rust_begin_short_backtrace::<craggemini[b21da2d71f2da7a3]::mcp_stdio::run_internal_mcp_stdio::{closure#7},
   ()> */

void __rustcall
std[6c98fd8553dbae28]::sys::backtrace::__rust_begin_short_backtrace::
<craggemini[b21da2d71f2da7a3]::mcp_stdio::run_internal_mcp_stdio::_closure_7_,()>(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 unaff_R13;
  undefined4 extraout_XMM0_Da;
  undefined8 local_d8;
  undefined4 *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  char local_78 [8];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  byte local_58;
  undefined7 uStack_57;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (*(longlong *)(lVar2 + 0x10) == -1) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(lVar2 + 0x18);
    unaff_R13 = *(undefined8 *)(lVar2 + 0x20);
  }
  uVar3 = *(undefined8 *)(lVar1 + 0x18);
  local_98 = *(undefined8 *)(lVar1 + 0x20);
  local_a0 = *(undefined8 *)(lVar1 + 0x30);
  local_a8 = *(undefined8 *)(lVar1 + 0x38);
  local_90 = 0;
  local_80 = 0;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
  puVar5 = (undefined4 *)(*(code *)PTR___rust_alloc_00219c88)();
  if (puVar5 == (undefined4 *)0x0) {
    (*(code *)PTR_handle_error_00219c78)();
  }
  else {
    *(undefined4 *)((longlong)puVar5 + 3) = 0x64695f6c;
    *puVar5 = 0x6c6c6163;
    local_d8 = 7;
    local_c8 = 7;
    lVar1 = *(longlong *)(param_1 + 0x10);
    local_d0 = puVar5;
    if (-1 < lVar1) {
      local_b0 = uVar3;
      if (lVar1 == 0) {
        local_48 = 1;
LAB_001a02b8:
        local_58 = 3;
        local_50 = lVar1;
        local_40 = lVar1;
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(local_78,&local_90,&local_d8,&local_58);
        uVar3 = local_b0;
        if (local_78[0] != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (local_78);
        }
        local_70 = (undefined4)local_90;
        uStack_6c = local_90._4_4_;
        uStack_68 = uStack_88;
        uStack_64 = uStack_84;
        local_60 = local_80;
        local_78[0] = '\x05';
        craggemini[b21da2d71f2da7a3]::mcp_stdio::unix_http_json_sync
                  (&local_58,uVar3,local_98,local_a0,local_a8,uVar6,unaff_R13,&DAT_0011464c,4,
                   "/internal/mcp/cancel",0x14,local_78,5,0);
        if ((char)local_50 == -1) {
          if ((1 < ((uint)CONCAT71(uStack_57,local_58) & 3) - 2) && ((local_58 & 3) != 0)) {
            local_d0 = (undefined4 *)(CONCAT71(uStack_57,local_58) + -1);
            local_d8 = CONCAT71(local_d8._1_7_,3);
            (*(code *)PTR_drop_00219c58)();
          }
        }
        else {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_50);
        }
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (local_78);
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <craggemini[b21da2d71f2da7a3]::mcp_stdio::run_internal_mcp_stdio::_closure_7_>(param_1);
        return;
      }
      local_c0 = uVar6;
      local_b8 = unaff_R13;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
      local_48 = (*(code *)PTR___rust_alloc_00219c88)();
      if (local_48 != 0) {
        (*(code *)PTR_memcpy_00219c60)(extraout_XMM0_Da,lVar1);
        uVar6 = local_c0;
        unaff_R13 = local_b8;
        goto LAB_001a02b8;
      }
    }
    (*(code *)PTR_handle_error_00219c78)();
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}


