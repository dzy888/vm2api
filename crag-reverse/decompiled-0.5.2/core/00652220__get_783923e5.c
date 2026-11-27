// 00652220 get

/* <craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::get */

undefined8 __rustcall
<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::get
          (longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  ulonglong *puVar7;
  undefined *puVar8;
  byte bVar9;
  char cVar10;
  ushort uVar11;
  int iVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  bool bVar18;
  byte bVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  longlong local_68;
  byte local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  LOCK();
  bVar18 = *(int *)(param_1 + 0x20) == 0;
  if (bVar18) {
    *(int *)(param_1 + 0x20) = 1;
  }
  UNLOCK();
  if (!bVar18) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar7 = (ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar9 = 0;
    cVar10 = *(char *)(param_1 + 0x24);
  }
  else {
    bVar9 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar9 = bVar9 ^ 1;
    cVar10 = *(char *)(param_1 + 0x24);
  }
  if (cVar10 != '\0') {
    local_68 = param_1 + 0x20;
    local_60 = bVar9;
    (*(code *)PTR_unwrap_failed_00799028)
              (&anon_63b06cc94833867f683611f039574387_321_llvm_6903579140370050947,&local_68,
               &PTR_anon_63b06cc94833867f683611f039574387_122_llvm_6903579140370050947_007907a8);
LAB_00652449:
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if (*(longlong *)(param_1 + 0x40) == 0) {
    uVar14 = 0;
  }
  else {
    uVar13 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
             ::hash_one::<&str>(param_1 + 0x48,param_2,param_3);
    puVar8 = PTR_bcmp_00799020;
    lVar1 = *(longlong *)(param_1 + 0x28);
    uVar2 = *(ulonglong *)(param_1 + 0x30);
    bVar19 = (byte)(uVar13 >> 0x39);
    auVar20 = ZEXT216(CONCAT11(bVar19,bVar19));
    auVar21 = pshuflw(auVar20,auVar20,0);
    auVar20._0_8_ = auVar21._0_8_;
    auVar20._8_4_ = auVar21._0_4_;
    auVar20._12_4_ = auVar21._4_4_;
    lVar15 = 0;
    while( true ) {
      uVar13 = uVar13 & uVar2;
      auVar21 = *(undefined1 (*) [16])(lVar1 + uVar13);
      auVar22[0] = -(auVar21[0] == auVar20[0]);
      auVar22[1] = -(auVar21[1] == auVar20[1]);
      auVar22[2] = -(auVar21[2] == auVar20[2]);
      auVar22[3] = -(auVar21[3] == auVar20[3]);
      auVar22[4] = -(auVar21[4] == auVar20[4]);
      auVar22[5] = -(auVar21[5] == auVar20[5]);
      auVar22[6] = -(auVar21[6] == auVar20[6]);
      auVar22[7] = -(auVar21[7] == auVar20[7]);
      auVar22[8] = -(auVar21[8] == auVar20[8]);
      auVar22[9] = -(auVar21[9] == auVar20[9]);
      auVar22[10] = -(auVar21[10] == auVar20[10]);
      auVar22[0xb] = -(auVar21[0xb] == auVar20[0xb]);
      auVar22[0xc] = -(auVar21[0xc] == auVar20[0xc]);
      auVar22[0xd] = -(auVar21[0xd] == auVar20[0xd]);
      auVar22[0xe] = -(auVar21[0xe] == auVar20[0xe]);
      auVar22[0xf] = -(auVar21[0xf] == auVar20[0xf]);
      uVar11 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe | (ushort)(auVar22[0xf] >> 7) << 0xf;
      uVar16 = (uint)uVar11;
      if (uVar11 != 0) {
        local_58 = auVar21;
        local_48 = auVar20;
        do {
          uVar5 = 0;
          for (uVar6 = uVar16; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
            uVar5 = uVar5 + 1;
          }
          lVar17 = lVar1 + (uVar5 + uVar13 & uVar2) * -0x20;
          if ((param_3 == *(longlong *)(lVar17 + -0x10)) &&
             (iVar12 = (*(code *)puVar8)(uVar13,param_3,puVar8,local_58._0_8_,uVar13,param_2),
             iVar12 == 0)) {
            plVar3 = *(longlong **)(lVar17 + -8);
            LOCK();
            lVar1 = *plVar3;
            *plVar3 = *plVar3 + 1;
            UNLOCK();
            if (*plVar3 == 0 || SCARRY8(lVar1,1) != *plVar3 < 0) goto LAB_00652449;
            uVar14 = *(undefined8 *)(lVar17 + -8);
            puVar7 = (ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8;
            goto joined_r0x006523b7;
          }
          uVar11 = (ushort)(uVar16 - 1) & (ushort)uVar16;
          uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar11);
          auVar20 = local_48;
          auVar21 = local_58;
        } while (uVar11 != 0);
      }
      uVar14 = 0;
      auVar23[0] = -(auVar21[0] == -1);
      auVar23[1] = -(auVar21[1] == -1);
      auVar23[2] = -(auVar21[2] == -1);
      auVar23[3] = -(auVar21[3] == -1);
      auVar23[4] = -(auVar21[4] == -1);
      auVar23[5] = -(auVar21[5] == -1);
      auVar23[6] = -(auVar21[6] == -1);
      auVar23[7] = -(auVar21[7] == -1);
      auVar23[8] = -(auVar21[8] == -1);
      auVar23[9] = -(auVar21[9] == -1);
      auVar23[10] = -(auVar21[10] == -1);
      auVar23[0xb] = -(auVar21[0xb] == -1);
      auVar23[0xc] = -(auVar21[0xc] == -1);
      auVar23[0xd] = -(auVar21[0xd] == -1);
      auVar23[0xe] = -(auVar21[0xe] == -1);
      auVar23[0xf] = -(auVar21[0xf] == -1);
      puVar7 = (ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8;
      if ((((((((((((((((SUB161(auVar23 >> 7,0) & 1) != 0 || (SUB161(auVar23 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar23 >> 0x17,0) & 1) != 0) || (SUB161(auVar23 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar23 >> 0x27,0) & 1) != 0) || (SUB161(auVar23 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar23 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar23 >> 0x3f,0) & 1) != 0) || (SUB161(auVar23 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar23 >> 0x4f,0) & 1) != 0) || (SUB161(auVar23 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar23 >> 0x5f,0) & 1) != 0) || (SUB161(auVar23 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar23 >> 0x6f,0) & 1) != 0) || (SUB161(auVar23 >> 0x77,0) & 1) != 0) ||
          auVar23[0xf] < '\0') break;
      uVar13 = uVar13 + lVar15 + 0x10;
      lVar15 = lVar15 + 0x10;
    }
  }
joined_r0x006523b7:
  if (((bVar9 == 0) && ((*puVar7 & 0x7fffffffffffffff) != 0)) &&
     (cVar10 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar10 == '\0')) {
    *(undefined1 *)(param_1 + 0x24) = 1;
  }
  LOCK();
  iVar12 = *(int *)(param_1 + 0x20);
  *(int *)(param_1 + 0x20) = 0;
  UNLOCK();
  if (iVar12 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  return uVar14;
}


