// 0068a320 try_insert

/* <http[56314f485c23ccf6]::header::map::VacantEntry<http[56314f485c23ccf6]::header::value::HeaderValue>>::try_insert
    */

longlong __rustcall
<http[56314f485c23ccf6]::header::map::VacantEntry<http[56314f485c23ccf6]::header::value::HeaderValue>>
::try_insert(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  byte bVar4;
  ushort uVar5;
  undefined2 uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined2 uVar16;
  bool bVar17;
  undefined4 uVar18;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  longlong local_58;
  longlong lStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined2 local_38;
  undefined6 uStack_36;
  
  plVar7 = (longlong *)*param_1;
  lVar12 = param_1[1];
  lStack_50 = param_1[2];
  uVar8 = param_1[3];
  uStack_40 = param_1[4];
  uVar9 = plVar7[5];
  if (uVar9 < 0x8000) {
    uVar16 = *(undefined2 *)(param_1 + 6);
    uVar13 = param_1[5];
    bVar4 = *(byte *)((longlong)param_1 + 0x32);
    local_80 = (undefined4)*param_2;
    uStack_7c = *(undefined4 *)((longlong)param_2 + 4);
    uStack_78 = (undefined4)param_2[1];
    uStack_74 = *(undefined4 *)((longlong)param_2 + 0xc);
    local_70 = (undefined4)param_2[2];
    uStack_6c = *(undefined4 *)((longlong)param_2 + 0x14);
    uStack_68 = (undefined4)param_2[3];
    uStack_64 = *(undefined4 *)((longlong)param_2 + 0x1c);
    local_60 = param_2[4];
    local_98 = 0;
    local_58 = lVar12;
    local_48 = uVar8;
    local_38 = uVar16;
    if (uVar9 == plVar7[3]) {
      (*(code *)PTR_grow_one_0079a2e8)();
    }
    lVar12 = plVar7[4];
    lVar11 = uVar9 * 0x68;
    *(ulonglong *)(lVar12 + 0x60 + lVar11) = CONCAT62(uStack_36,local_38);
    puVar1 = (undefined8 *)(lVar12 + 0x50 + lVar11);
    *puVar1 = local_48;
    puVar1[1] = uStack_40;
    plVar2 = (longlong *)(lVar12 + 0x40 + lVar11);
    *plVar2 = local_58;
    plVar2[1] = lStack_50;
    puVar3 = (undefined4 *)(lVar12 + 0x30 + lVar11);
    *puVar3 = uStack_68;
    puVar3[1] = uStack_64;
    puVar3[2] = (undefined4)local_60;
    puVar3[3] = local_60._4_4_;
    puVar3 = (undefined4 *)(lVar12 + 0x20 + lVar11);
    *puVar3 = uStack_78;
    puVar3[1] = uStack_74;
    puVar3[2] = local_70;
    puVar3[3] = uStack_6c;
    puVar3 = (undefined4 *)(lVar12 + 0x10 + lVar11);
    *puVar3 = uStack_88;
    puVar3[1] = uStack_84;
    puVar3[2] = local_80;
    puVar3[3] = uStack_7c;
    puVar3 = (undefined4 *)(lVar12 + lVar11);
    *puVar3 = (undefined4)local_98;
    puVar3[1] = local_98._4_4_;
    puVar3[2] = uStack_90;
    puVar3[3] = uStack_8c;
    plVar7[5] = uVar9 + 1;
    lVar12 = plVar7[9];
    uVar10 = plVar7[10];
    uVar14 = 0;
    uVar15 = uVar9 & 0xffffffff;
    while( true ) {
      bVar17 = uVar10 <= uVar13;
      if (bVar17) {
        uVar13 = 0;
      }
      if (bVar17 && uVar10 == 0) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      uVar5 = *(ushort *)(lVar12 + uVar13 * 4);
      if (uVar5 == 0xffff) break;
      uVar14 = uVar14 + 1;
      uVar6 = *(undefined2 *)(lVar12 + 2 + uVar13 * 4);
      *(short *)(lVar12 + uVar13 * 4) = (short)uVar15;
      *(undefined2 *)(lVar12 + 2 + uVar13 * 4) = uVar16;
      uVar13 = uVar13 + 1;
      uVar15 = (ulonglong)uVar5;
      uVar16 = uVar6;
    }
    *(short *)(lVar12 + uVar13 * 4) = (short)uVar15;
    *(undefined2 *)(lVar12 + 2 + uVar13 * 4) = uVar16;
    if (((bVar4 | 0x7f < uVar14) == 1) && (*plVar7 == 0)) {
      *plVar7 = 1;
    }
    if ((ulonglong)plVar7[5] <= uVar9) {
      (*(code *)PTR_panic_bounds_check_00799520)
                (CONCAT71((int7)((ulonglong)lVar12 >> 8),0x7f < uVar14),
                 &PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00791508);
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <http[56314f485c23ccf6]::header::map::Bucket<http[56314f485c23ccf6]::header::value::HeaderValue>>
                (&local_98);
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume();
    }
    lVar12 = lVar11 + plVar7[4] + 0x18;
  }
  else {
    uVar18 = (**(code **)(*param_2 + 0x20))(*param_2,param_2[2]);
    if (lVar12 != 0) {
      (**(code **)(lVar12 + 0x20))(uVar18,uVar8);
    }
    lVar12 = 0;
  }
  return lVar12;
}


