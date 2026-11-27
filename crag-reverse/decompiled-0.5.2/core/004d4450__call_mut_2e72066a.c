// 004d4450 call_mut

/* <&mut 
   <craggemini_core[66f3c71560d70857]::pool::PoolManager>::retry_uncalibrated_accounts::{closure#0}::{closure#1}
   as 
   core[c0acaeba6ab4c2e0]::ops::function::FnMut<(&alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,)>>::call_mut
    */

ulonglong __rustcall
<&mut<craggemini_core[66f3c71560d70857]::pool::PoolManager>::retry_uncalibrated_accounts::{closure#0}::{closure#1}as_core[c0acaeba6ab4c2e0]::ops::function::FnMut<(&alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,)>>
::call_mut(longlong *param_1,longlong *param_2)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  char cVar9;
  ushort uVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong *puVar17;
  undefined8 unaff_R15;
  longlong lVar18;
  undefined7 uVar20;
  ulonglong uVar19;
  bool bVar21;
  byte bVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  byte local_84;
  
  lVar2 = *(longlong *)*param_1;
  plVar3 = (longlong *)((longlong *)*param_1)[1];
  lVar4 = *param_2;
  LOCK();
  bVar21 = *(int *)(lVar2 + 0x308) == 0;
  if (bVar21) {
    *(int *)(lVar2 + 0x308) = 1;
  }
  UNLOCK();
  if (!bVar21) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar17 = (ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8;
  uVar20 = (undefined7)((ulonglong)unaff_R15 >> 8);
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    local_84 = 0;
    lVar5 = *(longlong *)(lVar2 + 0x328);
  }
  else {
    local_84 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    local_84 = local_84 ^ 1;
    lVar5 = *(longlong *)(lVar2 + 0x328);
  }
  uVar19 = CONCAT71(uVar20,1);
  if (lVar5 != 0) {
    lVar18 = CONCAT71(uVar20,1);
    uVar12 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
             ::hash_one::<&alloc[12e961f32105355]::string::String>(lVar2 + 0x330,lVar4 + 0xe8);
    puVar8 = PTR_bcmp_00799020;
    lVar5 = *(longlong *)(lVar2 + 0x310);
    uVar19 = *(ulonglong *)(lVar2 + 0x318);
    bVar22 = (byte)(uVar12 >> 0x39);
    auVar23 = ZEXT216(CONCAT11(bVar22,bVar22));
    auVar23 = pshuflw(auVar23,auVar23,0);
    lVar14 = 0;
    while( true ) {
      uVar12 = uVar12 & uVar19;
      auVar1 = *(undefined1 (*) [16])(lVar5 + uVar12);
      auVar24[0] = -(auVar1[0] == auVar23[0]);
      auVar24[1] = -(auVar1[1] == auVar23[1]);
      auVar24[2] = -(auVar1[2] == auVar23[2]);
      auVar24[3] = -(auVar1[3] == auVar23[3]);
      auVar24[4] = -(auVar1[4] == auVar23[4]);
      auVar24[5] = -(auVar1[5] == auVar23[5]);
      auVar24[6] = -(auVar1[6] == auVar23[6]);
      auVar24[7] = -(auVar1[7] == auVar23[7]);
      auVar24[8] = -(auVar1[8] == auVar23[0]);
      auVar24[9] = -(auVar1[9] == auVar23[1]);
      auVar24[10] = -(auVar1[10] == auVar23[2]);
      auVar24[0xb] = -(auVar1[0xb] == auVar23[3]);
      auVar24[0xc] = -(auVar1[0xc] == auVar23[4]);
      auVar24[0xd] = -(auVar1[0xd] == auVar23[5]);
      auVar24[0xe] = -(auVar1[0xe] == auVar23[6]);
      auVar24[0xf] = -(auVar1[0xf] == auVar23[7]);
      uVar10 = (ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe | (ushort)(auVar24[0xf] >> 7) << 0xf;
      uVar16 = (uint)uVar10;
      if (uVar10 != 0) {
        lVar18 = *(longlong *)(lVar4 + 0xf8);
        do {
          uVar6 = 0;
          for (uVar7 = uVar16; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
            uVar6 = uVar6 + 1;
          }
          uVar13 = uVar6 + uVar12 & uVar19;
          lVar15 = uVar13 * -0x30;
          if (lVar18 == *(longlong *)(lVar5 + -0x20 + lVar15)) {
            lVar15 = lVar15 + lVar5;
            iVar11 = (*(code *)puVar8)(-uVar13,lVar18);
            if (iVar11 == 0) {
              lVar4 = *(longlong *)(lVar15 + -0x18);
              lVar5 = *plVar3;
              uVar20 = (undefined7)((ulonglong)lVar18 >> 8);
              uVar19 = CONCAT71(uVar20,lVar4 <= lVar5);
              puVar17 = (ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8;
              if (lVar4 == lVar5) {
                uVar19 = CONCAT71(uVar20,*(uint *)(lVar15 + -0x10) <= *(uint *)(plVar3 + 1));
              }
              goto LAB_004d462b;
            }
          }
          uVar10 = (ushort)(uVar16 - 1) & (ushort)uVar16;
          uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar10);
        } while (uVar10 != 0);
      }
      auVar25[0] = -(auVar1[0] == -1);
      auVar25[1] = -(auVar1[1] == -1);
      auVar25[2] = -(auVar1[2] == -1);
      auVar25[3] = -(auVar1[3] == -1);
      auVar25[4] = -(auVar1[4] == -1);
      auVar25[5] = -(auVar1[5] == -1);
      auVar25[6] = -(auVar1[6] == -1);
      auVar25[7] = -(auVar1[7] == -1);
      auVar25[8] = -(auVar1[8] == -1);
      auVar25[9] = -(auVar1[9] == -1);
      auVar25[10] = -(auVar1[10] == -1);
      auVar25[0xb] = -(auVar1[0xb] == -1);
      auVar25[0xc] = -(auVar1[0xc] == -1);
      auVar25[0xd] = -(auVar1[0xd] == -1);
      auVar25[0xe] = -(auVar1[0xe] == -1);
      auVar25[0xf] = -(auVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar25 >> 7,0) & 1) != 0 || (SUB161(auVar25 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar25 >> 0x17,0) & 1) != 0) || (SUB161(auVar25 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar25 >> 0x27,0) & 1) != 0) || (SUB161(auVar25 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar25 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar25 >> 0x3f,0) & 1) != 0) || (SUB161(auVar25 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar25 >> 0x4f,0) & 1) != 0) || (SUB161(auVar25 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar25 >> 0x5f,0) & 1) != 0) || (SUB161(auVar25 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar25 >> 0x6f,0) & 1) != 0) || (SUB161(auVar25 >> 0x77,0) & 1) != 0) ||
          auVar25[0xf] < '\0') break;
      uVar12 = uVar12 + lVar14 + 0x10;
      lVar14 = lVar14 + 0x10;
    }
    uVar19 = CONCAT71((int7)((ulonglong)lVar18 >> 8),1);
    puVar17 = (ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8;
  }
LAB_004d462b:
  if (((local_84 == 0) && ((*puVar17 & 0x7fffffffffffffff) != 0)) &&
     (cVar9 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar9 == '\0')) {
    *(undefined1 *)(lVar2 + 0x30c) = 1;
  }
  LOCK();
  iVar11 = *(int *)(lVar2 + 0x308);
  *(int *)(lVar2 + 0x308) = 0;
  UNLOCK();
  if (iVar11 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  return uVar19 & 0xffffffff;
}


