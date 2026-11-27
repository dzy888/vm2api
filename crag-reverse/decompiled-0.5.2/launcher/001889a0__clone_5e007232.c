// 001889a0 clone

/* <alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value> as
   core[c0acaeba6ab4c2e0]::clone::Clone>::clone */

void __rustcall
<alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>as_core[c0acaeba6ab4c2e0]::clone::Clone>
::clone(ulonglong *param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 local_90 [2];
  undefined8 local_80;
  longlong local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong *local_58;
  undefined4 local_4e;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined4 uStack_46;
  undefined2 uStack_42;
  undefined2 uStack_40;
  undefined6 uStack_3e;
  undefined8 uStack_38;
  
  uVar4 = *(ulonglong *)(param_2 + 0x10);
  uVar14 = uVar4 * 0x20;
  if (uVar14 < 0x7ffffffffffffff9 && uVar4 >> 0x3b == 0) goto LAB_001889e6;
  param_1 = (ulonglong *)0x0;
  do {
    (*(code *)PTR_handle_error_00219c78)();
    param_2 = uVar14;
LAB_001889e6:
    local_58 = param_1;
    if (uVar14 == 0) {
      local_70 = 0;
      local_68 = 8;
      goto LAB_00188baa;
    }
    lVar5 = *(longlong *)(param_2 + 8);
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
    param_1 = (ulonglong *)&DAT_00000008;
    uVar10 = (*(code *)PTR___rust_alloc_00219c88)();
  } while (uVar10 == 0);
  local_70 = uVar4;
  local_68 = uVar10;
  if (uVar4 != 0) {
    local_78 = lVar5 + 8;
    uVar11 = 0;
    uVar13 = 0;
    uVar12 = uVar14;
    do {
      if (uVar14 == uVar11) break;
      uVar3 = *(undefined1 *)(lVar5 + uVar11);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(uVar3) {
      case 1:
        uVar12 = (ulonglong)*(byte *)(lVar5 + 1 + uVar11);
        break;
      case 2:
        puVar2 = (undefined8 *)(lVar5 + 8 + uVar11);
        uVar8 = *puVar2;
        uVar9 = puVar2[1];
        uStack_48 = (undefined2)uVar8;
        uStack_46 = (undefined4)((ulonglong)uVar8 >> 0x10);
        uStack_42 = (undefined2)((ulonglong)uVar8 >> 0x30);
        uStack_40 = (undefined2)uVar9;
        uStack_3e = (undefined6)((ulonglong)uVar9 >> 0x10);
        break;
      case 3:
        (*(code *)PTR_clone_00219d58)();
        goto LAB_00188b06;
      case 4:
        clone(local_90,local_78 + uVar11);
LAB_00188b06:
        uVar12 = uVar12 & 0xff;
        uStack_38 = local_80;
        uStack_48 = (undefined2)local_90[0];
        uStack_46 = (undefined4)((ulonglong)local_90[0] >> 0x10);
        uStack_42 = (undefined2)((ulonglong)local_90[0] >> 0x30);
        uStack_40 = (undefined2)local_90[1];
        uStack_3e = (undefined6)((ulonglong)local_90[1] >> 0x10);
        break;
      case 5:
        if (*(longlong *)(lVar5 + 0x18 + uVar11) == 0) {
          local_90[0] = 0;
          local_80 = 0;
        }
        else {
          lVar6 = *(longlong *)(lVar5 + 8 + uVar11);
          if (lVar6 == 0) {
            (*(code *)PTR_unwrap_failed_00219e58)();
                    /* WARNING: Does not return */
            pcVar7 = (code *)invalidInstructionException();
            (*pcVar7)();
          }
          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<_,_,_>as_core[c0acaeba6ab4c2e0]::clone::Clone>
          ::clone::clone_subtree::
          <alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value,alloc[12e961f32105355]::alloc::Global>
                    (local_90,lVar6,*(undefined8 *)(lVar5 + 0x10 + uVar11));
          uVar12 = uVar12 & 0xff;
        }
        uStack_38 = local_80;
        uStack_48 = (undefined2)local_90[0];
        uStack_46 = (undefined4)((ulonglong)local_90[0] >> 0x10);
        uStack_42 = (undefined2)((ulonglong)local_90[0] >> 0x30);
        uStack_40 = (undefined2)local_90[1];
        uStack_3e = (undefined6)((ulonglong)local_90[1] >> 0x10);
      }
      uVar13 = uVar13 + 1;
      *(undefined1 *)(uVar10 + uVar11) = uVar3;
      *(char *)(uVar10 + 1 + uVar11) = (char)uVar12;
      puVar1 = (undefined4 *)(uVar10 + 2 + uVar11);
      *puVar1 = local_4e;
      puVar1[1] = CONCAT22(uStack_48,uStack_4a);
      puVar1[2] = uStack_46;
      puVar1[3] = CONCAT22(uStack_40,uStack_42);
      puVar2 = (undefined8 *)(uVar10 + 0x10 + uVar11);
      *puVar2 = CONCAT62(uStack_3e,uStack_40);
      puVar2[1] = uStack_38;
      uVar11 = uVar11 + 0x20;
    } while (uVar4 != uVar13);
  }
LAB_00188baa:
  local_58[2] = uVar4;
  *local_58 = local_70;
  local_58[1] = local_68;
  return;
}


