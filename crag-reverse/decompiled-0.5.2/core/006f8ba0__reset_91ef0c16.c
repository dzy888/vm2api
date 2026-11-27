// 006f8ba0 reset

/* <tokio[d7d91d38da47d894]::time::sleep::Sleep>::reset */

void __rustcall
<tokio[d7d91d38da47d894]::time::sleep::Sleep>::reset
          (char *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auVar5 [16];
  code *pcVar6;
  undefined1 auVar7 [16];
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined4 uVar14;
  
  *(undefined8 *)(param_1 + 0x60) = param_2;
  *(undefined4 *)(param_1 + 0x68) = param_3;
  lVar11 = 0x240;
  if (*param_1 != '\0') {
    lVar11 = 0x338;
  }
  uVar2 = *(uint *)(*(longlong *)(param_1 + 8) + 0x90 + lVar11);
  if (uVar2 == 0xffffffff) {
    uVar14 = (*(code *)PTR_expect_failed_00799440)
                       (param_4,&anon_880d723ff0f66ce4ced63274bf095def_19_llvm_12887403613343987975)
    ;
  }
  else {
    (*(code *)PTR_add_00799280)
              (999999,0,&anon_cbe4ed91a1eb3280be5cbdd57023f5c1_64_llvm_17798946807444736387);
    uVar9 = (ulonglong)uVar2;
    uVar8 = (*(code *)PTR_duration_since_007992b0)();
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar8;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = (uVar9 & 0xffffffff) / 1000000;
    auVar7 = auVar5 * ZEXT816(1000) + auVar7;
    uVar8 = auVar7._0_8_;
    if (0xfffffffffffffffc < uVar8) {
      uVar8 = 0xfffffffffffffffd;
    }
    if (auVar7._8_8_ != 0) {
      uVar8 = 0xfffffffffffffffd;
    }
    iVar3 = *(int *)(param_1 + 0x10);
    cVar1 = *param_1;
    plVar4 = *(longlong **)(param_1 + 8);
    LOCK();
    lVar11 = *plVar4;
    *plVar4 = *plVar4 + 1;
    UNLOCK();
    if (iVar3 != 2) {
      if (cVar1 == '\0') {
        if (-1 < lVar11) {
          uVar10 = 0;
          goto LAB_006f8d2b;
        }
      }
      else {
        uVar10 = 1;
        if (-1 < lVar11) {
LAB_006f8d2b:
          <tokio[d7d91d38da47d894]::runtime::Timer>::reset(param_1 + 0x10,uVar10,plVar4,uVar8);
          return;
        }
      }
      goto LAB_006f8d79;
    }
    if (cVar1 == '\0') {
      if (lVar11 < 0) goto LAB_006f8d79;
      lVar13 = 0;
    }
    else {
      lVar13 = 1;
      if (lVar11 < 0) goto LAB_006f8d79;
    }
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
              (param_1 + 0x10);
    *(longlong *)(param_1 + 0x10) = lVar13;
    *(longlong **)(param_1 + 0x18) = plVar4;
    uVar14 = 0;
    param_1[0x20] = '\0';
    param_1[0x21] = '\0';
    param_1[0x22] = '\0';
    param_1[0x23] = '\0';
    param_1[0x24] = '\0';
    param_1[0x25] = '\0';
    param_1[0x26] = '\0';
    param_1[0x27] = '\0';
    param_1[0x28] = '\0';
    param_1[0x29] = '\0';
    param_1[0x2a] = '\0';
    param_1[0x2b] = '\0';
    param_1[0x2c] = '\0';
    param_1[0x2d] = '\0';
    param_1[0x2e] = '\0';
    param_1[0x2f] = '\0';
    param_1[0x30] = '\0';
    param_1[0x31] = '\0';
    param_1[0x32] = '\0';
    param_1[0x33] = '\0';
    param_1[0x34] = '\0';
    param_1[0x35] = '\0';
    param_1[0x36] = '\0';
    param_1[0x37] = '\0';
    param_1[0x38] = -1;
    param_1[0x39] = -1;
    param_1[0x3a] = -1;
    param_1[0x3b] = -1;
    param_1[0x3c] = -1;
    param_1[0x3d] = -1;
    param_1[0x3e] = -1;
    param_1[0x3f] = -1;
    param_1[0x40] = '\0';
    param_1[0x41] = '\0';
    param_1[0x42] = '\0';
    param_1[0x43] = '\0';
    param_1[0x44] = '\0';
    param_1[0x45] = '\0';
    param_1[0x46] = '\0';
    param_1[0x47] = '\0';
    param_1[0x50] = '\0';
    param_1[0x51] = '\0';
    param_1[0x52] = '\0';
    param_1[0x53] = '\0';
    param_1[0x54] = '\0';
    param_1[0x55] = '\0';
    param_1[0x56] = '\0';
    param_1[0x57] = '\0';
    param_1[0x58] = '\0';
    plVar12 = plVar4 + 0x67;
    if (lVar13 == 0) {
      plVar12 = plVar4 + 0x48;
    }
    if ((int)plVar12[0x12] != -1) {
      <tokio[d7d91d38da47d894]::runtime::time::handle::Handle>::reregister
                (plVar12 + 10,plVar12,uVar8,param_1 + 0x20);
      return;
    }
  }
  (*(code *)PTR_expect_failed_00799440)
            (uVar14,&anon_880d723ff0f66ce4ced63274bf095def_35_llvm_12887403613343987975);
LAB_006f8d79:
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
}


