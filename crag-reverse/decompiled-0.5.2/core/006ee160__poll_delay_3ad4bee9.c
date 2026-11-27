// 006ee160 poll_delay

/* WARNING: Switch with 1 destination removed at 0x006ee205 */
/* tokio[d7d91d38da47d894]::time::timeout::poll_delay */

ulonglong __rustcall
tokio[d7d91d38da47d894]::time::timeout::poll_delay
          (undefined4 param_1,char param_2,int *param_3,undefined8 *param_4)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auVar5 [16];
  code *pcVar6;
  undefined1 auVar7 [16];
  char cVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined **ppuVar13;
  longlong *plVar14;
  uint uVar15;
  longlong lVar16;
  longlong *in_FS_OFFSET;
  undefined4 uVar17;
  char cStack_51;
  longlong lStack_50;
  undefined **ppuStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  lVar11 = *in_FS_OFFSET;
  if (*(char *)(lVar11 + -0xf0) == '\0') {
    cVar8 = *(char *)(lVar11 + -0xf4);
joined_r0x006ee1f3:
    if (((cVar8 == '\x01') && (param_2 != '\0')) && (*(char *)(lVar11 + -0xf3) == '\0')) {
      *(undefined1 *)(lVar11 + -0xf4) = 0;
      uStack_30 = 0x6ee1b2;
      uVar9 = (*(code *)PTR_poll_007991a0)();
      if (*(char *)(lVar11 + -0xf0) != '\0') {
        if (*(char *)(lVar11 + -0xf0) == '\x02') {
          return uVar9;
        }
        uVar9 = uVar9 & 0xffffffff;
        uStack_30 = 0x6ee225;
        (*(code *)PTR_register_00799240)();
        *(undefined1 *)(lVar11 + -0xf0) = 0;
      }
      *(undefined2 *)(lVar11 + -0xf4) = 1;
      return uVar9;
    }
  }
  else if (*(char *)(lVar11 + -0xf0) == '\x01') {
    uStack_30 = 0x6ee1e7;
    param_1 = (*(code *)PTR_register_00799240)();
    *(undefined1 *)(lVar11 + -0xf0) = 0;
    cVar8 = *(char *)(lVar11 + -0xf4);
    goto joined_r0x006ee1f3;
  }
  uVar3 = *param_4;
  lVar16 = *in_FS_OFFSET;
  lVar11 = lVar16 + -0x138;
  if (*(char *)(lVar16 + -0xf0) == '\0') {
LAB_006f97d3:
    uVar1 = *(ushort *)(lVar16 + -0xf4);
    cVar8 = (char)(uVar1 >> 8);
    if ((uVar1 & 1) != 0) {
      if (uVar1 >> 8 == 0) {
        (*(code *)PTR_defer_0079a740)();
        return 1;
      }
      cVar8 = cVar8 + -1;
    }
    *(char *)(lVar16 + -0xf3) = cVar8;
    uVar15 = (uint)uVar1 << 8;
  }
  else {
    uVar15 = 0;
    if (*(char *)(lVar16 + -0xf0) == '\x01') {
      param_1 = (*(code *)PTR_register_00799240)();
      *(undefined1 *)(lVar16 + -0xf0) = 0;
      goto LAB_006f97d3;
    }
  }
  uVar9 = *(ulonglong *)(param_3 + 4);
  lStack_50 = lVar11;
  if (uVar9 == 2) {
    lVar11 = *(longlong *)(param_3 + 2);
    lVar16 = 0x240;
    if ((char)*param_3 != '\0') {
      lVar16 = 0x338;
    }
    if (*(int *)(lVar11 + 0x90 + lVar16) != -1) {
      uVar17 = 0;
      uStack_38 = uVar3;
      ppuStack_48 = (undefined **)
                    (*(code *)PTR_add_00799280)
                              (999999,0,&
                                        anon_cbe4ed91a1eb3280be5cbdd57023f5c1_64_llvm_17798946807444736387
                              );
      uVar3 = *(undefined8 *)(lVar11 + 0x88 + lVar16);
      pcStack_40 = (code *)CONCAT44(pcStack_40._4_4_,uVar17);
      uVar12 = (ulonglong)*(uint *)(lVar11 + 0x90 + lVar16);
      uVar9 = (*(code *)PTR_duration_since_007992b0)();
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar9;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = (uVar12 & 0xffffffff) / 1000000;
      auVar7 = auVar5 * ZEXT816(1000) + auVar7;
      uVar9 = auVar7._0_8_;
      if (0xfffffffffffffffc < uVar9) {
        uVar9 = 0xfffffffffffffffd;
      }
      if (auVar7._8_8_ != 0) {
        uVar9 = 0xfffffffffffffffd;
      }
      iVar2 = *param_3;
      plVar4 = *(longlong **)(param_3 + 2);
      lVar16 = 1;
      LOCK();
      lVar11 = *plVar4;
      *plVar4 = *plVar4 + 1;
      UNLOCK();
      if (iVar2 == 1) {
        if (lVar11 < 0) goto LAB_006f9a83;
      }
      else {
        if (lVar11 < 0) goto LAB_006f9a83;
        lVar16 = 0;
      }
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                (param_3 + 4,uVar3);
      *(longlong *)(param_3 + 4) = lVar16;
      *(longlong **)(param_3 + 6) = plVar4;
      param_1 = 0;
      param_3[8] = 0;
      param_3[9] = 0;
      param_3[10] = 0;
      param_3[0xb] = 0;
      param_3[0xc] = 0;
      param_3[0xd] = 0;
      param_3[0xe] = -1;
      param_3[0xf] = -1;
      param_3[0x10] = 0;
      param_3[0x11] = 0;
      param_3[0x14] = 0;
      param_3[0x15] = 0;
      *(char *)(param_3 + 0x16) = '\0';
      plVar14 = plVar4 + 0x67;
      if (lVar16 == 0) {
        plVar14 = plVar4 + 0x48;
      }
      if ((int)plVar14[0x12] != -1) {
        param_1 = <tokio[d7d91d38da47d894]::runtime::time::handle::Handle>::reregister
                            (plVar14 + 10,plVar14,uVar9,param_3 + 8);
        uVar9 = *(ulonglong *)(param_3 + 4);
        goto LAB_006f9973;
      }
      goto LAB_006f9a09;
    }
    ppuVar13 = &PTR_anon_880d723ff0f66ce4ced63274bf095def_17_llvm_12887403613343987975_00794920;
  }
  else {
LAB_006f9973:
    lVar11 = *(longlong *)(param_3 + 6);
    lVar16 = 0x240;
    if ((uVar9 & 1) != 0) {
      lVar16 = 0x338;
    }
    if (*(int *)(lVar11 + 0x90 + lVar16) != -1) {
      if (*(char *)(lVar11 + 0x80 + lVar16) == '\0') {
        uVar17 = (*(code *)PTR_register_by_ref_00799738)();
        uVar10 = (uint)lVar11;
        if (*(longlong *)(param_3 + 0xe) == -1) {
          cStack_51 = (char)param_3[0x16];
          if (cStack_51 == '\0') {
            return 0;
          }
          ppuStack_48 = (undefined **)&cStack_51;
          pcStack_40 = (code *)PTR_fmt_0079a8f0;
          uVar9 = (*(code *)PTR_panic_fmt_007991a8)
                            (uVar17,&
                                    PTR_anon_880d723ff0f66ce4ced63274bf095def_17_llvm_12887403613343987975_00794a20
                            );
        }
        else {
          uVar9 = 1;
          if ((uVar15 >> 8 & 1) == 0) {
            return 1;
          }
          uVar10 = (uint)*(byte *)(lStack_50 + 0x48);
          lVar11 = lStack_50;
          if (*(byte *)(lStack_50 + 0x48) == 0) goto LAB_006f99cd;
        }
        lVar11 = lStack_50;
        if (uVar10 == 2) {
          return uVar9;
        }
        (*(code *)PTR_register_00799240)();
        *(undefined1 *)(lVar11 + 0x48) = 0;
LAB_006f99cd:
        *(undefined1 *)(lVar11 + 0x44) = 1;
        *(char *)(lVar11 + 0x45) = (char)(uVar15 >> 0x10);
        return 1;
      }
      ppuStack_48 = &anon_880d723ff0f66ce4ced63274bf095def_32_llvm_12887403613343987975;
      pcStack_40 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
      (*(code *)PTR_panic_fmt_007991a8)
                (lVar11,&anon_880d723ff0f66ce4ced63274bf095def_34_llvm_12887403613343987975);
      goto LAB_006f9a83;
    }
LAB_006f9a09:
    ppuVar13 = &anon_880d723ff0f66ce4ced63274bf095def_35_llvm_12887403613343987975;
  }
  (*(code *)PTR_expect_failed_00799440)(param_1,ppuVar13);
LAB_006f9a83:
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
}


