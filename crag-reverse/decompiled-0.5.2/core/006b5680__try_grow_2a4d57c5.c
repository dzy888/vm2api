// 006b5680 try_grow

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <http[56314f485c23ccf6]::header::map::HeaderMap>::try_grow */

bool __rustcall
<http[56314f485c23ccf6]::header::map::HeaderMap>::try_grow
          (undefined4 param_1,longlong param_2,ulonglong param_3)

{
  undefined4 *puVar1;
  short *psVar2;
  ushort uVar3;
  ulonglong uVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  longlong lVar13;
  short *psVar14;
  ulonglong uVar15;
  short *psVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined4 extraout_XMM0_Da;
  int local_48 [2];
  undefined8 local_40;
  
  if (0x8000 < param_3) goto LAB_006b587a;
  psVar14 = *(short **)(param_2 + 0x48);
  uVar4 = *(ulonglong *)(param_2 + 0x50);
  lVar13 = uVar4 * 4;
  if (uVar4 != 0) {
    uVar18 = 0;
    do {
      if ((psVar14[uVar18 * 2] != -1) &&
         (((int)uVar18 - (uint)(psVar14[uVar18 * 2 + 1] & *(ushort *)(param_2 + 0x58)) &
          (uint)*(ushort *)(param_2 + 0x58)) == 0)) {
        if (param_3 != 0) goto LAB_006b5704;
        goto LAB_006b57bb;
      }
      uVar18 = uVar18 + 1;
      lVar13 = lVar13 + -4;
    } while (lVar13 != 0);
  }
  uVar18 = 0;
  if (param_3 != 0) {
LAB_006b5704:
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar10 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
    uVar9 = _UNK_0018264c;
    uVar8 = _UNK_00182648;
    uVar7 = _UNK_00182644;
    uVar6 = _DAT_00182640;
    if (puVar10 != (undefined4 *)0x0) {
      puVar12 = puVar10;
      param_1 = extraout_XMM0_Da;
      if (param_3 != 1) {
        lVar13 = 1;
        param_1 = extraout_XMM0_Da;
        if (8 < param_3) {
          uVar15 = param_3 - 1 & 0xfffffffffffffff8;
          puVar12 = puVar10 + uVar15;
          lVar13 = uVar15 + 1;
          uVar17 = 0;
          do {
            puVar1 = puVar10 + uVar17;
            *puVar1 = uVar6;
            puVar1[1] = uVar7;
            puVar1[2] = uVar8;
            puVar1[3] = uVar9;
            puVar1 = puVar10 + uVar17 + 4;
            *puVar1 = uVar6;
            puVar1[1] = uVar7;
            puVar1[2] = uVar8;
            puVar1[3] = uVar9;
            uVar17 = uVar17 + 8;
          } while (uVar15 != uVar17);
          param_1 = uVar6;
          if (param_3 - 1 == uVar15) goto LAB_006b579f;
        }
        lVar13 = param_3 - lVar13;
        do {
          *puVar12 = 0xffff;
          puVar12 = puVar12 + 1;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
LAB_006b579f:
      *puVar12 = 0xffff;
      uVar15 = param_3;
      goto LAB_006b57c2;
    }
    (*(code *)PTR_handle_error_00798ff0)();
LAB_006b595f:
    (*(code *)PTR_handle_error_00798ff0)();
LAB_006b5965:
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
LAB_006b57bb:
  puVar10 = (undefined4 *)0x2;
  uVar15 = 0;
LAB_006b57c2:
  *(undefined4 **)(param_2 + 0x48) = puVar10;
  *(ulonglong *)(param_2 + 0x50) = uVar15;
  uVar11 = (int)param_3 - 1;
  *(short *)(param_2 + 0x58) = (short)uVar11;
  if (uVar4 < uVar18) {
    (*(code *)PTR_slice_index_fail_007993c8)
              (&PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_007924b8,uVar4
              );
    goto LAB_006b5965;
  }
  psVar2 = psVar14 + uVar18 * 2;
  if (uVar18 != uVar4) {
    psVar16 = psVar2;
    do {
      if (*psVar16 != -1) {
        uVar3 = psVar16[1];
        uVar17 = (ulonglong)(uVar3 & uVar11);
        while( true ) {
          do {
            uVar19 = uVar17;
            uVar17 = 0;
          } while (uVar15 <= uVar19);
          if (*(short *)(puVar10 + uVar19) == -1) break;
          uVar17 = uVar19 + 1;
        }
        *(short *)(puVar10 + uVar19) = *psVar16;
        *(ushort *)((longlong)puVar10 + uVar19 * 4 + 2) = uVar3;
      }
      psVar16 = psVar16 + 2;
    } while (psVar16 != psVar14 + uVar4 * 2);
  }
  if (uVar18 != 0) {
    do {
      if (*psVar14 != -1) {
        uVar3 = psVar14[1];
        uVar18 = (ulonglong)(uVar3 & uVar11);
        while( true ) {
          do {
            uVar17 = uVar18;
            uVar18 = 0;
          } while (uVar15 <= uVar17);
          if (*(short *)(puVar10 + uVar17) == -1) break;
          uVar18 = uVar17 + 1;
        }
        *(short *)(puVar10 + uVar17) = *psVar14;
        *(ushort *)((longlong)puVar10 + uVar17 * 4 + 2) = uVar3;
      }
      psVar14 = psVar14 + 2;
    } while (psVar14 != psVar2);
  }
  uVar18 = *(ulonglong *)(param_2 + 0x28);
  uVar15 = uVar15 - ((uVar15 >> 2) + uVar18);
  if (*(longlong *)(param_2 + 0x18) - uVar18 < uVar15) {
    if ((CARRY8(uVar15,uVar18)) ||
       (param_1 = <alloc[12e961f32105355]::raw_vec::RawVecInner>::finish_grow
                            (local_48,*(longlong *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20),
                             uVar15 + uVar18,8,0x68), local_48[0] == 1)) goto LAB_006b595f;
    *(undefined8 *)(param_2 + 0x20) = local_40;
    *(ulonglong *)(param_2 + 0x18) = uVar15 + uVar18;
  }
  if (uVar4 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_1,2);
  }
LAB_006b587a:
  return 0x8000 < param_3;
}


