// 0019fce0 <craggemini[b21da2d71f2da7a3]::mcp_stdio::run_internal_mcp_stdio::{closure#5},()>

/* std[6c98fd8553dbae28]::sys::backtrace::__rust_begin_short_backtrace::<craggemini[b21da2d71f2da7a3]::mcp_stdio::run_internal_mcp_stdio::{closure#5},
   ()> */

void __rustcall
std[6c98fd8553dbae28]::sys::backtrace::__rust_begin_short_backtrace::
<craggemini[b21da2d71f2da7a3]::mcp_stdio::run_internal_mcp_stdio::_closure_5_,()>(longlong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  code *pcVar8;
  uint uVar9;
  ulonglong uVar10;
  char cVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  bool bVar16;
  uint local_148;
  undefined4 uStack_144;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 local_128;
  undefined7 uStack_127;
  uint uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 *local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  longlong local_c0 [3];
  undefined8 local_a8;
  undefined8 local_a0 [2];
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  uint local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [40];
  
  lVar3 = *(longlong *)(param_1 + 0x30);
  lVar12 = *(longlong *)(param_1 + 0x38);
  if (*(longlong *)(lVar12 + 0x10) == -1) {
    uVar15 = 0;
  }
  else {
    uVar15 = *(undefined8 *)(lVar12 + 0x18);
    lVar12 = *(longlong *)(lVar12 + 0x20);
  }
  craggemini[b21da2d71f2da7a3]::mcp_stdio::unix_http_json_sync
            (local_58,*(undefined8 *)(lVar3 + 0x18),*(undefined8 *)(lVar3 + 0x20),
             *(undefined8 *)(lVar3 + 0x30),*(undefined8 *)(lVar3 + 0x38),uVar15,lVar12,"GET",3,
             "/internal/mcp/tools?defer_ack=1",0x1f,0,10,0);
  local_e8 = *(undefined4 *)(param_1 + 0x10);
  uStack_e4 = *(undefined4 *)(param_1 + 0x14);
  uStack_e0 = *(undefined4 *)(param_1 + 0x18);
  uStack_dc = *(undefined4 *)(param_1 + 0x1c);
  local_d8 = *(undefined4 *)(param_1 + 0x20);
  uStack_d4 = *(undefined4 *)(param_1 + 0x24);
  uStack_d0 = *(undefined8 *)(param_1 + 0x28);
  craggemini[b21da2d71f2da7a3]::mcp_stdio::build_tools_list_response(&local_148,&local_e8,local_58);
  uVar10 = uStack_140;
  uVar9 = local_148;
  local_68 = CONCAT71(uStack_127,local_128);
  uStack_60 = uStack_120;
  uStack_5c = uStack_11c;
  local_78 = (uint)local_138;
  uStack_74 = local_138._4_4_;
  uStack_70 = uStack_130;
  uStack_6c = uStack_12c;
  sync::mpmc::sync_channel::<()>(&local_148,1);
  uStack_11c = uStack_144;
  uStack_120 = local_148;
  uStack_118 = (undefined4)uStack_140;
  uStack_114 = uStack_140._4_4_;
  local_a0[0] = local_138;
  local_138 = local_68;
  uStack_130 = uStack_60;
  uStack_12c = uStack_5c;
  local_148 = local_78;
  uStack_144 = uStack_74;
  uStack_140 = CONCAT44(uStack_6c,uStack_70);
  local_128 = *(undefined1 *)(param_1 + 0x48);
  <std[6c98fd8553dbae28]::sync::mpmc::Sender<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>
  ::send(&local_e8,param_1,&local_148);
  if (local_c0[0] == -2) {
    cVar11 = <std[6c98fd8553dbae28]::sync::mpmc::Receiver<()>>::recv(local_a0);
    if ((cVar11 == '\0') && ((char)uVar9 != '\0')) {
      lVar3 = *(longlong *)(param_1 + 0x40);
      uVar13 = *(ulonglong *)(lVar3 + 0x10);
      do {
        uVar14 = uVar10;
        if (uVar10 < uVar13) {
          uVar14 = uVar13;
        }
        puVar1 = (ulonglong *)(lVar3 + 0x10);
        LOCK();
        uVar2 = *puVar1;
        bVar16 = uVar13 == uVar2;
        if (bVar16) {
          *puVar1 = uVar14;
        }
        else {
          uVar13 = uVar2;
        }
        UNLOCK();
      } while (!bVar16);
      lVar3 = *(longlong *)(param_1 + 0x30);
      lVar12 = *(longlong *)(param_1 + 0x38);
      if (*(longlong *)(lVar12 + 0x10) == -1) {
        local_108 = 0;
      }
      else {
        local_108 = *(undefined8 *)(lVar12 + 0x18);
        local_a8 = *(undefined8 *)(lVar12 + 0x20);
      }
      uVar15 = *(undefined8 *)(lVar3 + 0x18);
      uVar4 = *(undefined8 *)(lVar3 + 0x20);
      uVar5 = *(undefined8 *)(lVar3 + 0x30);
      uVar6 = *(undefined8 *)(lVar3 + 0x38);
      local_90 = 0;
      local_80 = 0;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
      local_f8 = (undefined8 *)(*(code *)PTR___rust_alloc_00219c88)();
      if (local_f8 == (undefined8 *)0x0) {
        (*(code *)PTR_handle_error_00219c78)();
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
      *local_f8 = 0x6e6f697369766572;
      local_100 = 8;
      local_f0 = 8;
      local_148 = CONCAT31(local_148._1_3_,2);
      uStack_140 = 0;
      local_138 = uVar10;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_e8,&local_90,&local_100,&local_148);
      if ((char)local_e8 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_e8);
      }
      uStack_e0 = (undefined4)local_90;
      uStack_dc = local_90._4_4_;
      local_d8 = uStack_88;
      uStack_d4 = uStack_84;
      uStack_d0 = local_80;
      local_e8 = CONCAT31(local_e8._1_3_,5);
      craggemini[b21da2d71f2da7a3]::mcp_stdio::unix_http_json_sync
                (&local_148,uVar15,uVar4,uVar5,uVar6,local_108,local_a8,&DAT_0011464c,4,
                 "/internal/mcp/listed",0x14,&local_e8,5,0);
      if ((char)uStack_140 == -1) {
        if ((1 < (local_148 & 3) - 2) && ((local_148 & 3) != 0)) {
          local_f8 = (undefined8 *)(CONCAT44(uStack_144,local_148) + -1);
          local_100 = CONCAT71(local_100._1_7_,3);
          (*(code *)PTR_drop_00219c58)();
        }
      }
      else {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&uStack_140);
      }
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (&local_e8);
    }
  }
  else {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(&local_e8);
    if ((int)local_c0[0] != -1) {
      <std[6c98fd8553dbae28]::sync::mpmc::Sender<()>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::
      drop(local_c0);
    }
  }
  <std[6c98fd8553dbae28]::sync::mpmc::Receiver<()>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop
            (local_a0);
  plVar7 = *(longlong **)(param_1 + 0x30);
  LOCK();
  *plVar7 = *plVar7 + -1;
  UNLOCK();
  if (*plVar7 == 0) {
    <alloc[12e961f32105355]::sync::Arc<craggemini[b21da2d71f2da7a3]::mcp_stdio::McpBridgeFileConfig>>
    ::drop_slow();
  }
  plVar7 = *(longlong **)(param_1 + 0x38);
  LOCK();
  *plVar7 = *plVar7 + -1;
  UNLOCK();
  if (*plVar7 == 0) {
    <alloc[12e961f32105355]::sync::Arc<core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>>
    ::drop_slow((undefined8 *)(param_1 + 0x38));
  }
  <std[6c98fd8553dbae28]::sync::mpmc::Sender<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(param_1);
  plVar7 = *(longlong **)(param_1 + 0x40);
  LOCK();
  *plVar7 = *plVar7 + -1;
  UNLOCK();
  if (*plVar7 == 0) {
    <alloc[12e961f32105355]::sync::Arc<core[c0acaeba6ab4c2e0]::sync::atomic::Atomic<bool>>>::
    drop_slow(param_1 + 0x40);
  }
  return;
}


