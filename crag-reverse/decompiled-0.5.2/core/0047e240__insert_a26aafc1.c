// 0047e240 insert

/* <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::string::String,
   std[6c98fd8553dbae28]::hash::random::RandomState>>::insert */

undefined8 * __rustcall
<hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::hash::random::RandomState>>
::insert(undefined8 *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [16];
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined *puVar11;
  ushort uVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  byte bVar18;
  uint uVar19;
  byte bVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  longlong lVar23;
  undefined1 auVar24 [16];
  ulonglong local_c0;
  
  uVar15 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
           ::hash_one::<&alloc[12e961f32105355]::string::String>(param_2 + 4,param_3);
  if (param_2[2] == 0) {
    <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)>>
    ::reserve_rehash::
    <hashbrown[b5c94476ffc33875]::map::make_hasher<alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::hash::random::RandomState>::_closure_0_>
              (param_2,param_2 + 4);
  }
  puVar11 = PTR_bcmp_00799020;
  pauVar2 = (undefined1 (*) [16])*param_2;
  uVar3 = param_2[1];
  bVar18 = (byte)(uVar15 >> 0x38);
  bVar20 = bVar18 >> 1;
  auVar21 = ZEXT216(CONCAT11(bVar20,bVar20));
  auVar21 = pshuflw(auVar21,auVar21,0);
  lVar4 = param_3[2];
  bVar10 = false;
  lVar17 = 0;
  do {
    uVar15 = uVar15 & uVar3;
    auVar1 = *(undefined1 (*) [16])(*pauVar2 + uVar15);
    auVar22[0] = -(auVar1[0] == auVar21[0]);
    auVar22[1] = -(auVar1[1] == auVar21[1]);
    auVar22[2] = -(auVar1[2] == auVar21[2]);
    auVar22[3] = -(auVar1[3] == auVar21[3]);
    auVar22[4] = -(auVar1[4] == auVar21[4]);
    auVar22[5] = -(auVar1[5] == auVar21[5]);
    auVar22[6] = -(auVar1[6] == auVar21[6]);
    auVar22[7] = -(auVar1[7] == auVar21[7]);
    auVar22[8] = -(auVar1[8] == auVar21[0]);
    auVar22[9] = -(auVar1[9] == auVar21[1]);
    auVar22[10] = -(auVar1[10] == auVar21[2]);
    auVar22[0xb] = -(auVar1[0xb] == auVar21[3]);
    auVar22[0xc] = -(auVar1[0xc] == auVar21[4]);
    auVar22[0xd] = -(auVar1[0xd] == auVar21[5]);
    bVar20 = auVar1[0xf];
    auVar22[0xe] = -(auVar1[0xe] == auVar21[6]);
    auVar22[0xf] = -(bVar20 == auVar21[7]);
    uVar12 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
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
    uVar19 = (uint)uVar12;
    if (uVar12 != 0) {
      do {
        uVar14 = 0;
        for (uVar6 = uVar19; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar14 = uVar14 + 1;
        }
        uVar16 = uVar14 + uVar15 & uVar3;
        if ((lVar4 == *(longlong *)pauVar2[uVar16 * -3 + -2]) &&
           (iVar13 = (*(code *)puVar11)(), iVar13 == 0)) {
          param_1[2] = *(undefined8 *)(pauVar2[uVar16 * -3 + -1] + 8);
          uVar5 = *(undefined8 *)pauVar2[uVar16 * -3 + -1];
          *param_1 = *(undefined8 *)(pauVar2[uVar16 * -3 + -2] + 8);
          param_1[1] = uVar5;
          *(undefined8 *)(pauVar2[uVar16 * -3 + -1] + 8) = param_4[2];
          uVar5 = param_4[1];
          *(undefined8 *)(pauVar2[uVar16 * -3 + -2] + 8) = *param_4;
          *(undefined8 *)pauVar2[uVar16 * -3 + -1] = uVar5;
          if (*param_3 == 0) {
            return param_1;
          }
          (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
          return param_1;
        }
        uVar12 = (ushort)(uVar19 - 1) & (ushort)uVar19;
        uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar12);
      } while (uVar12 != 0);
    }
    if (bVar10) {
LAB_0047e3ad:
      auVar24[0] = -(auVar1[0] == -1);
      auVar24[1] = -(auVar1[1] == -1);
      auVar24[2] = -(auVar1[2] == -1);
      auVar24[3] = -(auVar1[3] == -1);
      auVar24[4] = -(auVar1[4] == -1);
      auVar24[5] = -(auVar1[5] == -1);
      auVar24[6] = -(auVar1[6] == -1);
      auVar24[7] = -(auVar1[7] == 0xff);
      auVar24[8] = -(auVar1[8] == -1);
      auVar24[9] = -(auVar1[9] == -1);
      auVar24[10] = -(auVar1[10] == -1);
      auVar24[0xb] = -(auVar1[0xb] == -1);
      auVar24[0xc] = -(auVar1[0xc] == -1);
      auVar24[0xd] = -(auVar1[0xd] == -1);
      auVar24[0xe] = -(auVar1[0xe] == -1);
      auVar24[0xf] = -(bVar20 == 0xff);
      if ((((((((((((((((SUB161(auVar24 >> 7,0) & 1) != 0 || (SUB161(auVar24 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar24 >> 0x17,0) & 1) != 0) || (SUB161(auVar24 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar24 >> 0x27,0) & 1) != 0) || (SUB161(auVar24 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar24 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar24 >> 0x3f,0) & 1) != 0) || (SUB161(auVar24 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar24 >> 0x4f,0) & 1) != 0) || (SUB161(auVar24 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar24 >> 0x5f,0) & 1) != 0) || (SUB161(auVar24 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar24 >> 0x6f,0) & 1) != 0) || (SUB161(auVar24 >> 0x77,0) & 1) != 0) ||
          auVar24[0xf] < '\0') {
        bVar20 = (*pauVar2)[local_c0];
        if (-1 < (char)bVar20) {
          auVar21 = *pauVar2;
          uVar19 = 0;
          for (uVar14 = (uint)(ushort)((ushort)(SUB161(auVar21 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar21 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar21 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar21 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar21 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar21 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar21 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar21[0xf] >> 7) << 0xf); (uVar14 & 1) == 0;
              uVar14 = uVar14 >> 1 | 0x80000000) {
            uVar19 = uVar19 + 1;
          }
          local_c0 = (ulonglong)uVar19;
          bVar20 = (*pauVar2)[local_c0];
        }
        lVar4 = param_3[2];
        lVar17 = *param_3;
        lVar7 = param_3[1];
        uVar8 = *param_4;
        uVar9 = param_4[1];
        uVar5 = param_4[2];
        bVar18 = bVar18 >> 1;
        (*pauVar2)[local_c0] = bVar18;
        pauVar2[1][local_c0 - 0x10 & uVar3] = bVar18;
        lVar23 = param_2[3] - DAT_001827f8;
        param_2[2] = param_2[2] - (ulonglong)(bVar20 & 1);
        param_2[3] = lVar23;
        *(undefined8 *)pauVar2[local_c0 * -3 + -1] = uVar9;
        *(undefined8 *)(pauVar2[local_c0 * -3 + -1] + 8) = uVar5;
        *(longlong *)pauVar2[local_c0 * -3 + -2] = lVar4;
        *(undefined8 *)(pauVar2[local_c0 * -3 + -2] + 8) = uVar8;
        *(longlong *)pauVar2[local_c0 * -3 + -3] = lVar17;
        *(longlong *)(pauVar2[local_c0 * -3 + -3] + 8) = lVar7;
        *param_1 = 0xffffffffffffffff;
        return param_1;
      }
      bVar10 = true;
    }
    else {
      uVar12 = (ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe | (ushort)(bVar20 >> 7) << 0xf;
      if (uVar12 != 0) {
        uVar19 = 0;
        for (uVar14 = (uint)uVar12; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
          uVar19 = uVar19 + 1;
        }
        local_c0 = uVar19 + uVar15 & uVar3;
        goto LAB_0047e3ad;
      }
      bVar10 = false;
    }
    uVar15 = uVar15 + lVar17 + 0x10;
    lVar17 = lVar17 + 0x10;
  } while( true );
}


