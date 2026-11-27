// 001c3f10 fmt

/* WARNING: Switch with 1 destination removed at 0x001c3fd7 */
/* <getrandom[496a9b488867a1d]::error::Error as core[c0acaeba6ab4c2e0]::fmt::Display>::fmt */

void __rustcall
<getrandom[496a9b488867a1d]::error::Error_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt
          (uint *param_1,longlong param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  byte bVar5;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  undefined8 uVar6;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  undefined1 auVar22 [16];
  uint local_a4;
  uint *local_a0;
  undefined *local_98;
  undefined1 local_88 [9];
  char cStack_7f;
  char cStack_7e;
  char cStack_7d;
  char cStack_7c;
  char cStack_7b;
  char cStack_7a;
  char cStack_79;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  local_a4 = *param_1;
  if ((int)local_a4 < 0) {
    if (((local_a4 & 0x7fffffff) < 0xf & (byte)(0x79ff >> ((byte)local_a4 & 0x1f))) == 0) {
      local_a0 = (uint *)CONCAT44(local_a0._4_4_,local_a4);
      stack0xffffffffffffff80 = PTR_fmt_00219df0;
      local_88._0_8_ = &local_a0;
      (*(code *)PTR_write_0021a2e0)(local_88,&DAT_00114b5e);
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_2 + 8) + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0020b90e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (UNRECOVERED_JUMPTABLE,
               *(undefined8 *)(&DAT_0012c608 + (ulonglong)(local_a4 & 0x7fffffff) * 8));
    return;
  }
  local_18 = (undefined1  [16])0x0;
  local_28 = (undefined1  [16])0x0;
  local_38 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  _local_88 = (undefined1  [16])0x0;
  iVar1 = (*(code *)PTR___xpg_strerror_r_0021a690)(0,0x80);
  if (iVar1 == 0) {
    auVar22[0] = -(local_88[0] == '\0');
    auVar22[1] = -(local_88[1] == '\0');
    auVar22[2] = -(local_88[2] == '\0');
    auVar22[3] = -(local_88[3] == '\0');
    auVar22[4] = -(local_88[4] == '\0');
    auVar22[5] = -(local_88[5] == '\0');
    auVar22[6] = -(local_88[6] == '\0');
    auVar22[7] = -(local_88[7] == '\0');
    auVar22[8] = -(local_88[8] == '\0');
    auVar22[9] = -(SUB161((undefined1  [16])0x0,9) == cStack_7f);
    auVar22[10] = -(SUB161((undefined1  [16])0x0,10) == cStack_7e);
    auVar22[0xb] = -(SUB161((undefined1  [16])0x0,0xb) == cStack_7d);
    auVar22[0xc] = -(SUB161((undefined1  [16])0x0,0xc) == cStack_7c);
    auVar22[0xd] = -(SUB161((undefined1  [16])0x0,0xd) == cStack_7b);
    auVar22[0xe] = -(SUB161((undefined1  [16])0x0,0xe) == cStack_7a);
    auVar22[0xf] = -(SUB161((undefined1  [16])0x0,0xf) == cStack_79);
    uVar3 = 1;
    if ((((((((((((((((SUB161(auVar22 >> 7,0) & 1) == 0 && (SUB161(auVar22 >> 0xf,0) & 1) == 0) &&
                    (SUB161(auVar22 >> 0x17,0) & 1) == 0) && (SUB161(auVar22 >> 0x1f,0) & 1) == 0)
                  && (SUB161(auVar22 >> 0x27,0) & 1) == 0) && (SUB161(auVar22 >> 0x2f,0) & 1) == 0)
                && (SUB161(auVar22 >> 0x37,0) & 1) == 0) && (SUB161(auVar22 >> 0x3f,0) & 1) == 0) &&
              (SUB161(auVar22 >> 0x47,0) & 1) == 0) && (SUB161(auVar22 >> 0x4f,0) & 1) == 0) &&
            (SUB161(auVar22 >> 0x57,0) & 1) == 0) && (SUB161(auVar22 >> 0x5f,0) & 1) == 0) &&
          (SUB161(auVar22 >> 0x67,0) & 1) == 0) && (SUB161(auVar22 >> 0x6f,0) & 1) == 0) &&
        (SUB161(auVar22 >> 0x77,0) & 1) == 0) && -1 < auVar22[0xf]) {
      auVar22[0] = -(local_78[0] == '\0');
      auVar22[1] = -(local_78[1] == '\0');
      auVar22[2] = -(local_78[2] == '\0');
      auVar22[3] = -(local_78[3] == '\0');
      auVar22[4] = -(local_78[4] == '\0');
      auVar22[5] = -(local_78[5] == '\0');
      auVar22[6] = -(local_78[6] == '\0');
      auVar22[7] = -(local_78[7] == '\0');
      auVar22[8] = -(local_78[8] == '\0');
      auVar22[9] = -(local_78[9] == '\0');
      auVar22[10] = -(local_78[10] == '\0');
      auVar22[0xb] = -(local_78[0xb] == '\0');
      auVar22[0xc] = -(local_78[0xc] == '\0');
      auVar22[0xd] = -(local_78[0xd] == '\0');
      auVar22[0xe] = -(local_78[0xe] == '\0');
      auVar22[0xf] = -(local_78[0xf] == '\0');
      lVar2 = 0x10;
      if ((((((((((((((((SUB161(auVar22 >> 7,0) & 1) == 0 && (SUB161(auVar22 >> 0xf,0) & 1) == 0) &&
                      (SUB161(auVar22 >> 0x17,0) & 1) == 0) && (SUB161(auVar22 >> 0x1f,0) & 1) == 0)
                    && (SUB161(auVar22 >> 0x27,0) & 1) == 0) && (SUB161(auVar22 >> 0x2f,0) & 1) == 0
                   ) && (SUB161(auVar22 >> 0x37,0) & 1) == 0) &&
                 (SUB161(auVar22 >> 0x3f,0) & 1) == 0) && (SUB161(auVar22 >> 0x47,0) & 1) == 0) &&
               (SUB161(auVar22 >> 0x4f,0) & 1) == 0) && (SUB161(auVar22 >> 0x57,0) & 1) == 0) &&
             (SUB161(auVar22 >> 0x5f,0) & 1) == 0) && (SUB161(auVar22 >> 0x67,0) & 1) == 0) &&
           (SUB161(auVar22 >> 0x6f,0) & 1) == 0) && (SUB161(auVar22 >> 0x77,0) & 1) == 0) &&
          -1 < auVar22[0xf]) {
        auVar22[0] = -(local_68[0] == '\0');
        auVar22[1] = -(local_68[1] == '\0');
        auVar22[2] = -(local_68[2] == '\0');
        auVar22[3] = -(local_68[3] == '\0');
        auVar22[4] = -(local_68[4] == '\0');
        auVar22[5] = -(local_68[5] == '\0');
        auVar22[6] = -(local_68[6] == '\0');
        auVar22[7] = -(local_68[7] == '\0');
        auVar22[8] = -(local_68[8] == '\0');
        auVar22[9] = -(SUB161((undefined1  [16])0x0,9) == local_68[9]);
        auVar22[10] = -(SUB161((undefined1  [16])0x0,10) == local_68[10]);
        auVar22[0xb] = -(SUB161((undefined1  [16])0x0,0xb) == local_68[0xb]);
        auVar22[0xc] = -(SUB161((undefined1  [16])0x0,0xc) == local_68[0xc]);
        auVar22[0xd] = -(SUB161((undefined1  [16])0x0,0xd) == local_68[0xd]);
        auVar22[0xe] = -(SUB161((undefined1  [16])0x0,0xe) == local_68[0xe]);
        auVar22[0xf] = -(SUB161((undefined1  [16])0x0,0xf) == local_68[0xf]);
        lVar2 = 0x20;
        if ((((((((((((((((SUB161(auVar22 >> 7,0) & 1) == 0 && (SUB161(auVar22 >> 0xf,0) & 1) == 0)
                        && (SUB161(auVar22 >> 0x17,0) & 1) == 0) &&
                       (SUB161(auVar22 >> 0x1f,0) & 1) == 0) && (SUB161(auVar22 >> 0x27,0) & 1) == 0
                      ) && (SUB161(auVar22 >> 0x2f,0) & 1) == 0) &&
                    (SUB161(auVar22 >> 0x37,0) & 1) == 0) && (SUB161(auVar22 >> 0x3f,0) & 1) == 0)
                  && (SUB161(auVar22 >> 0x47,0) & 1) == 0) && (SUB161(auVar22 >> 0x4f,0) & 1) == 0)
                && (SUB161(auVar22 >> 0x57,0) & 1) == 0) && (SUB161(auVar22 >> 0x5f,0) & 1) == 0) &&
              (SUB161(auVar22 >> 0x67,0) & 1) == 0) && (SUB161(auVar22 >> 0x6f,0) & 1) == 0) &&
            (SUB161(auVar22 >> 0x77,0) & 1) == 0) && -1 < auVar22[0xf]) {
          auVar22[0] = -(local_58[0] == '\0');
          auVar22[1] = -(local_58[1] == '\0');
          auVar22[2] = -(local_58[2] == '\0');
          auVar22[3] = -(local_58[3] == '\0');
          auVar22[4] = -(local_58[4] == '\0');
          auVar22[5] = -(local_58[5] == '\0');
          auVar22[6] = -(local_58[6] == '\0');
          auVar22[7] = -(local_58[7] == '\0');
          auVar22[8] = -(local_58[8] == '\0');
          auVar22[9] = -(local_58[9] == '\0');
          auVar22[10] = -(local_58[10] == '\0');
          auVar22[0xb] = -(local_58[0xb] == '\0');
          auVar22[0xc] = -(local_58[0xc] == '\0');
          auVar22[0xd] = -(local_58[0xd] == '\0');
          auVar22[0xe] = -(local_58[0xe] == '\0');
          auVar22[0xf] = -(local_58[0xf] == '\0');
          lVar2 = 0x30;
          if ((((((((((((((((SUB161(auVar22 >> 7,0) & 1) == 0 && (SUB161(auVar22 >> 0xf,0) & 1) == 0
                           ) && (SUB161(auVar22 >> 0x17,0) & 1) == 0) &&
                         (SUB161(auVar22 >> 0x1f,0) & 1) == 0) &&
                        (SUB161(auVar22 >> 0x27,0) & 1) == 0) &&
                       (SUB161(auVar22 >> 0x2f,0) & 1) == 0) && (SUB161(auVar22 >> 0x37,0) & 1) == 0
                      ) && (SUB161(auVar22 >> 0x3f,0) & 1) == 0) &&
                    (SUB161(auVar22 >> 0x47,0) & 1) == 0) && (SUB161(auVar22 >> 0x4f,0) & 1) == 0)
                  && (SUB161(auVar22 >> 0x57,0) & 1) == 0) && (SUB161(auVar22 >> 0x5f,0) & 1) == 0)
                && (SUB161(auVar22 >> 0x67,0) & 1) == 0) && (SUB161(auVar22 >> 0x6f,0) & 1) == 0) &&
              (SUB161(auVar22 >> 0x77,0) & 1) == 0) && -1 < auVar22[0xf]) {
            auVar22[0] = -(local_48[0] == '\0');
            auVar22[1] = -(local_48[1] == '\0');
            auVar22[2] = -(local_48[2] == '\0');
            auVar22[3] = -(local_48[3] == '\0');
            auVar22[4] = -(local_48[4] == '\0');
            auVar22[5] = -(local_48[5] == '\0');
            auVar22[6] = -(local_48[6] == '\0');
            auVar22[7] = -(local_48[7] == '\0');
            auVar22[8] = -(local_48[8] == '\0');
            auVar22[9] = -(SUB161((undefined1  [16])0x0,9) == local_48[9]);
            auVar22[10] = -(SUB161((undefined1  [16])0x0,10) == local_48[10]);
            auVar22[0xb] = -(SUB161((undefined1  [16])0x0,0xb) == local_48[0xb]);
            auVar22[0xc] = -(SUB161((undefined1  [16])0x0,0xc) == local_48[0xc]);
            auVar22[0xd] = -(SUB161((undefined1  [16])0x0,0xd) == local_48[0xd]);
            auVar22[0xe] = -(SUB161((undefined1  [16])0x0,0xe) == local_48[0xe]);
            auVar22[0xf] = -(SUB161((undefined1  [16])0x0,0xf) == local_48[0xf]);
            lVar2 = 0x40;
            if (!((((((((((((((((SUB161(auVar22 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar22 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar22 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar22 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar22 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar22 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar22 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar22 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar22 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar22 >> 0x4f,0) & 1) != 0) || (SUB161(auVar22 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar22 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar22 >> 0x67,0) & 1) != 0) || (SUB161(auVar22 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar22 >> 0x77,0) & 1) != 0) || auVar22[0xf] < '\0')) {
              auVar22[0] = -(local_38[0] == '\0');
              auVar22[1] = -(local_38[1] == '\0');
              auVar22[2] = -(local_38[2] == '\0');
              auVar22[3] = -(local_38[3] == '\0');
              auVar22[4] = -(local_38[4] == '\0');
              auVar22[5] = -(local_38[5] == '\0');
              auVar22[6] = -(local_38[6] == '\0');
              auVar22[7] = -(local_38[7] == '\0');
              auVar22[8] = -(local_38[8] == '\0');
              auVar22[9] = -(local_38[9] == '\0');
              auVar22[10] = -(local_38[10] == '\0');
              auVar22[0xb] = -(local_38[0xb] == '\0');
              auVar22[0xc] = -(local_38[0xc] == '\0');
              auVar22[0xd] = -(local_38[0xd] == '\0');
              auVar22[0xe] = -(local_38[0xe] == '\0');
              auVar22[0xf] = -(local_38[0xf] == '\0');
              lVar2 = 0x50;
              if ((((((((((((((((SUB161(auVar22 >> 7,0) & 1) == 0 &&
                               (SUB161(auVar22 >> 0xf,0) & 1) == 0) &&
                              (SUB161(auVar22 >> 0x17,0) & 1) == 0) &&
                             (SUB161(auVar22 >> 0x1f,0) & 1) == 0) &&
                            (SUB161(auVar22 >> 0x27,0) & 1) == 0) &&
                           (SUB161(auVar22 >> 0x2f,0) & 1) == 0) &&
                          (SUB161(auVar22 >> 0x37,0) & 1) == 0) &&
                         (SUB161(auVar22 >> 0x3f,0) & 1) == 0) &&
                        (SUB161(auVar22 >> 0x47,0) & 1) == 0) &&
                       (SUB161(auVar22 >> 0x4f,0) & 1) == 0) && (SUB161(auVar22 >> 0x57,0) & 1) == 0
                      ) && (SUB161(auVar22 >> 0x5f,0) & 1) == 0) &&
                    (SUB161(auVar22 >> 0x67,0) & 1) == 0) && (SUB161(auVar22 >> 0x6f,0) & 1) == 0)
                  && (SUB161(auVar22 >> 0x77,0) & 1) == 0) && -1 < auVar22[0xf]) {
                auVar22[0] = -(local_28[0] == '\0');
                auVar22[1] = -(local_28[1] == '\0');
                auVar22[2] = -(local_28[2] == '\0');
                auVar22[3] = -(local_28[3] == '\0');
                auVar22[4] = -(local_28[4] == '\0');
                auVar22[5] = -(local_28[5] == '\0');
                auVar22[6] = -(local_28[6] == '\0');
                auVar22[7] = -(local_28[7] == '\0');
                auVar22[8] = -(local_28[8] == '\0');
                auVar22[9] = -(SUB161((undefined1  [16])0x0,9) == local_28[9]);
                auVar22[10] = -(SUB161((undefined1  [16])0x0,10) == local_28[10]);
                auVar22[0xb] = -(SUB161((undefined1  [16])0x0,0xb) == local_28[0xb]);
                auVar22[0xc] = -(SUB161((undefined1  [16])0x0,0xc) == local_28[0xc]);
                auVar22[0xd] = -(SUB161((undefined1  [16])0x0,0xd) == local_28[0xd]);
                auVar22[0xe] = -(SUB161((undefined1  [16])0x0,0xe) == local_28[0xe]);
                auVar22[0xf] = -(SUB161((undefined1  [16])0x0,0xf) == local_28[0xf]);
                lVar2 = 0x60;
                if ((((((((((((((((SUB161(auVar22 >> 7,0) & 1) == 0 &&
                                 (SUB161(auVar22 >> 0xf,0) & 1) == 0) &&
                                (SUB161(auVar22 >> 0x17,0) & 1) == 0) &&
                               (SUB161(auVar22 >> 0x1f,0) & 1) == 0) &&
                              (SUB161(auVar22 >> 0x27,0) & 1) == 0) &&
                             (SUB161(auVar22 >> 0x2f,0) & 1) == 0) &&
                            (SUB161(auVar22 >> 0x37,0) & 1) == 0) &&
                           (SUB161(auVar22 >> 0x3f,0) & 1) == 0) &&
                          (SUB161(auVar22 >> 0x47,0) & 1) == 0) &&
                         (SUB161(auVar22 >> 0x4f,0) & 1) == 0) &&
                        (SUB161(auVar22 >> 0x57,0) & 1) == 0) &&
                       (SUB161(auVar22 >> 0x5f,0) & 1) == 0) && (SUB161(auVar22 >> 0x67,0) & 1) == 0
                      ) && (SUB161(auVar22 >> 0x6f,0) & 1) == 0) &&
                    (SUB161(auVar22 >> 0x77,0) & 1) == 0) && -1 < auVar22[0xf]) {
                  auVar22[0] = -(local_18[0] == '\0');
                  auVar22[1] = -(local_18[1] == '\0');
                  auVar22[2] = -(local_18[2] == '\0');
                  auVar22[3] = -(local_18[3] == '\0');
                  auVar22[4] = -(local_18[4] == '\0');
                  auVar22[5] = -(local_18[5] == '\0');
                  auVar22[6] = -(local_18[6] == '\0');
                  auVar22[7] = -(local_18[7] == '\0');
                  auVar22[8] = -(local_18[8] == '\0');
                  auVar22[9] = -(SUB161((undefined1  [16])0x0,9) == local_18[9]);
                  auVar22[10] = -(SUB161((undefined1  [16])0x0,10) == local_18[10]);
                  auVar22[0xb] = -(SUB161((undefined1  [16])0x0,0xb) == local_18[0xb]);
                  auVar22[0xc] = -(SUB161((undefined1  [16])0x0,0xc) == local_18[0xc]);
                  auVar22[0xd] = -(SUB161((undefined1  [16])0x0,0xd) == local_18[0xd]);
                  auVar22[0xe] = -(SUB161((undefined1  [16])0x0,0xe) == local_18[0xe]);
                  auVar22[0xf] = -(SUB161((undefined1  [16])0x0,0xf) == local_18[0xf]);
                  uVar3 = (ulonglong)
                          ((((((((((((((((SUB161(auVar22 >> 7,0) & 1) != 0 ||
                                        (SUB161(auVar22 >> 0xf,0) & 1) != 0) ||
                                       (SUB161(auVar22 >> 0x17,0) & 1) != 0) ||
                                      (SUB161(auVar22 >> 0x1f,0) & 1) != 0) ||
                                     (SUB161(auVar22 >> 0x27,0) & 1) != 0) ||
                                    (SUB161(auVar22 >> 0x2f,0) & 1) != 0) ||
                                   (SUB161(auVar22 >> 0x37,0) & 1) != 0) ||
                                  (SUB161(auVar22 >> 0x3f,0) & 1) != 0) ||
                                 (SUB161(auVar22 >> 0x47,0) & 1) != 0) ||
                                (SUB161(auVar22 >> 0x4f,0) & 1) != 0) ||
                               (SUB161(auVar22 >> 0x57,0) & 1) != 0) ||
                              (SUB161(auVar22 >> 0x5f,0) & 1) != 0) ||
                             (SUB161(auVar22 >> 0x67,0) & 1) != 0) ||
                            (SUB161(auVar22 >> 0x6f,0) & 1) != 0) ||
                           (SUB161(auVar22 >> 0x77,0) & 1) != 0) || auVar22[0xf] < '\0');
                  lVar2 = 0x70;
                }
              }
            }
          }
        }
      }
    }
    else {
      lVar2 = 0;
    }
    lVar4 = 0x80;
    if ((char)uVar3 != '\0') {
      auVar22 = psllw(auVar22,7);
      bVar5 = -(auVar22[0] < '\0') & DAT_00114120;
      bVar7 = -(auVar22[1] < '\0') & UNK_00114121;
      bVar8 = -(auVar22[2] < '\0') & UNK_00114122;
      bVar9 = -(auVar22[3] < '\0') & UNK_00114123;
      bVar10 = -(auVar22[4] < '\0') & UNK_00114124;
      bVar11 = -(auVar22[5] < '\0') & UNK_00114125;
      bVar12 = -(auVar22[6] < '\0') & UNK_00114126;
      bVar13 = -(auVar22[7] < '\0') & UNK_00114127;
      bVar14 = -(auVar22[8] < '\0') & UNK_00114128;
      bVar15 = -(auVar22[9] < SUB161((undefined1  [16])0x0,9)) & UNK_00114129;
      bVar16 = -(auVar22[10] < SUB161((undefined1  [16])0x0,10)) & UNK_0011412a;
      bVar17 = -(auVar22[0xb] < SUB161((undefined1  [16])0x0,0xb)) & UNK_0011412b;
      bVar18 = -(auVar22[0xc] < SUB161((undefined1  [16])0x0,0xc)) & UNK_0011412c;
      bVar19 = -(auVar22[0xd] < SUB161((undefined1  [16])0x0,0xd)) & UNK_0011412d;
      bVar20 = -(auVar22[0xe] < SUB161((undefined1  [16])0x0,0xe)) & UNK_0011412e;
      bVar21 = -(auVar22[0xf] < SUB161((undefined1  [16])0x0,0xf)) & UNK_0011412f;
      if (bVar7 < bVar5) {
        bVar7 = bVar5;
      }
      if (bVar7 <= bVar8) {
        bVar7 = bVar8;
      }
      if (bVar7 <= bVar9) {
        bVar7 = bVar9;
      }
      if (bVar7 <= bVar10) {
        bVar7 = bVar10;
      }
      if (bVar7 <= bVar11) {
        bVar7 = bVar11;
      }
      if (bVar7 <= bVar12) {
        bVar7 = bVar12;
      }
      if (bVar7 <= bVar13) {
        bVar7 = bVar13;
      }
      if (bVar7 <= bVar14) {
        bVar7 = bVar14;
      }
      if (bVar7 <= bVar15) {
        bVar7 = bVar15;
      }
      if (bVar7 <= bVar16) {
        bVar7 = bVar16;
      }
      if (bVar7 <= bVar17) {
        bVar7 = bVar17;
      }
      if (bVar7 <= bVar18) {
        bVar7 = bVar18;
      }
      if (bVar7 <= bVar19) {
        bVar7 = bVar19;
      }
      if (bVar7 <= bVar20) {
        bVar7 = bVar20;
      }
      if (bVar7 <= bVar21) {
        bVar7 = bVar21;
      }
      uVar3 = (ulonglong)(byte)(0x10 - bVar7);
      lVar4 = lVar2 + uVar3;
    }
    uVar6 = (*(code *)PTR_from_utf8_00219d78)(uVar3,lVar4);
    if ((char)local_a0 == '\0') {
      (*(code *)PTR_fmt_00219e18)(uVar6,param_2);
      return;
    }
  }
  local_a0 = &local_a4;
  local_98 = PTR_fmt_00219f70;
  (*(code *)PTR_write_0021a2e0)(&local_a0,&DAT_00115c29);
  return;
}


