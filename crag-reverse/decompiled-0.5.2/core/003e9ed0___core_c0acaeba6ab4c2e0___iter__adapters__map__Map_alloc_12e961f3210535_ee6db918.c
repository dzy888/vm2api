// 003e9ed0 <core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<alloc[12e961f32105355]::vec::into_iter::IntoIter<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall>,craggemini_core[66f3c71560d70857]::bridge::run_loop::{closure#0}::{closure#9}>,(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value)>

/* alloc[12e961f32105355]::vec::in_place_collect::from_iter_in_place::<core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<alloc[12e961f32105355]::vec::into_iter::IntoIter<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall>,
   craggemini_core[66f3c71560d70857]::bridge::run_loop::{closure#0}::{closure#9}>,
   (alloc[12e961f32105355]::string::String, alloc[12e961f32105355]::string::String,
   serde_json[dc3825464c436029]::value::Value)>
   alloc[12e961f32105355]::vec::in_place_collect::from_iter_in_place::<core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<alloc[12e961f32105355]::vec::into_iter::IntoIter<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall>,
   <craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::drive_prompt_loop::{closure#0}::{closure#2}>,
   (alloc[12e961f32105355]::string::String, alloc[12e961f32105355]::string::String,
   serde_json[dc3825464c436029]::value::Value)> */

ulonglong * __rustcall
alloc[12e961f32105355]::vec::in_place_collect::from_iter_in_place::
<core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<alloc[12e961f32105355]::vec::into_iter::IntoIter<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall>,craggemini_core[66f3c71560d70857]::bridge::run_loop::_closure_0_::_closure_9_>,(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value)>
          (ulonglong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  ulonglong uVar18;
  undefined4 *puVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined4 *puVar23;
  ulonglong uVar24;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  
  puVar17 = PTR___rust_dealloc_00798fc8;
  lVar1 = param_2[2];
  puVar23 = (undefined4 *)*param_2;
  uVar18 = lVar1 * 0x68;
  puVar2 = (undefined8 *)param_2[3];
  puVar19 = puVar23;
  if ((undefined8 *)param_2[1] != puVar2) {
    puVar21 = (undefined8 *)param_2[1];
    do {
      puVar22 = puVar21 + 0xd;
      param_2[1] = puVar22;
      uVar3 = puVar21[2];
      uVar11 = *puVar21;
      uVar12 = puVar21[1];
      uVar4 = puVar21[8];
      uVar13 = puVar21[6];
      uVar14 = puVar21[7];
      uVar7 = *(undefined4 *)(puVar21 + 9);
      uVar8 = *(undefined4 *)((longlong)puVar21 + 0x4c);
      uVar9 = *(undefined4 *)(puVar21 + 10);
      uVar10 = *(undefined4 *)((longlong)puVar21 + 0x54);
      uVar15 = puVar21[0xb];
      uVar16 = puVar21[0xc];
      if (puVar21[3] != 0) {
        (*(code *)puVar17)(uVar4,1);
      }
      *(undefined8 *)(puVar19 + 0x10) = uVar15;
      *(undefined8 *)(puVar19 + 0x12) = uVar16;
      local_88 = (undefined4)uVar11;
      uStack_84 = (undefined4)((ulonglong)uVar11 >> 0x20);
      uStack_80 = (undefined4)uVar12;
      uStack_7c = (undefined4)((ulonglong)uVar12 >> 0x20);
      uStack_68 = (undefined4)uVar14;
      uStack_64 = (undefined4)((ulonglong)uVar14 >> 0x20);
      local_60 = (undefined4)uVar4;
      uStack_5c = (undefined4)((ulonglong)uVar4 >> 0x20);
      puVar19[0xc] = uVar7;
      puVar19[0xd] = uVar8;
      puVar19[0xe] = uVar9;
      puVar19[0xf] = uVar10;
      puVar19[8] = uStack_68;
      puVar19[9] = uStack_64;
      puVar19[10] = local_60;
      puVar19[0xb] = uStack_5c;
      *(undefined8 *)(puVar19 + 4) = uVar3;
      *(undefined8 *)(puVar19 + 6) = uVar13;
      *puVar19 = local_88;
      puVar19[1] = uStack_84;
      puVar19[2] = uStack_80;
      puVar19[3] = uStack_7c;
      puVar19 = puVar19 + 0x14;
      puVar21 = puVar22;
    } while (puVar22 != puVar2);
  }
  uVar20 = (longlong)puVar19 - (longlong)puVar23;
  <alloc[12e961f32105355]::vec::into_iter::IntoIter<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall>>
  ::forget_allocation_drop_remaining(param_2);
  uVar24 = uVar18 / 0x50;
  uVar6 = uVar24 * 0x50;
  if (lVar1 != 0 && uVar18 != uVar6) {
    if (uVar18 < 0x50) {
      if (uVar18 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)
                  (CONCAT71((int7)(uVar24 * 0x10 >> 8),uVar18 != uVar6),8);
      }
      puVar23 = (undefined4 *)&DAT_00000008;
    }
    else {
      puVar23 = (undefined4 *)(*(code *)PTR___rust_realloc_007997f0)(uVar6,8);
      if (puVar23 == (undefined4 *)0x0) {
        (*(code *)PTR_handle_alloc_error_007991d8)();
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
    }
  }
  *param_1 = uVar24;
  param_1[1] = (ulonglong)puVar23;
  param_1[2] = (uVar20 >> 4) * -0x3333333333333333;
  <alloc[12e961f32105355]::vec::into_iter::IntoIter<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(param_2);
  return param_1;
}


