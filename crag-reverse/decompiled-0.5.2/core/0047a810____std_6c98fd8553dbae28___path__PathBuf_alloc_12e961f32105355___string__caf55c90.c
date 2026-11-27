// 0047a810 <(std[6c98fd8553dbae28]::path::PathBuf,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::time::SystemTime,u64),<[(std[6c98fd8553dbae28]::path::PathBuf,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::time::SystemTime,u64)]>::sort_by_key<std[6c98fd8553dbae28]::time::SystemTime,craggemini_core[66f3c71560d70857]::pool::prune_account_cuts::{closure#2}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::stable::drift::sort::<(std[6c98fd8553dbae28]::path::PathBuf,
   alloc[12e961f32105355]::string::String, std[6c98fd8553dbae28]::time::SystemTime, u64),
   <[(std[6c98fd8553dbae28]::path::PathBuf, alloc[12e961f32105355]::string::String,
   std[6c98fd8553dbae28]::time::SystemTime,
   u64)]>::sort_by_key<std[6c98fd8553dbae28]::time::SystemTime,
   craggemini_core[66f3c71560d70857]::pool::prune_account_cuts::{closure#2}>::{closure#0}> */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::stable::drift::sort::
<(std[6c98fd8553dbae28]::path::PathBuf,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::time::SystemTime,u64),<[(std[6c98fd8553dbae28]::path::PathBuf,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::time::SystemTime,u64)]>::sort_by_key<std[6c98fd8553dbae28]::time::SystemTime,craggemini_core[66f3c71560d70857]::pool::prune_account_cuts::_closure_2_>::_closure_0_>
          (longlong param_1,ulonglong param_2,undefined4 *param_3,ulonglong param_4,char param_5,
          undefined8 param_6)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  undefined4 *puVar25;
  bool bVar26;
  ulonglong uVar27;
  undefined8 *puVar28;
  longlong lVar29;
  ulonglong uVar30;
  longlong lVar31;
  undefined4 *puVar32;
  ulonglong uVar33;
  undefined4 *puVar34;
  uint uVar35;
  undefined8 *puVar36;
  undefined4 *puVar37;
  uint *puVar38;
  ulonglong uVar39;
  undefined4 *puVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  ulonglong local_2d8;
  byte abStack_283 [67];
  ulonglong auStack_240 [66];
  
  if (param_2 < 2) {
    return;
  }
  lVar22 = (0x4000000000000000 / param_2 + 1) - (ulonglong)(0x4000000000000000U % param_2 == 0);
  if (param_2 < 0x1001) {
    uVar27 = param_2 - (param_2 >> 1);
    uVar23 = 0x40;
    if (uVar27 < 0x40) {
      uVar23 = uVar27;
    }
  }
  else {
    uVar23 = (*(code *)PTR_sqrt_approx_007999c8)();
  }
  uVar27 = 1;
  uVar33 = 0;
  uVar39 = 0;
  local_2d8 = param_2;
  if (param_2 == 0) goto LAB_0047a950;
LAB_0047a8f0:
  lVar29 = param_1 + uVar33 * 0x48;
  if (local_2d8 < uVar23) {
LAB_0047a904:
    if (param_5 == '\0') {
      if (uVar23 <= local_2d8) {
        local_2d8 = uVar23;
      }
      local_2d8 = local_2d8 * 2;
      goto LAB_0047ab98;
    }
    if (0x1f < local_2d8) {
      local_2d8 = 0x20;
    }
    quicksort::quicksort::
    <(std[6c98fd8553dbae28]::path::PathBuf,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::time::SystemTime,u64),<[(std[6c98fd8553dbae28]::path::PathBuf,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::time::SystemTime,u64)]>::sort_by_key<std[6c98fd8553dbae28]::time::SystemTime,craggemini_core[66f3c71560d70857]::pool::prune_account_cuts::_closure_2_>::_closure_0_>
              (lVar29,local_2d8,param_3,param_4,0,0,param_6);
    uVar24 = local_2d8 & 0xffffffff;
  }
  else if (local_2d8 < 2) {
    uVar24 = local_2d8;
  }
  else {
    lVar31 = *(longlong *)(lVar29 + 0x78);
    uVar35 = *(uint *)(lVar29 + 0x80);
    bVar26 = lVar31 < *(longlong *)(lVar29 + 0x30);
    if (lVar31 == *(longlong *)(lVar29 + 0x30)) {
      bVar26 = uVar35 < *(uint *)(lVar29 + 0x38);
    }
    if (bVar26) {
      if (local_2d8 != 2) {
        puVar38 = (uint *)(param_1 + 200 + uVar33 * 0x48);
        uVar24 = 2;
        do {
          lVar2 = *(longlong *)(puVar38 + -2);
          uVar1 = *puVar38;
          bVar5 = lVar2 < lVar31;
          if (lVar2 == lVar31) {
            bVar5 = uVar1 < uVar35;
          }
          if (!bVar5) goto LAB_0047aa9a;
          uVar24 = uVar24 + 1;
          puVar38 = puVar38 + 0x12;
          lVar31 = lVar2;
          uVar35 = uVar1;
        } while (local_2d8 != uVar24);
        goto LAB_0047aa97;
      }
      uVar24 = 2;
      uVar30 = 1;
LAB_0047aac3:
      puVar28 = (undefined8 *)(param_1 + 0x40 + uVar33 * 0x48);
      puVar36 = (undefined8 *)(uVar33 * 0x48 + uVar24 * 0x48 + param_1 + -8);
      do {
        uVar3 = puVar28[-8];
        puVar28[-8] = puVar36[-8];
        puVar36[-8] = uVar3;
        uVar3 = puVar28[-7];
        puVar28[-7] = puVar36[-7];
        puVar36[-7] = uVar3;
        uVar3 = puVar28[-6];
        puVar28[-6] = puVar36[-6];
        puVar36[-6] = uVar3;
        uVar3 = puVar28[-5];
        puVar28[-5] = puVar36[-5];
        puVar36[-5] = uVar3;
        uVar3 = puVar28[-4];
        puVar28[-4] = puVar36[-4];
        puVar36[-4] = uVar3;
        uVar3 = puVar28[-3];
        puVar28[-3] = puVar36[-3];
        puVar36[-3] = uVar3;
        uVar3 = puVar28[-2];
        puVar28[-2] = puVar36[-2];
        puVar36[-2] = uVar3;
        uVar3 = puVar28[-1];
        puVar28[-1] = puVar36[-1];
        puVar36[-1] = uVar3;
        uVar3 = *puVar28;
        *puVar28 = *puVar36;
        *puVar36 = uVar3;
        puVar28 = puVar28 + 9;
        puVar36 = puVar36 + -9;
        uVar30 = uVar30 - 1;
      } while (uVar30 != 0);
    }
    else {
      uVar24 = 2;
      if (local_2d8 != 2) {
        puVar38 = (uint *)(param_1 + 200 + uVar33 * 0x48);
        uVar24 = 2;
        do {
          lVar2 = *(longlong *)(puVar38 + -2);
          uVar1 = *puVar38;
          bVar5 = lVar2 < lVar31;
          if (lVar2 == lVar31) {
            bVar5 = uVar1 < uVar35;
          }
          if (bVar5) goto LAB_0047aa9a;
          uVar24 = uVar24 + 1;
          puVar38 = puVar38 + 0x12;
          lVar31 = lVar2;
          uVar35 = uVar1;
        } while (local_2d8 != uVar24);
LAB_0047aa97:
        uVar24 = local_2d8;
LAB_0047aa9a:
        if (uVar24 < uVar23) goto LAB_0047a904;
        uVar30 = uVar24 >> 1;
        if ((bool)(bVar26 & uVar30 != 0)) goto LAB_0047aac3;
      }
    }
  }
  local_2d8 = uVar24 * 2 + 1;
LAB_0047ab98:
  uVar24 = ((local_2d8 >> 1) + uVar33 * 2) * lVar22 ^ (uVar33 * 2 - (uVar27 >> 1)) * lVar22;
  lVar29 = 0x3f;
  if (uVar24 != 0) {
    for (; uVar24 >> lVar29 == 0; lVar29 = lVar29 + -1) {
    }
  }
  uVar35 = (uint)lVar29 ^ 0x3f;
  uVar24 = uVar27;
  do {
    uVar27 = local_2d8;
    if (1 < uVar39) {
      do {
        while( true ) {
          if (abStack_283[uVar39] < (byte)uVar35) goto LAB_0047af16;
          uVar39 = uVar39 - 1;
          uVar4 = auStack_240[uVar39];
          uVar41 = uVar4 >> 1;
          uVar42 = uVar24 >> 1;
          uVar30 = uVar42 + uVar41;
          if ((param_4 < uVar30) || ((((uint)uVar4 | (uint)uVar24) & 1) != 0)) break;
          uVar24 = uVar30 * 2;
          if (uVar39 < 2) goto LAB_0047af10;
        }
        puVar32 = (undefined4 *)(param_1 + (uVar33 - uVar30) * 0x48);
        if ((uVar4 & 1) == 0) {
          lVar29 = 0x3f;
          if ((uVar41 | 1) != 0) {
            for (; (uVar41 | 1) >> lVar29 == 0; lVar29 = lVar29 + -1) {
            }
          }
          quicksort::quicksort::
          <(std[6c98fd8553dbae28]::path::PathBuf,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::time::SystemTime,u64),<[(std[6c98fd8553dbae28]::path::PathBuf,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::time::SystemTime,u64)]>::sort_by_key<std[6c98fd8553dbae28]::time::SystemTime,craggemini_core[66f3c71560d70857]::pool::prune_account_cuts::_closure_2_>::_closure_0_>
                    (puVar32,uVar41,param_3,param_4,((uint)lVar29 ^ 0x3f) * 2 ^ 0x7e,0,param_6);
        }
        if ((uVar24 & 1) == 0) {
          lVar29 = 0x3f;
          if ((uVar42 | 1) != 0) {
            for (; (uVar42 | 1) >> lVar29 == 0; lVar29 = lVar29 + -1) {
            }
          }
          quicksort::quicksort::
          <(std[6c98fd8553dbae28]::path::PathBuf,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::time::SystemTime,u64),<[(std[6c98fd8553dbae28]::path::PathBuf,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::time::SystemTime,u64)]>::sort_by_key<std[6c98fd8553dbae28]::time::SystemTime,craggemini_core[66f3c71560d70857]::pool::prune_account_cuts::_closure_2_>::_closure_0_>
                    (puVar32 + uVar41 * 0x12,uVar42,param_3,param_4,((uint)lVar29 ^ 0x3f) * 2 ^ 0x7e
                     ,0,param_6);
        }
        if ((uVar42 != 0) && (uVar41 != 0)) {
          uVar24 = uVar41;
          if (uVar42 < uVar41) {
            uVar24 = uVar42;
          }
          if (uVar24 <= param_4) {
            puVar34 = puVar32 + uVar41 * 0x12;
            (*(code *)PTR_memcpy_00799008)(uVar41 * 9,uVar24 * 0x48);
            puVar40 = param_3 + uVar24 * 0x12;
            puVar37 = param_3;
            if (uVar42 < uVar41) {
              puVar25 = (undefined4 *)(uVar33 * 0x48 + param_1 + -0x48);
              do {
                bVar26 = *(longlong *)(puVar40 + -6) < *(longlong *)(puVar34 + -6);
                if (*(longlong *)(puVar40 + -6) == *(longlong *)(puVar34 + -6)) {
                  bVar26 = (uint)puVar40[-4] < (uint)puVar34[-4];
                }
                puVar6 = puVar34;
                if (bVar26 == false) {
                  puVar6 = puVar40;
                }
                *(undefined8 *)(puVar25 + 0x10) = *(undefined8 *)(puVar6 + -2);
                uVar7 = puVar6[-0x12];
                uVar8 = puVar6[-0x11];
                uVar9 = puVar6[-0x10];
                uVar10 = puVar6[-0xf];
                uVar11 = puVar6[-0xe];
                uVar12 = puVar6[-0xd];
                uVar13 = puVar6[-0xc];
                uVar14 = puVar6[-0xb];
                uVar15 = puVar6[-10];
                uVar16 = puVar6[-9];
                uVar17 = puVar6[-8];
                uVar18 = puVar6[-7];
                uVar19 = puVar6[-5];
                uVar20 = puVar6[-4];
                uVar21 = puVar6[-3];
                puVar25[0xc] = puVar6[-6];
                puVar25[0xd] = uVar19;
                puVar25[0xe] = uVar20;
                puVar25[0xf] = uVar21;
                puVar25[8] = uVar15;
                puVar25[9] = uVar16;
                puVar25[10] = uVar17;
                puVar25[0xb] = uVar18;
                puVar25[4] = uVar11;
                puVar25[5] = uVar12;
                puVar25[6] = uVar13;
                puVar25[7] = uVar14;
                *puVar25 = uVar7;
                puVar25[1] = uVar8;
                puVar25[2] = uVar9;
                puVar25[3] = uVar10;
                puVar34 = puVar34 + (ulonglong)(bVar26 ^ 1) * 0x12 + -0x12;
                lVar29 = (ulonglong)bVar26 * 9;
                puVar40 = puVar40 + (ulonglong)bVar26 * 0x12 + -0x12;
              } while ((puVar34 != puVar32) && (puVar25 = puVar25 + -0x12, puVar40 != param_3));
            }
            else {
              do {
                bVar26 = *(longlong *)(puVar34 + 0xc) < *(longlong *)(puVar37 + 0xc);
                if (*(longlong *)(puVar34 + 0xc) == *(longlong *)(puVar37 + 0xc)) {
                  bVar26 = (uint)puVar34[0xe] < (uint)puVar37[0xe];
                }
                puVar25 = puVar34;
                if (bVar26 == false) {
                  puVar25 = puVar37;
                }
                *(undefined8 *)(puVar32 + 0x10) = *(undefined8 *)(puVar25 + 0x10);
                uVar7 = *puVar25;
                uVar8 = puVar25[1];
                uVar9 = puVar25[2];
                uVar10 = puVar25[3];
                uVar11 = puVar25[4];
                uVar12 = puVar25[5];
                uVar13 = puVar25[6];
                uVar14 = puVar25[7];
                uVar15 = puVar25[8];
                uVar16 = puVar25[9];
                uVar17 = puVar25[10];
                uVar18 = puVar25[0xb];
                uVar19 = puVar25[0xd];
                uVar20 = puVar25[0xe];
                uVar21 = puVar25[0xf];
                puVar32[0xc] = puVar25[0xc];
                puVar32[0xd] = uVar19;
                puVar32[0xe] = uVar20;
                puVar32[0xf] = uVar21;
                puVar32[8] = uVar15;
                puVar32[9] = uVar16;
                puVar32[10] = uVar17;
                puVar32[0xb] = uVar18;
                puVar32[4] = uVar11;
                puVar32[5] = uVar12;
                puVar32[6] = uVar13;
                puVar32[7] = uVar14;
                *puVar32 = uVar7;
                puVar32[1] = uVar8;
                puVar32[2] = uVar9;
                puVar32[3] = uVar10;
                lVar29 = (ulonglong)(bVar26 ^ 1) * 9;
                puVar37 = puVar37 + (ulonglong)(bVar26 ^ 1) * 0x12;
                puVar32 = puVar32 + 0x12;
              } while ((puVar37 != puVar40) &&
                      (puVar34 = puVar34 + (ulonglong)bVar26 * 0x12,
                      puVar34 != (undefined4 *)(param_1 + uVar33 * 0x48)));
            }
            (*(code *)PTR_memcpy_00799008)(lVar29,(longlong)puVar40 - (longlong)puVar37);
          }
        }
        uVar24 = uVar30 * 2 + 1;
      } while (1 < uVar39);
LAB_0047af10:
      uVar39 = 1;
    }
LAB_0047af16:
    auStack_240[uVar39] = uVar24;
    abStack_283[uVar39 + 1] = (byte)uVar35;
    if (param_2 <= uVar33) {
      if ((uVar24 & 1) != 0) {
        return;
      }
      lVar22 = 0x3f;
      if ((param_2 | 1) != 0) {
        for (; (param_2 | 1) >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      quicksort::quicksort::
      <(std[6c98fd8553dbae28]::path::PathBuf,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::time::SystemTime,u64),<[(std[6c98fd8553dbae28]::path::PathBuf,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::time::SystemTime,u64)]>::sort_by_key<std[6c98fd8553dbae28]::time::SystemTime,craggemini_core[66f3c71560d70857]::pool::prune_account_cuts::_closure_2_>::_closure_0_>
                (param_1,param_2,param_3,param_4,((uint)lVar22 ^ 0x3f) * 2 ^ 0x7e,0,param_6);
      return;
    }
    uVar39 = uVar39 + 1;
    uVar33 = uVar33 + (uVar27 >> 1);
    local_2d8 = param_2 - uVar33;
    if (uVar33 <= param_2 && local_2d8 != 0) goto LAB_0047a8f0;
LAB_0047a950:
    uVar35 = 0;
    local_2d8 = 1;
    uVar24 = uVar27;
  } while( true );
}


