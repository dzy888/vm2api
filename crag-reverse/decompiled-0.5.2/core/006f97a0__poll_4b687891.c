// 006f97a0 poll

/* <tokio[d7d91d38da47d894]::time::sleep::Sleep as
   core[c0acaeba6ab4c2e0]::future::future::Future>::poll */

undefined8 __rustcall
<tokio[d7d91d38da47d894]::time::sleep::Sleep_as_core[c0acaeba6ab4c2e0]::future::future::Future>::
poll(undefined4 param_1,int *param_2,undefined8 *param_3)

{
  ushort uVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  code *pcVar5;
  undefined1 auVar6 [16];
  char cVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined **ppuVar13;
  longlong *plVar14;
  uint uVar15;
  longlong lVar16;
  longlong *in_FS_OFFSET;
  undefined4 uVar17;
  char local_51;
  longlong local_50;
  undefined **local_48;
  code *local_40;
  undefined8 local_38;
  
  uVar9 = *param_3;
  lVar16 = *in_FS_OFFSET;
  lVar11 = lVar16 + -0x138;
  if (*(char *)(lVar16 + -0xf0) == '\0') {
LAB_006f97d3:
    uVar1 = *(ushort *)(lVar16 + -0xf4);
    cVar7 = (char)(uVar1 >> 8);
    if ((uVar1 & 1) != 0) {
      if (uVar1 >> 8 == 0) {
        (*(code *)PTR_defer_0079a740)();
        return 1;
      }
      cVar7 = cVar7 + -1;
    }
    *(char *)(lVar16 + -0xf3) = cVar7;
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
  uVar8 = *(ulonglong *)(param_2 + 4);
  local_50 = lVar11;
  if (uVar8 == 2) {
    lVar11 = *(longlong *)(param_2 + 2);
    lVar16 = 0x240;
    if ((char)*param_2 != '\0') {
      lVar16 = 0x338;
    }
    if (*(int *)(lVar11 + 0x90 + lVar16) != -1) {
      uVar17 = 0;
      local_38 = uVar9;
      local_48 = (undefined **)
                 (*(code *)PTR_add_00799280)
                           (999999,0,&
                                     anon_cbe4ed91a1eb3280be5cbdd57023f5c1_64_llvm_17798946807444736387
                           );
      uVar9 = *(undefined8 *)(lVar11 + 0x88 + lVar16);
      local_40 = (code *)CONCAT44(local_40._4_4_,uVar17);
      uVar12 = (ulonglong)*(uint *)(lVar11 + 0x90 + lVar16);
      uVar8 = (*(code *)PTR_duration_since_007992b0)();
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar8;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = (uVar12 & 0xffffffff) / 1000000;
      auVar6 = auVar4 * ZEXT816(1000) + auVar6;
      uVar8 = auVar6._0_8_;
      if (0xfffffffffffffffc < uVar8) {
        uVar8 = 0xfffffffffffffffd;
      }
      if (auVar6._8_8_ != 0) {
        uVar8 = 0xfffffffffffffffd;
      }
      iVar2 = *param_2;
      plVar3 = *(longlong **)(param_2 + 2);
      lVar16 = 1;
      LOCK();
      lVar11 = *plVar3;
      *plVar3 = *plVar3 + 1;
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
                (param_2 + 4,uVar9);
      *(longlong *)(param_2 + 4) = lVar16;
      *(longlong **)(param_2 + 6) = plVar3;
      param_1 = 0;
      param_2[8] = 0;
      param_2[9] = 0;
      param_2[10] = 0;
      param_2[0xb] = 0;
      param_2[0xc] = 0;
      param_2[0xd] = 0;
      param_2[0xe] = -1;
      param_2[0xf] = -1;
      param_2[0x10] = 0;
      param_2[0x11] = 0;
      param_2[0x14] = 0;
      param_2[0x15] = 0;
      *(char *)(param_2 + 0x16) = '\0';
      plVar14 = plVar3 + 0x67;
      if (lVar16 == 0) {
        plVar14 = plVar3 + 0x48;
      }
      if ((int)plVar14[0x12] != -1) {
        param_1 = <tokio[d7d91d38da47d894]::runtime::time::handle::Handle>::reregister
                            (plVar14 + 10,plVar14,uVar8,param_2 + 8);
        uVar8 = *(ulonglong *)(param_2 + 4);
        goto LAB_006f9973;
      }
      goto LAB_006f9a09;
    }
    ppuVar13 = &PTR_anon_880d723ff0f66ce4ced63274bf095def_17_llvm_12887403613343987975_00794920;
  }
  else {
LAB_006f9973:
    lVar11 = *(longlong *)(param_2 + 6);
    lVar16 = 0x240;
    if ((uVar8 & 1) != 0) {
      lVar16 = 0x338;
    }
    if (*(int *)(lVar11 + 0x90 + lVar16) != -1) {
      if (*(char *)(lVar11 + 0x80 + lVar16) == '\0') {
        uVar17 = (*(code *)PTR_register_by_ref_00799738)();
        uVar10 = (uint)lVar11;
        if (*(longlong *)(param_2 + 0xe) == -1) {
          local_51 = (char)param_2[0x16];
          if (local_51 == '\0') {
            return 0;
          }
          local_48 = (undefined **)&local_51;
          local_40 = (code *)PTR_fmt_0079a8f0;
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
          uVar10 = (uint)*(byte *)(local_50 + 0x48);
          lVar11 = local_50;
          if (*(byte *)(local_50 + 0x48) == 0) goto LAB_006f99cd;
        }
        lVar11 = local_50;
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
      local_48 = &anon_880d723ff0f66ce4ced63274bf095def_32_llvm_12887403613343987975;
      local_40 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
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
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}


