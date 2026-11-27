// 00625230 extract_text_content

/* craggemini_core[66f3c71560d70857]::server::extract_text_content */

void __rustcall
craggemini_core[66f3c71560d70857]::server::extract_text_content
          (undefined4 param_1,undefined8 *param_2,char *param_3)

{
  ushort uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  byte bVar5;
  ulonglong uVar6;
  char *pcVar7;
  longlong lVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar18;
  longlong local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong *local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  char *local_40;
  ulonglong local_38;
  
  if (param_3 != (char *)0x0) {
    if (*param_3 == '\x03') {
      (*(code *)PTR_clone_00798fd0)();
      *param_2 = 0;
      return;
    }
    if (*param_3 == '\x04') {
      local_b0 = 0;
      local_a8 = 1;
      local_a0 = 0;
      if (*(longlong *)(param_3 + 0x18) == 0) {
LAB_00625647:
        param_2[3] = local_a0;
        param_2[1] = local_b0;
        param_2[2] = local_a8;
        *param_2 = 0;
        return;
      }
      pcVar7 = *(char **)(param_3 + 0x10);
      local_40 = pcVar7 + *(longlong *)(param_3 + 0x18) * 0x20;
      local_98 = 1;
      local_88 = 0;
      lVar16 = 0;
LAB_006252df:
      local_70 = lVar16;
      if (*pcVar7 != '\x05') {
        local_68 = &local_70;
        local_60 = PTR_fmt_007991f0;
        (*(code *)PTR_format_inner_00799048)(param_1,&local_68);
        goto LAB_0062569c;
      }
      lVar12 = *(longlong *)(pcVar7 + 8);
      if (lVar12 != 0) {
        local_80 = *(longlong *)(pcVar7 + 0x10);
        local_90 = lVar12;
        local_78 = local_80;
        while( true ) {
          local_38 = (ulonglong)*(ushort *)(lVar12 + 0x272);
          uVar15 = (ulonglong)((uint)*(ushort *)(lVar12 + 0x272) * 8);
          lVar13 = uVar15 * 3;
          uVar17 = 0xffffffffffffffff;
          lVar11 = lVar12 + 0x168;
          plVar2 = (longlong *)(lVar12 + -8);
          do {
            plVar14 = plVar2;
            uVar6 = local_38;
            if (lVar13 == 0) goto joined_r0x006253c1;
            uVar6 = *(ulonglong *)(lVar11 + 0x10);
            lVar8 = uVar6 - 4;
            if (3 < uVar6) {
              uVar6 = 4;
            }
            iVar4 = (*(code *)PTR_memcmp_00799528)(uVar15,uVar6);
            lVar8 = -lVar8;
            if (iVar4 != 0) {
              lVar8 = (longlong)iVar4;
            }
            bVar5 = (0 < lVar8) - (lVar8 < 0);
            uVar15 = (ulonglong)bVar5;
            uVar17 = uVar17 + 1;
            lVar13 = lVar13 + -0x18;
            lVar11 = lVar11 + 0x18;
            plVar2 = plVar14 + 4;
            param_1 = extraout_XMM0_Da;
          } while (bVar5 == 1);
          uVar6 = uVar17;
          if (bVar5 == 0) break;
joined_r0x006253c1:
          if (local_78 == 0) goto LAB_006252ca;
          local_78 = local_78 + -1;
          lVar12 = *(longlong *)(lVar12 + 0x278 + uVar6 * 8);
        }
        if ((char)plVar14[1] == '\x03') {
          plVar2 = (longlong *)plVar14[3];
          lVar12 = plVar14[4];
          if (lVar12 == 0xb) {
            if (!(*(longlong *)((longlong)plVar2 + 3) != 0x747865745f747570 ||
                 *plVar2 != 0x745f74757074756f)) goto LAB_0062546f;
          }
          else if (lVar12 == 10) {
            if (!((short)plVar2[1] != 0x7478 || *plVar2 != 0x65745f7475706e69)) goto LAB_0062546f;
          }
          else if ((lVar12 == 4) && ((int)*plVar2 == 0x74786574)) {
LAB_0062546f:
            goto LAB_00625474;
          }
        }
      }
      goto LAB_006252ca;
    }
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  pcVar7 = (char *)(*(code *)PTR___rust_alloc_00799000)();
  uVar3 = s_rray_of_content_blockscontent__p_001a0eef._8_8_;
  if (pcVar7 != (char *)0x0) {
    *(undefined8 *)(pcVar7 + 0x20) = s_rray_of_content_blockscontent__p_001a0eef._0_8_;
    *(undefined8 *)(pcVar7 + 0x28) = uVar3;
    uVar3 = s_a_string_or_an_a_001a0edf._8_8_;
    *(undefined8 *)(pcVar7 + 0x10) = s_a_string_or_an_a_001a0edf._0_8_;
    *(undefined8 *)(pcVar7 + 0x18) = uVar3;
    uVar3 = s_content_must_be_001a0ecf._8_8_;
    *(undefined8 *)pcVar7 = s_content_must_be_001a0ecf._0_8_;
    *(undefined8 *)(pcVar7 + 8) = uVar3;
    pcVar7[0x2e] = 't';
    pcVar7[0x2f] = ' ';
    pcVar7[0x30] = 'b';
    pcVar7[0x31] = 'l';
    pcVar7[0x32] = 'o';
    pcVar7[0x33] = 'c';
    pcVar7[0x34] = 'k';
    pcVar7[0x35] = 's';
    param_2[1] = 0x36;
    param_2[2] = pcVar7;
    param_2[3] = 0x36;
    *param_2 = 1;
    return;
  }
  uVar18 = (*(code *)PTR_handle_error_00798ff0)();
  if (local_b0 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar18,1);
  }
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume();
LAB_00625474:
  uVar1 = *(ushort *)(local_90 + 0x272);
  uVar17 = (ulonglong)((uint)uVar1 * 8);
  lVar12 = uVar17 * 3;
  uVar15 = 0xffffffffffffffff;
  lVar13 = local_90 + 0x168;
  puVar10 = (ulonglong *)(local_90 + -8);
  do {
    puVar9 = puVar10;
    if (lVar12 == 0) {
      uVar15 = (ulonglong)uVar1;
      goto LAB_00625503;
    }
    uVar6 = *(ulonglong *)(lVar13 + 0x10);
    lVar11 = uVar6 - 4;
    if (3 < uVar6) {
      uVar6 = 4;
    }
    iVar4 = (*(code *)PTR_memcmp_00799528)(uVar17,uVar6);
    lVar11 = -lVar11;
    if (iVar4 != 0) {
      lVar11 = (longlong)iVar4;
    }
    bVar5 = (0 < lVar11) - (lVar11 < 0);
    uVar17 = (ulonglong)bVar5;
    puVar10 = puVar9 + 4;
    uVar15 = uVar15 + 1;
    lVar12 = lVar12 + -0x18;
    lVar13 = lVar13 + 0x18;
  } while (bVar5 == 1);
  if (bVar5 == 0) goto LAB_00625529;
LAB_00625503:
  lVar12 = local_90;
  if (local_80 == 0) goto LAB_006256f1;
  local_90 = *(longlong *)(local_90 + 0x278 + uVar15 * 8);
  local_80 = local_80 + -1;
  goto LAB_00625474;
LAB_00625529:
  lVar12 = 0;
  if ((char)puVar9[1] != '\x03') {
LAB_006256f1:
    local_68 = &local_70;
    local_60 = PTR_fmt_007991f0;
    (*(code *)PTR_format_inner_00799048)(lVar12,&local_68);
LAB_0062569c:
    param_2[1] = local_58;
    param_2[2] = local_50;
    param_2[3] = local_48;
    *param_2 = 1;
    if (local_b0 == 0) {
      return;
    }
    (*(code *)PTR___rust_dealloc_00798fc8)(local_50,1);
    return;
  }
  uVar15 = *puVar10;
  if ((ulonglong)(local_b0 - local_88) < uVar15) {
    uVar18 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
             <alloc[12e961f32105355]::alloc::Global>(&local_b0,local_88,uVar15,1,1);
    local_98 = local_a8;
    lVar12 = local_a0;
  }
  else {
    lVar12 = local_88;
    param_1 = extraout_XMM0_Da_00;
    uVar18 = extraout_XMM0_Da_00;
    if (uVar15 == 0) goto LAB_00625573;
  }
  param_1 = (*(code *)PTR_memcpy_00799008)(uVar18,uVar15);
LAB_00625573:
  local_a0 = lVar12 + uVar15;
  local_88 = local_a0;
LAB_006252ca:
  pcVar7 = pcVar7 + 0x20;
  lVar16 = lVar16 + 1;
  if (pcVar7 == local_40) goto LAB_00625647;
  goto LAB_006252df;
}


