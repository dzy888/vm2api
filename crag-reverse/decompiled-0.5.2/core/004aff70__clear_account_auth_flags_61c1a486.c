// 004aff70 clear_account_auth_flags

/* <craggemini_core[66f3c71560d70857]::pool::CooldownRegistry>::clear_account_auth_flags */

void __rustcall
<craggemini_core[66f3c71560d70857]::pool::CooldownRegistry>::clear_account_auth_flags
          (longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  ushort uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  byte bVar14;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  longlong local_98 [3];
  longlong local_80;
  longlong local_60;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    uVar9 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
            ::hash_one::<&str>(param_1 + 0x38);
    puVar6 = PTR_bcmp_00799020;
    lVar2 = *(longlong *)(param_1 + 0x18);
    uVar3 = *(ulonglong *)(param_1 + 0x20);
    bVar14 = (byte)(uVar9 >> 0x39);
    auVar16 = ZEXT216(CONCAT11(bVar14,bVar14));
    auVar16 = pshuflw(auVar16,auVar16,0);
    lVar11 = 0;
    while( true ) {
      uVar9 = uVar9 & uVar3;
      auVar1 = *(undefined1 (*) [16])(lVar2 + uVar9);
      auVar17[0] = -(auVar1[0] == auVar16[0]);
      auVar17[1] = -(auVar1[1] == auVar16[1]);
      auVar17[2] = -(auVar1[2] == auVar16[2]);
      auVar17[3] = -(auVar1[3] == auVar16[3]);
      auVar17[4] = -(auVar1[4] == auVar16[4]);
      auVar17[5] = -(auVar1[5] == auVar16[5]);
      auVar17[6] = -(auVar1[6] == auVar16[6]);
      auVar17[7] = -(auVar1[7] == auVar16[7]);
      auVar17[8] = -(auVar1[8] == auVar16[0]);
      auVar17[9] = -(auVar1[9] == auVar16[1]);
      auVar17[10] = -(auVar1[10] == auVar16[2]);
      auVar17[0xb] = -(auVar1[0xb] == auVar16[3]);
      auVar17[0xc] = -(auVar1[0xc] == auVar16[4]);
      auVar17[0xd] = -(auVar1[0xd] == auVar16[5]);
      auVar17[0xe] = -(auVar1[0xe] == auVar16[6]);
      auVar17[0xf] = -(auVar1[0xf] == auVar16[7]);
      uVar7 = (ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe | (ushort)(auVar17[0xf] >> 7) << 0xf;
      uVar13 = (uint)uVar7;
      if (uVar7 != 0) {
        do {
          uVar4 = 0;
          for (uVar5 = uVar13; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
            uVar4 = uVar4 + 1;
          }
          uVar10 = uVar4 + uVar9 & uVar3;
          lVar12 = lVar2 + uVar10 * -0x80;
          if ((param_3 == *(longlong *)(lVar12 + -0x70)) &&
             (iVar8 = (*(code *)puVar6)(uVar10 * 0x80,param_3), iVar8 == 0)) {
            if ((*(char *)(lVar12 + -8) != '\0') || (*(longlong *)(lVar12 + -0x50) != -1)) {
              *(undefined1 *)(lVar12 + -8) = 0;
              uVar15 = extraout_XMM0_Qa;
              if ((*(longlong *)(lVar12 + -0x68) != -1) && (*(longlong *)(lVar12 + -0x68) != 0)) {
                uVar15 = (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Qa,1);
              }
              *(undefined8 *)(lVar12 + -0x68) = 0xffffffffffffffff;
              if ((*(longlong *)(lVar12 + -0x50) != -1) && (*(longlong *)(lVar12 + -0x50) != 0)) {
                (*(code *)PTR___rust_dealloc_00798fc8)(uVar15,1);
              }
              *(undefined8 *)(lVar12 + -0x50) = 0xffffffffffffffff;
              *(undefined1 *)(param_1 + 0x80) = 1;
            }
            if (*(longlong *)(lVar12 + -0x20) != 0) {
              return;
            }
            uVar15 = <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::pool::AccountCooldownRecord,std[6c98fd8553dbae28]::hash::random::RandomState>>
                     ::remove::<str>(local_98,param_1 + 0x18,param_2,param_3);
            if (local_98[0] == -2) {
              return;
            }
            if ((local_60 != 0) && (local_60 * 0x21 != -0x31)) {
              uVar15 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar15,0x10);
            }
            if ((local_98[0] != -1) && (local_98[0] != 0)) {
              uVar15 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar15,1);
            }
            if (local_80 == -1) {
              return;
            }
            if (local_80 == 0) {
              return;
            }
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar15,1);
            return;
          }
          uVar7 = (ushort)(uVar13 - 1) & (ushort)uVar13;
          uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar7);
        } while (uVar7 != 0);
      }
      auVar18[0] = -(auVar1[0] == -1);
      auVar18[1] = -(auVar1[1] == -1);
      auVar18[2] = -(auVar1[2] == -1);
      auVar18[3] = -(auVar1[3] == -1);
      auVar18[4] = -(auVar1[4] == -1);
      auVar18[5] = -(auVar1[5] == -1);
      auVar18[6] = -(auVar1[6] == -1);
      auVar18[7] = -(auVar1[7] == -1);
      auVar18[8] = -(auVar1[8] == -1);
      auVar18[9] = -(auVar1[9] == -1);
      auVar18[10] = -(auVar1[10] == -1);
      auVar18[0xb] = -(auVar1[0xb] == -1);
      auVar18[0xc] = -(auVar1[0xc] == -1);
      auVar18[0xd] = -(auVar1[0xd] == -1);
      auVar18[0xe] = -(auVar1[0xe] == -1);
      auVar18[0xf] = -(auVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar18 >> 7,0) & 1) != 0 || (SUB161(auVar18 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar18 >> 0x17,0) & 1) != 0) || (SUB161(auVar18 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar18 >> 0x27,0) & 1) != 0) || (SUB161(auVar18 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar18 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar18 >> 0x3f,0) & 1) != 0) || (SUB161(auVar18 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar18 >> 0x4f,0) & 1) != 0) || (SUB161(auVar18 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar18 >> 0x5f,0) & 1) != 0) || (SUB161(auVar18 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar18 >> 0x6f,0) & 1) != 0) || (SUB161(auVar18 >> 0x77,0) & 1) != 0) ||
          auVar18[0xf] < '\0') break;
      uVar9 = uVar9 + lVar11 + 0x10;
      lVar11 = lVar11 + 0x10;
    }
  }
  return;
}


