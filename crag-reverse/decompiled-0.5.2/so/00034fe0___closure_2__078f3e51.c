// 00034fe0 {closure#2}

/* <agy_bridge[64a9e9deac6c45ce]::Runtime>::serve::{closure#2} */

undefined4 __rustcall
<agy_bridge[64a9e9deac6c45ce]::Runtime>::serve::_closure_2_(int *param_1,char param_2)

{
  undefined1 auVar1 [16];
  undefined2 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  char cVar8;
  uint uVar9;
  undefined8 in_RAX;
  longlong lVar10;
  ulonglong uVar11;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint uVar12;
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  undefined4 local_64;
  longlong local_40;
  
  local_64 = (undefined4)CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
  if (*(longlong *)(param_1 + 0xf2) == -1) {
    if (param_1[2] != 2) {
      if (*(longlong *)(param_1 + 0x2a) != -1) {
        iVar6 = param_1[0x54];
        uVar3 = *(undefined8 *)(param_1 + 0x2c);
        uVar4 = *(undefined8 *)(param_1 + 0x2e);
        bVar7 = agy_bridge[64a9e9deac6c45ce]::sse_ok((short)iVar6,uVar3,uVar4);
        if ((((((bVar7 | *(byte *)((longlong)param_1 + 0x1ab)) & 1) == 0) &&
             (cVar8 = agy_bridge[64a9e9deac6c45ce]::sse_ok((short)iVar6,uVar3,uVar4), cVar8 == '\0')
             ) && ((*(longlong *)(param_1 + 0x56) == -1 || (*(longlong *)(param_1 + 0x5a) == 0))))
           && ((((*(char *)((longlong)param_1 + 0x1a9) == '\0' &&
                 (*(char *)((longlong)param_1 + 0x1aa) == '\0')) && (param_1[0x5e] != -1)) &&
               ((uVar9 = extraout_EDX, lVar10 = (*(code *)PTR_elapsed_000c3b38)(), lVar10 == 0 &&
                (uVar9 < 250000000)))))) goto LAB_0003521b;
      }
      local_40 = *(longlong *)(param_1 + 0xa6);
      if (local_40 != 0) {
        pauVar14 = *(undefined1 (**) [16])(param_1 + 0xa0);
        auVar1 = *pauVar14;
        uVar9 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
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
                                (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
        pauVar13 = pauVar14 + 1;
        do {
          if ((short)uVar9 == 0) {
            do {
              auVar1 = *pauVar13;
              pauVar14 = pauVar14 + -0x140;
              pauVar13 = pauVar13 + 1;
              uVar9 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
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
                               (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar1[0xf] >> 7) << 0xf) ^ 0xffff;
            } while (uVar9 == 0);
          }
          uVar12 = 0;
          for (uVar5 = uVar9; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
            uVar12 = uVar12 + 1;
          }
          uVar11 = (ulonglong)uVar12;
          if (*(longlong *)(pauVar14[uVar11 * -0x14 + -0x11] + 8) != -1) {
            uVar2 = *(undefined2 *)pauVar14[uVar11 * -0x14 + -6];
            uVar3 = *(undefined8 *)pauVar14[uVar11 * -0x14 + -0x10];
            uVar4 = *(undefined8 *)(pauVar14[uVar11 * -0x14 + -0x10] + 8);
            bVar7 = agy_bridge[64a9e9deac6c45ce]::sse_ok(uVar2,uVar3,uVar4);
            if (((((bVar7 | pauVar14[uVar11 * -0x14 + -1][0xb]) & 1) == 0) &&
                (cVar8 = agy_bridge[64a9e9deac6c45ce]::sse_ok(uVar2,uVar3,uVar4), cVar8 == '\0')) &&
               ((((*(longlong *)(pauVar14[uVar11 * -0x14 + -6] + 8) == -1 ||
                  (*(longlong *)(pauVar14[uVar11 * -0x14 + -5] + 8) == 0)) &&
                 (((pauVar14[uVar11 * -0x14 + -1][9] == '\0' &&
                   (pauVar14[uVar11 * -0x14 + -1][10] == '\0')) &&
                  (*(int *)(pauVar14[uVar11 * -0x14 + -4] + 8) != -1)))) &&
                ((uVar12 = extraout_EDX_00, lVar10 = (*(code *)PTR_elapsed_000c3b38)(), lVar10 == 0
                 && (uVar12 < 250000000)))))) goto LAB_0003521b;
          }
          uVar9 = uVar9 - 1 & uVar9;
          local_40 = local_40 + -1;
        } while (local_40 != 0);
      }
    }
    local_64 = 0;
  }
LAB_0003521b:
  if (((param_2 == '\0') &&
      ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_000c3ac8 & 0x7fffffffffffffff) != 0)) &&
     (cVar8 = (*(code *)PTR_is_zero_slow_path_000c3ad8)(), cVar8 == '\0')) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  LOCK();
  iVar6 = *param_1;
  *param_1 = 0;
  UNLOCK();
  if (iVar6 == 2) {
    (*(code *)PTR_wake_000c3ad0)();
  }
  return local_64;
}


