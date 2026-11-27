// 006327e0 read_cgroup_u64_file

/* craggemini_core[66f3c71560d70857]::admission::read_cgroup_u64_file */

undefined1  [16] __rustcall
craggemini_core[66f3c71560d70857]::admission::read_cgroup_u64_file
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  short *psVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong unaff_R12;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  longlong local_48;
  ulonglong local_40;
  undefined8 local_38;
  
  (*(code *)PTR_inner_007998c0)(param_4,param_2);
  if (local_48 == -1) {
    if ((1 < ((uint)local_40 & 3) - 2) && ((local_40 & 3) != 0)) {
      (*(code *)PTR_drop_00799040)();
    }
  }
  else {
    auVar8 = ::<str>::trim_matches::<<char>::is_whitespace>(local_40,local_38);
    auVar8._8_8_ = auVar8._8_8_;
    psVar4 = auVar8._0_8_;
    if (auVar8._8_8_ != 0) {
      if (auVar8._8_8_ == 1) {
        cVar1 = (char)*psVar4;
        uVar7 = 0;
        if ((cVar1 != '+') && (cVar1 != '-')) goto LAB_00632854;
      }
      else {
        if ((auVar8._8_8_ == 3) && ((char)psVar4[1] == 'x' && *psVar4 == 0x616d)) goto LAB_006328eb;
        cVar1 = (char)*psVar4;
LAB_00632854:
        uVar6 = (ulonglong)(cVar1 == '+');
        psVar4 = (short *)((longlong)psVar4 + uVar6);
        if (auVar8._8_8_ - uVar6 < 0x11) {
          uVar7 = 1;
          if (auVar8._8_8_ == uVar6) {
            unaff_R12 = 0;
          }
          else {
            lVar2 = 0;
            unaff_R12 = 0;
            do {
              uVar5 = *(byte *)((longlong)psVar4 + lVar2) - 0x30;
              if (9 < uVar5) {
                uVar7 = 0;
                break;
              }
              unaff_R12 = (ulonglong)uVar5 + unaff_R12 * 10;
              lVar2 = lVar2 + 1;
            } while (lVar2 != auVar8._8_8_ + -uVar6);
          }
        }
        else {
          uVar7 = 0;
          lVar2 = 0;
          unaff_R12 = 0;
          while (lVar2 != auVar8._8_8_ + -uVar6) {
            auVar8._8_8_ = 0;
            auVar8._0_8_ = unaff_R12;
            uVar3 = SUB168(auVar8 * ZEXT816(10),0);
            if (SUB168(auVar8 * ZEXT816(10),8) != 0) goto joined_r0x0063299c;
            uVar5 = *(byte *)((longlong)psVar4 + lVar2) - 0x30;
            unaff_R12 = uVar3 + uVar5;
            if ((9 < uVar5) || (lVar2 = lVar2 + 1, CARRY8(uVar3,(ulonglong)uVar5)))
            goto joined_r0x0063299c;
          }
          uVar7 = 1;
        }
      }
joined_r0x0063299c:
      if (local_48 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(psVar4,1);
      }
      goto LAB_00632981;
    }
LAB_006328eb:
    if (local_48 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
  uVar7 = 0;
LAB_00632981:
  auVar9._8_8_ = unaff_R12;
  auVar9._0_8_ = uVar7;
  return auVar9;
}


