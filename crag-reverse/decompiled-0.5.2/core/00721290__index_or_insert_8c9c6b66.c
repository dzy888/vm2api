// 00721290 index_or_insert

/* <str as serde_json[dc3825464c436029]::value::index::Index>::index_or_insert */

char * __rustcall
<str_as_serde_json[dc3825464c436029]::value::index::Index>::index_or_insert
          (undefined8 param_1,undefined8 *param_2,char *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong unaff_R14;
  longlong lVar11;
  bool bVar12;
  undefined1 uVar13;
  undefined4 extraout_XMM0_Da;
  longlong local_108;
  longlong local_f8;
  undefined1 local_f0;
  undefined8 local_ef;
  undefined4 local_e7;
  undefined2 local_e3;
  undefined1 local_e1;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  char *local_d0;
  ulonglong local_c8;
  undefined8 *local_c0;
  code *local_b8;
  char **local_b0;
  char *local_a8;
  longlong local_a0;
  undefined8 local_98;
  ulonglong local_90;
  undefined1 local_88;
  undefined8 local_87;
  undefined4 local_7f;
  undefined2 local_7b;
  undefined1 local_79;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_60;
  undefined8 *local_58;
  char *local_50 [2];
  longlong local_40;
  
  local_60 = param_1;
  local_58 = param_2;
  if (*param_3 == '\0') {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(param_3);
    *param_3 = '\x05';
    param_3[8] = '\0';
    param_3[9] = '\0';
    param_3[10] = '\0';
    param_3[0xb] = '\0';
    param_3[0xc] = '\0';
    param_3[0xd] = '\0';
    param_3[0xe] = '\0';
    param_3[0xf] = '\0';
    param_3[0x18] = '\0';
    param_3[0x19] = '\0';
    param_3[0x1a] = '\0';
    param_3[0x1b] = '\0';
    param_3[0x1c] = '\0';
    param_3[0x1d] = '\0';
    param_3[0x1e] = '\0';
    param_3[0x1f] = '\0';
  }
  else if (*param_3 != '\x05') {
    local_c0 = &local_60;
    local_b8 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt;
    local_b0 = local_50;
    local_a8 = PTR_fmt_0079ab60;
    local_50[0] = param_3;
    (*(code *)PTR_panic_fmt_007991a8)(param_4,&PTR_s__vendor_serde_json_1_0_154_src_v_00795df0);
    *param_3 = '\x05';
    param_3[8] = '\0';
    param_3[9] = '\0';
    param_3[10] = '\0';
    param_3[0xb] = '\0';
    param_3[0xc] = '\0';
    param_3[0xd] = '\0';
    param_3[0xe] = '\0';
    param_3[0xf] = '\0';
    param_3[0x18] = '\0';
    param_3[0x19] = '\0';
    param_3[0x1a] = '\0';
    param_3[0x1b] = '\0';
    param_3[0x1c] = '\0';
    param_3[0x1d] = '\0';
    param_3[0x1e] = '\0';
    param_3[0x1f] = '\0';
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume();
  }
  uVar13 = param_2 == (undefined8 *)0x0;
  if (-1 < (longlong)param_2) goto LAB_007212fb;
  do {
    uVar13 = 1;
    (*(code *)PTR_handle_error_00798ff0)();
LAB_007212fb:
    local_d0 = param_3;
    if ((bool)uVar13) {
      local_108 = 1;
      lVar6 = *(longlong *)(param_3 + 8);
      if (lVar6 == 0) goto LAB_00721455;
      goto LAB_00721345;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    local_108 = (*(code *)PTR___rust_alloc_00799000)();
  } while (local_108 == 0);
  (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,param_2);
  lVar6 = *(longlong *)(param_3 + 8);
  if (lVar6 == 0) {
LAB_00721455:
    lVar6 = 0;
LAB_00721457:
    local_a8 = local_d0 + 8;
    local_f0 = 0;
    local_b8 = (code *)local_108;
    local_98 = 0;
    local_78 = local_e0;
    uStack_74 = uStack_dc;
    uStack_70 = uStack_d8;
    uStack_6c = uStack_d4;
    local_88 = 0;
    local_87 = local_ef;
    local_7f = local_e7;
    local_7b = local_e3;
    local_79 = local_e1;
    local_c0 = param_2;
    local_b0 = (char **)param_2;
    local_a0 = lVar6;
    local_90 = unaff_R14;
    <alloc[12e961f32105355]::collections::btree::map::entry::VacantEntry<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert_entry(local_50,&local_c0,&local_88);
    return local_50[0] + local_40 * 0x20;
  }
LAB_00721345:
  local_f8 = *(longlong *)(param_3 + 0x10);
  do {
    local_c8 = (ulonglong)*(ushort *)(lVar6 + 0x272);
    uVar5 = (ulonglong)((uint)*(ushort *)(lVar6 + 0x272) * 8);
    lVar11 = uVar5 * 3;
    lVar10 = 0x20;
    unaff_R14 = 0xffffffffffffffff;
    lVar3 = lVar6 + 0x168;
    do {
      if (lVar11 == 0) {
        unaff_R14 = local_c8;
        goto LAB_007213e5;
      }
      puVar9 = *(undefined8 **)(lVar3 + 8);
      puVar1 = *(undefined8 **)(lVar3 + 0x10);
      puVar7 = puVar1;
      if (param_2 < puVar1) {
        puVar7 = param_2;
      }
      iVar2 = (*(code *)PTR_memcmp_00799528)(uVar5,puVar7);
      lVar8 = (longlong)param_2 - (longlong)puVar1;
      if (iVar2 != 0) {
        lVar8 = (longlong)iVar2;
      }
      bVar4 = (0 < lVar8) - (lVar8 < 0);
      uVar5 = (ulonglong)bVar4;
      lVar10 = lVar10 + -0x20;
      unaff_R14 = unaff_R14 + 1;
      lVar11 = lVar11 + -0x18;
      lVar3 = lVar3 + 0x18;
    } while (bVar4 == 1);
    if (bVar4 == 0) {
      if (param_2 != (undefined8 *)0x0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(0,1);
        puVar9 = param_2;
      }
      local_f0 = 0;
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (&local_f0,puVar9);
      return (char *)(lVar6 - lVar10);
    }
LAB_007213e5:
    bVar12 = local_f8 == 0;
    local_f8 = local_f8 + -1;
    if (bVar12) goto LAB_00721457;
    lVar6 = *(longlong *)(lVar6 + 0x278 + unaff_R14 * 8);
  } while( true );
}


