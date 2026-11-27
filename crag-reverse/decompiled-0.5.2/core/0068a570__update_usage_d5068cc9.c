// 0068a570 update_usage

/* craggemini_core[66f3c71560d70857]::multiprotocol::update_usage */

void __rustcall
craggemini_core[66f3c71560d70857]::multiprotocol::update_usage(char *param_1,char *param_2)

{
  char cVar1;
  ushort uVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  byte bVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  bool bVar16;
  longlong local_88;
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 uStack_4c;
  undefined2 uStack_4b;
  char cStack_49;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  char *local_38;
  
  puVar4 = PTR_memcmp_00799528;
  if (*param_2 != '\x05') {
    return;
  }
  lVar3 = *(longlong *)(param_2 + 8);
  if (lVar3 == 0) {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      (*(code *)PTR_unwrap_failed_00799278)();
      *(undefined4 *)(param_1 + 0x10) = local_48;
      *(undefined4 *)(param_1 + 0x14) = uStack_44;
      *(undefined4 *)(param_1 + 0x18) = (undefined4)uStack_40;
      *(undefined4 *)(param_1 + 0x1c) = uStack_40._4_4_;
      *(undefined4 *)param_1 = local_58;
      *(undefined4 *)(param_1 + 4) = uStack_54;
      *(undefined4 *)(param_1 + 8) = uStack_50;
      *(uint *)(param_1 + 0xc) = CONCAT13(cStack_49,CONCAT21(uStack_4b,uStack_4c));
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume();
    }
  }
  else {
    local_60 = *(longlong *)(param_2 + 0x10);
    lVar10 = lVar3;
    local_88 = local_60;
    local_38 = param_2;
    while( true ) {
      uVar2 = *(ushort *)(lVar10 + 0x272);
      uVar9 = (ulonglong)((uint)uVar2 * 8);
      lVar12 = uVar9 * 3;
      uVar14 = 0xffffffffffffffff;
      lVar7 = lVar10 + 0x168;
      puVar5 = (undefined8 *)(lVar10 + -0x10);
      do {
        puVar15 = puVar5;
        if (lVar12 == 0) {
          uVar14 = (ulonglong)uVar2;
          goto LAB_0068a655;
        }
        uVar11 = *(ulonglong *)(lVar7 + 0x10);
        lVar13 = uVar11 - 0x10;
        if (0xf < uVar11) {
          uVar11 = 0x10;
        }
        iVar6 = (*(code *)puVar4)(uVar9,uVar11);
        lVar13 = -lVar13;
        if (iVar6 != 0) {
          lVar13 = (longlong)iVar6;
        }
        bVar8 = (0 < lVar13) - (lVar13 < 0);
        uVar9 = (ulonglong)bVar8;
        uVar14 = uVar14 + 1;
        lVar12 = lVar12 + -0x18;
        lVar7 = lVar7 + 0x18;
        puVar5 = puVar15 + 4;
      } while (bVar8 == 1);
      if (bVar8 == 0) break;
LAB_0068a655:
      bVar16 = local_88 == 0;
      local_88 = local_88 + -1;
      if (bVar16) goto LAB_0068a68f;
      lVar10 = *(longlong *)(lVar10 + 0x278 + uVar14 * 8);
    }
    if ((*(char *)(puVar15 + 2) == '\x02') && (puVar15[3] == 0)) {
      *(undefined8 *)(param_1 + 0x20) = puVar15[4];
    }
LAB_0068a68f:
    lVar10 = lVar3;
    local_88 = local_60;
    while( true ) {
      uVar2 = *(ushort *)(lVar10 + 0x272);
      uVar9 = (ulonglong)((uint)uVar2 * 8);
      lVar12 = uVar9 * 3;
      uVar14 = 0xffffffffffffffff;
      lVar7 = lVar10 + 0x168;
      puVar5 = (undefined8 *)(lVar10 + -0x10);
      do {
        puVar15 = puVar5;
        if (lVar12 == 0) {
          uVar14 = (ulonglong)uVar2;
          goto LAB_0068a735;
        }
        uVar11 = *(ulonglong *)(lVar7 + 0x10);
        lVar13 = uVar11 - 0x14;
        if (0x13 < uVar11) {
          uVar11 = 0x14;
        }
        iVar6 = (*(code *)puVar4)(uVar9,uVar11);
        lVar13 = -lVar13;
        if (iVar6 != 0) {
          lVar13 = (longlong)iVar6;
        }
        bVar8 = (0 < lVar13) - (lVar13 < 0);
        uVar9 = (ulonglong)bVar8;
        uVar14 = uVar14 + 1;
        lVar12 = lVar12 + -0x18;
        lVar7 = lVar7 + 0x18;
        puVar5 = puVar15 + 4;
      } while (bVar8 == 1);
      if (bVar8 == 0) break;
LAB_0068a735:
      bVar16 = local_88 == 0;
      local_88 = local_88 + -1;
      if (bVar16) goto LAB_0068a76f;
      lVar10 = *(longlong *)(lVar10 + 0x278 + uVar14 * 8);
    }
    if ((*(char *)(puVar15 + 2) == '\x02') && (puVar15[3] == 0)) {
      *(undefined8 *)(param_1 + 0x28) = puVar15[4];
    }
LAB_0068a76f:
    lVar10 = lVar3;
    local_88 = local_60;
    while( true ) {
      uVar2 = *(ushort *)(lVar10 + 0x272);
      uVar9 = (ulonglong)((uint)uVar2 * 8);
      lVar12 = uVar9 * 3;
      uVar14 = 0xffffffffffffffff;
      lVar7 = lVar10 + 0x168;
      puVar5 = (undefined8 *)(lVar10 + -0x10);
      do {
        puVar15 = puVar5;
        if (lVar12 == 0) {
          uVar14 = (ulonglong)uVar2;
          goto LAB_0068a815;
        }
        uVar11 = *(ulonglong *)(lVar7 + 0x10);
        lVar13 = uVar11 - 0x12;
        if (0x11 < uVar11) {
          uVar11 = 0x12;
        }
        iVar6 = (*(code *)puVar4)(uVar9,uVar11);
        lVar13 = -lVar13;
        if (iVar6 != 0) {
          lVar13 = (longlong)iVar6;
        }
        bVar8 = (0 < lVar13) - (lVar13 < 0);
        uVar9 = (ulonglong)bVar8;
        uVar14 = uVar14 + 1;
        lVar12 = lVar12 + -0x18;
        lVar7 = lVar7 + 0x18;
        puVar5 = puVar15 + 4;
      } while (bVar8 == 1);
      if (bVar8 == 0) break;
LAB_0068a815:
      bVar16 = local_88 == 0;
      local_88 = local_88 + -1;
      if (bVar16) goto LAB_0068a84f;
      lVar10 = *(longlong *)(lVar10 + 0x278 + uVar14 * 8);
    }
    if ((*(char *)(puVar15 + 2) == '\x02') && (puVar15[3] == 0)) {
      *(undefined8 *)(param_1 + 0x30) = puVar15[4];
    }
LAB_0068a84f:
    lVar10 = lVar3;
    local_88 = local_60;
    while( true ) {
      uVar2 = *(ushort *)(lVar10 + 0x272);
      uVar9 = (ulonglong)((uint)uVar2 * 8);
      lVar12 = uVar9 * 3;
      uVar14 = 0xffffffffffffffff;
      lVar7 = lVar10 + 0x168;
      puVar5 = (undefined8 *)(lVar10 + -0x10);
      do {
        puVar15 = puVar5;
        if (lVar12 == 0) {
          uVar14 = (ulonglong)uVar2;
          goto LAB_0068a8f5;
        }
        uVar11 = *(ulonglong *)(lVar7 + 0x10);
        lVar13 = uVar11 - 0xf;
        if (0xe < uVar11) {
          uVar11 = 0xf;
        }
        iVar6 = (*(code *)puVar4)(uVar9,uVar11);
        lVar13 = -lVar13;
        if (iVar6 != 0) {
          lVar13 = (longlong)iVar6;
        }
        bVar8 = (0 < lVar13) - (lVar13 < 0);
        uVar9 = (ulonglong)bVar8;
        uVar14 = uVar14 + 1;
        lVar12 = lVar12 + -0x18;
        lVar7 = lVar7 + 0x18;
        puVar5 = puVar15 + 4;
      } while (bVar8 == 1);
      if (bVar8 == 0) break;
LAB_0068a8f5:
      bVar16 = local_88 == 0;
      local_88 = local_88 + -1;
      if (bVar16) goto LAB_0068a92f;
      lVar10 = *(longlong *)(lVar10 + 0x278 + uVar14 * 8);
    }
    if ((*(char *)(puVar15 + 2) == '\x02') && (puVar15[3] == 0)) {
      *(undefined8 *)(param_1 + 0x38) = puVar15[4];
    }
LAB_0068a92f:
    lVar10 = lVar3;
    while( true ) {
      uVar2 = *(ushort *)(lVar10 + 0x272);
      uVar9 = (ulonglong)((uint)uVar2 * 8);
      lVar12 = uVar9 * 3;
      uVar14 = 0xffffffffffffffff;
      lVar7 = lVar10 + 0x168;
      puVar5 = (undefined8 *)(lVar10 + -0x10);
      do {
        puVar15 = puVar5;
        if (lVar12 == 0) {
          uVar14 = (ulonglong)uVar2;
          goto LAB_0068a9d5;
        }
        uVar11 = *(ulonglong *)(lVar7 + 0x10);
        lVar13 = uVar11 - 0x17;
        if (0x16 < uVar11) {
          uVar11 = 0x17;
        }
        iVar6 = (*(code *)puVar4)(uVar9,uVar11);
        lVar13 = -lVar13;
        if (iVar6 != 0) {
          lVar13 = (longlong)iVar6;
        }
        bVar8 = (0 < lVar13) - (lVar13 < 0);
        uVar9 = (ulonglong)bVar8;
        uVar14 = uVar14 + 1;
        lVar12 = lVar12 + -0x18;
        lVar7 = lVar7 + 0x18;
        puVar5 = puVar15 + 4;
      } while (bVar8 == 1);
      if (bVar8 == 0) break;
LAB_0068a9d5:
      bVar16 = local_60 == 0;
      local_60 = local_60 + -1;
      if (bVar16) goto LAB_0068aa00;
      lVar10 = *(longlong *)(lVar10 + 0x278 + uVar14 * 8);
    }
    if ((*(char *)(puVar15 + 2) == '\x02') && (puVar15[3] == 0)) {
      *(undefined8 *)(param_1 + 0x40) = puVar15[4];
      if (*(longlong *)(local_38 + 0x18) == 0) goto LAB_0068aa3b;
      goto LAB_0068aa11;
    }
LAB_0068aa00:
    if (*(longlong *)(local_38 + 0x18) != 0) {
LAB_0068aa11:
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<_,_,_>as_core[c0acaeba6ab4c2e0]::clone::Clone>
      ::clone::clone_subtree::
      <alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value,alloc[12e961f32105355]::alloc::Global>
                (&uStack_50,lVar3,*(undefined8 *)(local_38 + 0x10));
      cVar1 = *param_1;
      goto joined_r0x0068aa55;
    }
  }
LAB_0068aa3b:
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_4b = 0;
  cStack_49 = '\0';
  uStack_40 = 0;
  cVar1 = *param_1;
joined_r0x0068aa55:
  if (cVar1 != -1) {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(param_1);
  }
  *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_44,local_48);
  *(undefined8 *)(param_1 + 0x18) = uStack_40;
  *param_1 = '\x05';
  *(ulonglong *)(param_1 + 1) = CONCAT17((undefined1)uStack_50,CONCAT43(uStack_54,local_58._1_3_));
  *(uint *)(param_1 + 9) = CONCAT13(uStack_4c,uStack_50._1_3_);
  *(undefined2 *)(param_1 + 0xd) = uStack_4b;
  param_1[0xf] = cStack_49;
  return;
}


