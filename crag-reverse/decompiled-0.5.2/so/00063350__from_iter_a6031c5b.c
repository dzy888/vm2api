// 00063350 from_iter

/* <alloc[12e961f32105355]::vec::Vec<u8> as
   alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<u8,
   alloc[12e961f32105355]::vec::drain::Drain<u8>>>::from_iter */

ulonglong * __rustcall
<alloc[12e961f32105355]::vec::Vec<u8>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<u8,alloc[12e961f32105355]::vec::drain::Drain<u8>>>
::from_iter(ulonglong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  longlong lVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong local_70;
  ulonglong uStack_68;
  ulonglong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  
  uVar19 = param_2[1] - *param_2;
  if ((longlong)uVar19 < 0) {
LAB_0006336d:
    (*(code *)PTR_handle_error_000c3a98)();
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  if (uVar19 == 0) {
    uStack_68 = 1;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
    uStack_68 = (*(code *)PTR___rust_alloc_000c3a90)();
    if (uStack_68 == 0) goto LAB_0006336d;
  }
  local_60 = 0;
  local_58 = (undefined4)*param_2;
  uStack_54 = *(undefined4 *)((longlong)param_2 + 4);
  puVar16 = (undefined1 *)*param_2;
  uStack_50 = (undefined4)param_2[1];
  uStack_4c = *(undefined4 *)((longlong)param_2 + 0xc);
  puVar12 = (undefined1 *)param_2[1];
  local_48 = (undefined4)param_2[2];
  uStack_44 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_40 = (undefined4)param_2[3];
  uStack_3c = *(undefined4 *)((longlong)param_2 + 0x1c);
  local_38 = param_2[4];
  uVar20 = (longlong)puVar12 - (longlong)puVar16;
  local_70 = uVar19;
  if (uVar19 < uVar20) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(&local_70,0,uVar20,1);
    lVar13 = local_38;
  }
  else {
    local_60 = 0;
    lVar13 = local_38;
  }
  if (puVar16 != puVar12) {
    if ((uVar20 < 0x20) || ((local_60 + uStack_68) - (longlong)puVar16 < 0x20)) {
      puVar14 = puVar16;
    }
    else {
      uVar19 = uVar20 & 0xffffffffffffffe0;
      puVar14 = puVar16 + uVar19;
      lVar1 = local_60 + uStack_68;
      local_60 = local_60 + uVar19;
      uVar18 = 0;
      do {
        puVar4 = (undefined4 *)(puVar16 + uVar18);
        uVar7 = puVar4[1];
        uVar8 = puVar4[2];
        uVar9 = puVar4[3];
        uVar10 = *(undefined8 *)(puVar16 + uVar18 + 0x10);
        uVar11 = *(undefined8 *)((longlong)(puVar16 + uVar18 + 0x10) + 8);
        puVar3 = (undefined4 *)(lVar1 + uVar18);
        *puVar3 = *puVar4;
        puVar3[1] = uVar7;
        puVar3[2] = uVar8;
        puVar3[3] = uVar9;
        puVar2 = (undefined8 *)(lVar1 + 0x10 + uVar18);
        *puVar2 = uVar10;
        puVar2[1] = uVar11;
        uVar18 = uVar18 + 0x20;
      } while (uVar19 != uVar18);
      if (uVar20 == uVar19) goto LAB_000634c9;
    }
    uVar17 = (int)puVar12 - (int)puVar14 & 3;
    uVar19 = (ulonglong)uVar17;
    puVar16 = puVar14;
    puVar15 = puVar14;
    if (uVar17 != 0) {
      do {
        puVar16 = puVar15 + 1;
        *(undefined1 *)(uStack_68 + local_60) = *puVar15;
        local_60 = local_60 + 1;
        uVar19 = uVar19 - 1;
        puVar15 = puVar16;
      } while (uVar19 != 0);
    }
    if ((ulonglong)((longlong)puVar14 - (longlong)puVar12) < 0xfffffffffffffffd) {
      do {
        *(undefined1 *)(uStack_68 + local_60) = *puVar16;
        *(undefined1 *)(uStack_68 + 1 + local_60) = puVar16[1];
        *(undefined1 *)(uStack_68 + 2 + local_60) = puVar16[2];
        *(undefined1 *)(uStack_68 + 3 + local_60) = puVar16[3];
        local_60 = local_60 + 4;
        puVar16 = puVar16 + 4;
      } while (puVar16 != puVar12);
    }
  }
LAB_000634c9:
  lVar1 = CONCAT44(uStack_44,local_48);
  if (lVar13 != 0) {
    lVar5 = *(longlong *)(lVar1 + 0x10);
    if (CONCAT44(uStack_3c,uStack_40) != lVar5) {
      local_38 = lVar13;
      (*(code *)PTR_memmove_000c3c50)(local_60,lVar13);
    }
    *(longlong *)(lVar1 + 0x10) = lVar5 + lVar13;
  }
  param_1[2] = local_60;
  *param_1 = local_70;
  param_1[1] = uStack_68;
  return param_1;
}


