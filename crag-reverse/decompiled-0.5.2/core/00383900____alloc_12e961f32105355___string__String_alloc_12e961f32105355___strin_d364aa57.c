// 00383900 <(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String),<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>

/* core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::insert_tail::<(alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::string::String), <(alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::string::String) as core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt> */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::insert_tail::
<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String),<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
          (undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined4 uVar15;
  undefined4 extraout_XMM0_Da;
  undefined8 local_50;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar13 = param_2[-4];
  uVar9 = uVar13;
  if (uVar2 < uVar13) {
    uVar9 = uVar2;
  }
  iVar6 = (*(code *)PTR_memcmp_00799528)(param_4,uVar9);
  uVar13 = uVar2 - uVar13;
  if (iVar6 != 0) {
    uVar13 = (longlong)iVar6;
  }
  uVar7 = 2;
  if (uVar13 != 0) {
    uVar7 = (uint)(uVar13 >> 0x3f);
  }
  if (uVar7 != 0) {
    if (uVar7 == 2) {
      local_50 = param_2[4];
      uVar9 = param_2[5];
      uVar11 = param_2[-1];
      uVar10 = uVar11;
      if (uVar9 < uVar11) {
        uVar10 = uVar9;
      }
      iVar6 = (*(code *)PTR_memcmp_00799528)(uVar13 >> 0x3f,uVar10);
      lVar12 = uVar9 - uVar11;
      if (iVar6 != 0) {
        lVar12 = (longlong)iVar6;
      }
      if (-1 < lVar12) {
        return;
      }
    }
    else {
      local_50 = param_2[4];
      uVar9 = param_2[5];
    }
    puVar14 = param_2 + -6;
    uVar3 = *param_2;
    uVar4 = param_2[3];
    uVar15 = *(undefined4 *)puVar14;
    *(undefined4 *)param_2 = uVar15;
    *(undefined4 *)((longlong)param_2 + 4) = *(undefined4 *)((longlong)param_2 + -0x2c);
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_2 + -5);
    *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)param_2 + -0x24);
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_2 + -4);
    *(undefined4 *)((longlong)param_2 + 0x14) = *(undefined4 *)((longlong)param_2 + -0x1c);
    *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_2 + -3);
    *(undefined4 *)((longlong)param_2 + 0x1c) = *(undefined4 *)((longlong)param_2 + -0x14);
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_2 + -2);
    *(undefined4 *)((longlong)param_2 + 0x24) = *(undefined4 *)((longlong)param_2 + -0xc);
    *(undefined4 *)(param_2 + 5) = *(undefined4 *)(param_2 + -1);
    *(undefined4 *)((longlong)param_2 + 0x2c) = *(undefined4 *)((longlong)param_2 + -4);
    puVar5 = PTR_memcmp_00799528;
    puVar8 = puVar14;
    if (puVar14 != param_1) {
      do {
        uVar13 = puVar14[-4];
        uVar11 = uVar13;
        if (uVar2 < uVar13) {
          uVar11 = uVar2;
        }
        iVar6 = (*(code *)puVar5)(uVar15,uVar11);
        lVar12 = uVar2 - uVar13;
        if (iVar6 != 0) {
          lVar12 = (longlong)iVar6;
        }
        uVar7 = 2;
        if (lVar12 != 0) {
          uVar7 = (uint)((ulonglong)lVar12 >> 0x3f);
        }
        puVar8 = puVar14;
        if ((char)uVar7 == '\x02') {
          uVar13 = puVar14[-1];
          uVar11 = uVar13;
          if (uVar9 < uVar13) {
            uVar11 = uVar9;
          }
          iVar6 = (*(code *)puVar5)(extraout_XMM0_Da,uVar11);
          lVar12 = uVar9 - uVar13;
          if (iVar6 != 0) {
            lVar12 = (longlong)iVar6;
          }
          if (-1 < lVar12) break;
        }
        else if (uVar7 == 0) break;
        puVar8 = puVar14 + -6;
        uVar15 = *(undefined4 *)puVar8;
        *(undefined4 *)(puVar14 + 4) = *(undefined4 *)(puVar14 + -2);
        *(undefined4 *)((longlong)puVar14 + 0x24) = *(undefined4 *)((longlong)puVar14 + -0xc);
        *(undefined4 *)(puVar14 + 5) = *(undefined4 *)(puVar14 + -1);
        *(undefined4 *)((longlong)puVar14 + 0x2c) = *(undefined4 *)((longlong)puVar14 + -4);
        *(undefined4 *)(puVar14 + 2) = *(undefined4 *)(puVar14 + -4);
        *(undefined4 *)((longlong)puVar14 + 0x14) = *(undefined4 *)((longlong)puVar14 + -0x1c);
        *(undefined4 *)(puVar14 + 3) = *(undefined4 *)(puVar14 + -3);
        *(undefined4 *)((longlong)puVar14 + 0x1c) = *(undefined4 *)((longlong)puVar14 + -0x14);
        *(undefined4 *)puVar14 = uVar15;
        *(undefined4 *)((longlong)puVar14 + 4) = *(undefined4 *)((longlong)puVar14 + -0x2c);
        *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar14 + -5);
        *(undefined4 *)((longlong)puVar14 + 0xc) = *(undefined4 *)((longlong)puVar14 + -0x24);
        puVar14 = puVar8;
      } while (puVar8 != param_1);
    }
    *puVar8 = uVar3;
    puVar8[1] = uVar1;
    puVar8[2] = uVar2;
    puVar8[3] = uVar4;
    puVar8[4] = local_50;
    puVar8[5] = uVar9;
  }
  return;
}


