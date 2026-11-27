// 003c02e0 clone

/* <alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::resume::CanonicalToolResult>
   as core[c0acaeba6ab4c2e0]::clone::Clone>::clone */

void __rustcall
<alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::resume::CanonicalToolResult>as_core[c0acaeba6ab4c2e0]::clone::Clone>
::clone(ulonglong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 local_e8;
  undefined1 uStack_e7;
  undefined4 uStack_e6;
  undefined2 uStack_e2;
  longlong local_e0;
  longlong lStack_d8;
  longlong lStack_d0;
  longlong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  undefined1 local_a8;
  undefined1 uStack_a7;
  undefined2 uStack_a6;
  undefined2 uStack_a4;
  undefined8 uStack_a0;
  longlong local_98;
  longlong lStack_90;
  ulonglong *local_80;
  ulonglong local_78;
  longlong local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uVar6 = *(ulonglong *)(param_2 + 0x10);
  lVar9 = uVar6 * 0x58;
  if (uVar6 < 0x1745d1745d1745e) goto LAB_003c0317;
  param_1 = (ulonglong *)0x0;
  do {
    (*(code *)PTR_handle_error_00798ff0)();
    param_2 = lVar9;
LAB_003c0317:
    local_78 = uVar6;
    local_80 = param_1;
    if (lVar9 == 0) {
      local_c0 = 0;
      local_b8 = 8;
      goto LAB_003c0576;
    }
    lVar8 = *(longlong *)(param_2 + 8);
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    param_1 = (ulonglong *)&DAT_00000008;
    uVar5 = (*(code *)PTR___rust_alloc_00799000)();
  } while (uVar5 == 0);
  local_c0 = uVar6;
  local_b8 = uVar5;
  if (uVar6 != 0) {
    plVar10 = (longlong *)(lVar8 + 0x38);
    lVar8 = 0;
    uVar6 = 0;
    local_70 = lVar9;
    do {
      if (local_70 == lVar8) break;
      if (plVar10[-7] == -1) {
        local_60 = 0xffffffffffffffff;
        if (plVar10[-4] == -1) goto LAB_003c04d3;
LAB_003c0478:
        (*(code *)PTR_clone_00798fd0)();
        uVar7 = CONCAT26(uStack_e2,CONCAT42(uStack_e6,CONCAT11(uStack_e7,local_e8)));
        local_c8 = local_e0;
        local_68 = lStack_d8;
        local_e8 = (undefined1)plVar10[-1];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(local_e8) {
        case 1:
switchD_003c04b7_caseD_1:
          uStack_e7 = *(undefined1 *)((longlong)plVar10 + -7);
          break;
        case 2:
switchD_003c04b7_caseD_2:
          local_e0 = *plVar10;
          lStack_d8 = plVar10[1];
          break;
        case 3:
switchD_003c04b7_caseD_3:
          (*(code *)PTR_clone_00798fd0)();
          break;
        case 4:
switchD_003c04b7_caseD_4:
          <serde_json[dc3825464c436029]::value::Value_as<[_]>::to_vec_in::ConvertVec>::to_vec::
          <alloc[12e961f32105355]::alloc::Global>(&local_e0,plVar10[1],plVar10[2]);
          break;
        case 5:
switchD_003c04b7_caseD_5:
          if (plVar10[2] == 0) {
            local_e0 = 0;
            lStack_d0 = 0;
          }
          else {
            if (*plVar10 == 0) {
              (*(code *)PTR_unwrap_failed_00799278)();
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            <alloc[12e961f32105355]::collections::btree::map::BTreeMap<_,_,_>as_core[c0acaeba6ab4c2e0]::clone::Clone>
            ::clone::clone_subtree::
            <alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value,alloc[12e961f32105355]::alloc::Global>
                      (&local_e0,*plVar10,plVar10[1]);
          }
        }
      }
      else {
        (*(code *)PTR_clone_00798fd0)();
        if (plVar10[-4] != -1) goto LAB_003c0478;
LAB_003c04d3:
        uVar7 = 0xffffffffffffffff;
        local_e8 = (undefined1)plVar10[-1];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(local_e8) {
        case 1:
          goto switchD_003c04b7_caseD_1;
        case 2:
          goto switchD_003c04b7_caseD_2;
        case 3:
          goto switchD_003c04b7_caseD_3;
        case 4:
          goto switchD_003c04b7_caseD_4;
        case 5:
          goto switchD_003c04b7_caseD_5;
        }
      }
      uVar6 = uVar6 + 1;
      lVar9 = plVar10[3];
      local_38 = local_50;
      local_48 = local_60;
      uStack_40 = uStack_58;
      uStack_a7 = uStack_e7;
      uStack_a6 = (undefined2)uStack_e6;
      uStack_a4 = (undefined2)((uint)uStack_e6 >> 0x10);
      uStack_a0 = local_e0;
      lVar4 = uStack_a0;
      local_98 = lStack_d8;
      lStack_90 = lStack_d0;
      *(undefined8 *)(uVar5 + 0x10 + lVar8) = local_50;
      *(undefined8 *)(uVar5 + lVar8) = local_60;
      ((undefined8 *)(uVar5 + lVar8))[1] = uStack_58;
      *(undefined8 *)(uVar5 + 0x18 + lVar8) = uVar7;
      *(longlong *)(uVar5 + 0x20 + lVar8) = local_c8;
      *(longlong *)(uVar5 + 0x28 + lVar8) = local_68;
      uStack_a0._0_4_ = (undefined4)local_e0;
      uStack_a0._4_4_ = (undefined4)((ulonglong)local_e0 >> 0x20);
      puVar1 = (undefined4 *)(uVar5 + 0x30 + lVar8);
      *puVar1 = CONCAT22(uStack_a6,CONCAT11(uStack_e7,local_e8));
      puVar1[1] = CONCAT22(uStack_e2,uStack_a4);
      puVar1[2] = (undefined4)uStack_a0;
      puVar1[3] = uStack_a0._4_4_;
      plVar2 = (longlong *)(uVar5 + 0x40 + lVar8);
      *plVar2 = lStack_d8;
      plVar2[1] = lStack_d0;
      *(char *)(uVar5 + 0x50 + lVar8) = (char)lVar9;
      plVar10 = plVar10 + 0xb;
      lVar8 = lVar8 + 0x58;
      local_a8 = local_e8;
      uStack_a0 = lVar4;
    } while (local_78 != uVar6);
  }
LAB_003c0576:
  local_80[2] = local_78;
  *local_80 = local_c0;
  local_80[1] = local_b8;
  return;
}


