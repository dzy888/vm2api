// 00385cd0 <(std[6c98fd8553dbae28]::path::PathBuf,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::time::SystemTime,u64),<[(std[6c98fd8553dbae28]::path::PathBuf,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::time::SystemTime,u64)]>::sort_by_key<std[6c98fd8553dbae28]::time::SystemTime,craggemini_core[66f3c71560d70857]::pool::prune_account_cuts::{closure#2}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::insertion_sort_shift_left::<(std[6c98fd8553dbae28]::path::PathBuf,
   alloc[12e961f32105355]::string::String, std[6c98fd8553dbae28]::time::SystemTime, u64),
   <[(std[6c98fd8553dbae28]::path::PathBuf, alloc[12e961f32105355]::string::String,
   std[6c98fd8553dbae28]::time::SystemTime,
   u64)]>::sort_by_key<std[6c98fd8553dbae28]::time::SystemTime,
   craggemini_core[66f3c71560d70857]::pool::prune_account_cuts::{closure#2}>::{closure#0}> */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::insertion_sort_shift_left::
<(std[6c98fd8553dbae28]::path::PathBuf,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::time::SystemTime,u64),<[(std[6c98fd8553dbae28]::path::PathBuf,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::time::SystemTime,u64)]>::sort_by_key<std[6c98fd8553dbae28]::time::SystemTime,craggemini_core[66f3c71560d70857]::pool::prune_account_cuts::_closure_2_>::_closure_0_>
          (undefined8 *param_1,ulonglong param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  longlong lVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  longlong lVar25;
  
  if (param_2 <= param_3 - 1) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  if (param_3 != param_2) {
    lVar22 = param_3 * 0x48;
    puVar23 = param_1 + param_3 * 9;
    do {
      lVar4 = puVar23[6];
      uVar2 = *(uint *)(puVar23 + 7);
      bVar8 = lVar4 < (longlong)puVar23[-3];
      if (lVar4 == puVar23[-3]) {
        bVar8 = uVar2 < *(uint *)(puVar23 + -2);
      }
      if (bVar8) {
        uVar9 = *puVar23;
        uVar10 = puVar23[1];
        uVar11 = puVar23[2];
        uVar12 = puVar23[3];
        uVar13 = puVar23[4];
        uVar14 = puVar23[5];
        uVar5 = *(undefined8 *)((longlong)puVar23 + 0x3c);
        uVar3 = *(undefined4 *)((longlong)puVar23 + 0x44);
        lVar6 = lVar22;
        do {
          lVar25 = lVar6;
          *(undefined8 *)((longlong)param_1 + lVar25 + 0x40) =
               *(undefined8 *)((longlong)param_1 + lVar25 + -8);
          puVar24 = (undefined8 *)((longlong)param_1 + lVar25 + -0x48);
          uVar15 = *puVar24;
          uVar16 = puVar24[1];
          puVar24 = (undefined8 *)((longlong)param_1 + lVar25 + -0x38);
          uVar17 = *puVar24;
          uVar18 = puVar24[1];
          puVar24 = (undefined8 *)((longlong)param_1 + lVar25 + -0x28);
          uVar19 = *puVar24;
          uVar20 = puVar24[1];
          puVar24 = (undefined8 *)((longlong)param_1 + lVar25 + -0x18);
          uVar21 = puVar24[1];
          puVar1 = (undefined8 *)((longlong)param_1 + lVar25 + 0x30);
          *puVar1 = *puVar24;
          puVar1[1] = uVar21;
          puVar24 = (undefined8 *)((longlong)param_1 + lVar25 + 0x20);
          *puVar24 = uVar19;
          puVar24[1] = uVar20;
          puVar24 = (undefined8 *)((longlong)param_1 + lVar25 + 0x10);
          *puVar24 = uVar17;
          puVar24[1] = uVar18;
          *(undefined8 *)((longlong)param_1 + lVar25) = uVar15;
          ((undefined8 *)((longlong)param_1 + lVar25))[1] = uVar16;
          if (lVar25 == 0x48) {
            puVar24 = param_1;
            goto LAB_00385d03;
          }
          lVar6 = *(longlong *)((longlong)param_1 + lVar25 + -0x60);
          bVar8 = lVar4 < lVar6;
          if (lVar4 == lVar6) {
            bVar8 = uVar2 < *(uint *)((longlong)param_1 + lVar25 + -0x58);
          }
          lVar6 = lVar25 + -0x48;
        } while (bVar8);
        puVar24 = (undefined8 *)(lVar25 + -0x48 + (longlong)param_1);
LAB_00385d03:
        puVar24[4] = uVar13;
        puVar24[5] = uVar14;
        puVar24[2] = uVar11;
        puVar24[3] = uVar12;
        *puVar24 = uVar9;
        puVar24[1] = uVar10;
        *(longlong *)((longlong)param_1 + lVar25 + -0x18) = lVar4;
        *(uint *)((longlong)param_1 + lVar25 + -0x10) = uVar2;
        *(undefined8 *)((longlong)param_1 + lVar25 + -0xc) = uVar5;
        *(undefined4 *)((longlong)param_1 + lVar25 + -4) = uVar3;
      }
      puVar23 = puVar23 + 9;
      lVar22 = lVar22 + 0x48;
    } while (puVar23 != param_1 + param_2 * 9);
  }
  return;
}


