// 0049fbb0 <&str,<&str_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>

/* core[c0acaeba6ab4c2e0]::slice::sort::unstable::heapsort::heapsort::<&str, <&str as
   core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt> */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::unstable::heapsort::heapsort::
<&str,<&str_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
          (undefined4 param_1,undefined8 *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  uVar8 = (param_3 >> 1) + param_3;
  do {
    uVar8 = uVar8 - 1;
    uVar12 = uVar8 - param_3;
    if (uVar8 < param_3) {
      uVar3 = *param_2;
      uVar4 = param_2[1];
      uVar5 = (param_2 + uVar8 * 2)[1];
      *param_2 = param_2[uVar8 * 2];
      param_2[1] = uVar5;
      local_48 = (undefined4)uVar3;
      uStack_44 = (undefined4)((ulonglong)uVar3 >> 0x20);
      uStack_40 = (undefined4)uVar4;
      uStack_3c = (undefined4)((ulonglong)uVar4 >> 0x20);
      puVar1 = param_2 + uVar8 * 2;
      *(undefined4 *)puVar1 = local_48;
      *(undefined4 *)((longlong)puVar1 + 4) = uStack_44;
      *(undefined4 *)(puVar1 + 1) = uStack_40;
      *(undefined4 *)((longlong)puVar1 + 0xc) = uStack_3c;
      uVar12 = 0;
      param_1 = local_48;
    }
    uVar9 = uVar8;
    if (param_3 < uVar8) {
      uVar9 = param_3;
    }
    uVar11 = uVar12 * 2 + 1;
    if (uVar11 < uVar9) {
      do {
        uVar7 = uVar12 * 2 + 2;
        if (uVar7 < uVar9) {
          uVar2 = param_2[uVar11 * 2 + 1];
          uVar7 = param_2[uVar7 * 2 + 1];
          uVar10 = uVar7;
          if (uVar2 < uVar7) {
            uVar10 = uVar2;
          }
          iVar6 = (*(code *)PTR_memcmp_00799528)(uVar2,uVar10);
          lVar13 = uVar2 - uVar7;
          if (iVar6 != 0) {
            lVar13 = (longlong)iVar6;
          }
          uVar7 = uVar11 - (lVar13 >> 0x3f);
          param_1 = extraout_XMM0_Da;
        }
        else {
          uVar7 = uVar11;
        }
        uVar3 = param_2[uVar12 * 2];
        uVar11 = param_2[uVar12 * 2 + 1];
        uVar4 = param_2[uVar7 * 2];
        uVar2 = param_2[uVar7 * 2 + 1];
        uVar10 = uVar2;
        if (uVar11 < uVar2) {
          uVar10 = uVar11;
        }
        iVar6 = (*(code *)PTR_memcmp_00799528)(param_1,uVar10);
        lVar13 = uVar11 - uVar2;
        if (iVar6 != 0) {
          lVar13 = (longlong)iVar6;
        }
        param_1 = extraout_XMM0_Da_00;
        if (-1 < lVar13) break;
        param_2[uVar12 * 2] = uVar4;
        param_2[uVar7 * 2] = uVar3;
        (param_2 + uVar12 * 2)[1] = uVar2;
        (param_2 + uVar7 * 2)[1] = uVar11;
        uVar11 = uVar7 * 2 + 1;
        uVar12 = uVar7;
      } while (uVar11 < uVar9);
    }
    if (uVar8 == 0) {
      return;
    }
  } while( true );
}


