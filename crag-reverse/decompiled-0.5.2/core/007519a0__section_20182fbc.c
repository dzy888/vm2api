// 007519a0 section

/* <std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::Object>::section */

undefined1  [16] __rustcall
<std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::Object>::section
          (longlong param_1,undefined8 param_2,int *param_3,longlong param_4)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  int *piVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  int *piVar13;
  ulonglong unaff_R14;
  longlong lVar14;
  longlong lVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  longlong local_80;
  char local_78;
  ulonglong local_70;
  
  lVar14 = *(longlong *)(param_1 + 0x28);
  lVar2 = *(longlong *)(param_1 + 0x30);
  if ((lVar2 != 0) && (*(longlong *)(param_1 + 0x38) != 0)) {
    unaff_R14 = *(ulonglong *)(param_1 + 0x40);
    uVar12 = *(undefined8 *)(param_1 + 0x50);
    uVar3 = *(ulonglong *)(param_1 + 0x48);
    lVar15 = 0;
    do {
      lVar10 = *(uint *)(lVar14 + lVar15) + uVar3;
      if (!CARRY8((ulonglong)*(uint *)(lVar14 + lVar15),uVar3)) {
        lVar7 = (*(code *)PTR_read_bytes_at_until_0079abf8)(uVar12,lVar10,0);
        if ((lVar10 == param_4 && lVar7 != 0) &&
           (iVar6 = (*(code *)PTR_bcmp_00799020)(lVar7 != 0,param_4), iVar6 == 0)) {
          if ((*(int *)(lVar14 + 4 + lVar15) == 8) ||
             (unaff_R14 = *(ulonglong *)(lVar14 + 0x20 + lVar15), unaff_R14 == 0)) {
            unaff_R14 = 0;
            piVar13 = (int *)(ulonglong)((*(byte *)(lVar14 + 9 + lVar15) & 8) == 0);
            goto LAB_00751aef;
          }
          uVar3 = *(ulonglong *)(lVar14 + 0x18 + lVar15);
          piVar13 = (int *)0x0;
          if ((*(ulonglong *)(param_1 + 0x20) < uVar3) ||
             (*(ulonglong *)(param_1 + 0x20) - uVar3 < unaff_R14)) goto LAB_00751aef;
          piVar13 = (int *)(uVar3 + *(longlong *)(param_1 + 0x18));
          if ((*(byte *)(lVar14 + 9 + lVar15) & 8) == 0) {
          }
          else {
            if ((unaff_R14 < 0x18) || (*piVar13 != 1)) goto LAB_00751aed;
            lVar14 = unaff_R14 - 0x18;
            auVar17 = <std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::stash::Stash>::
                      allocate(param_2,*(undefined8 *)(piVar13 + 2));
            unaff_R14 = auVar17._8_8_;
            piVar9 = auVar17._0_8_;
            (*(code *)PTR_memset_00799090)();
            (*(code *)PTR_decompress_0079af90)(lVar14,piVar13 + 6,piVar9,unaff_R14);
            if (unaff_R14 != local_70 || lVar14 != local_80) {
              piVar9 = (int *)0x0;
            }
            if (local_78 != '\0') {
              piVar9 = (int *)0x0;
            }
            piVar13 = piVar9;
          }
          goto LAB_00751aef;
        }
      }
      lVar15 = lVar15 + 0x40;
    } while (lVar2 << 6 != lVar15);
  }
  if (*(int *)((longlong)param_3 + 3) == 0x5f677562 && *param_3 == 0x6265642e) {
    if (*(char *)((longlong)param_3 + 7) < -0x40) {
      uVar12 = 7;
      (*(code *)PTR_slice_error_fail_00799408)
                (param_4,7,&PTR_s__rustc_48a229ceaefd4985c50990b14_00796c78);
      pcVar4 = (code *)swi(3);
      auVar17._0_8_ = (*pcVar4)();
      auVar17._8_8_ = uVar12;
      return auVar17;
    }
    if ((lVar2 != 0) && (*(longlong *)(param_1 + 0x38) != 0)) {
      uVar3 = *(ulonglong *)(param_1 + 0x48);
      unaff_R14 = *(ulonglong *)(param_1 + 0x50);
      lVar15 = 0;
      do {
        uVar11 = *(uint *)(lVar14 + lVar15) + uVar3;
        if (((((!CARRY8((ulonglong)*(uint *)(lVar14 + lVar15),uVar3)) &&
              (plVar8 = (longlong *)(*(code *)PTR_read_bytes_at_until_0079abf8)(unaff_R14,uVar11,0),
              plVar8 != (longlong *)0x0)) && (7 < uVar11)) &&
            ((uVar11 - 1 == param_4 && (*plVar8 == 0x5f67756265647a2e)))) &&
           (iVar6 = (*(code *)PTR_bcmp_00799020)(0,uVar11 - 8), iVar6 == 0)) {
          if ((*(int *)(lVar14 + 4 + lVar15) == 8) ||
             (uVar3 = *(ulonglong *)(lVar14 + 0x20 + lVar15), uVar3 == 0)) goto LAB_00751aed;
          uVar11 = *(ulonglong *)(lVar14 + 0x18 + lVar15);
          piVar13 = (int *)0x0;
          if ((uVar11 <= *(ulonglong *)(param_1 + 0x20)) &&
             (uVar3 <= *(ulonglong *)(param_1 + 0x20) - uVar11)) {
            piVar13 = (int *)0x0;
            if (7 < uVar3) {
              plVar8 = (longlong *)(uVar11 + *(longlong *)(param_1 + 0x18));
              piVar13 = (int *)0x0;
              if ((*plVar8 == 0x42494c5a) && (3 < uVar3 - 8)) {
                uVar1 = *(uint *)(plVar8 + 1);
                auVar17 = <std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::stash::Stash>::
                          allocate(param_2,uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 |
                                           (uVar1 & 0xff00) << 8 | uVar1 << 0x18);
                unaff_R14 = auVar17._8_8_;
                cVar5 = std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::decompress_zlib
                                  ((longlong)plVar8 + 0xc,uVar3 - 0xc,auVar17._0_8_,unaff_R14);
                piVar13 = (int *)0x0;
                if (cVar5 != '\0') {
                  piVar13 = auVar17._0_8_;
                }
              }
            }
          }
          goto LAB_00751aef;
        }
        lVar15 = lVar15 + 0x40;
      } while (lVar2 << 6 != lVar15);
      piVar13 = (int *)0x0;
      goto LAB_00751aef;
    }
  }
LAB_00751aed:
  piVar13 = (int *)0x0;
LAB_00751aef:
  auVar16._8_8_ = unaff_R14;
  auVar16._0_8_ = piVar13;
  return auVar16;
}


