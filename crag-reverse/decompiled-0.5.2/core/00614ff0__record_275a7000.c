// 00614ff0 record

/* <craggemini_core[66f3c71560d70857]::schema::ToolNameCache>::record */

void __rustcall
<craggemini_core[66f3c71560d70857]::schema::ToolNameCache>::record
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong extraout_RDX;
  bool bVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  byte local_c8;
  undefined1 local_a0 [16];
  undefined1 *local_90;
  code *local_88;
  undefined1 *local_80;
  code *local_78;
  undefined1 local_70 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [24];
  
  uVar4 = param_3;
  uVar3 = (*(code *)PTR_now_00799250)();
  auVar8 = craggemini_core[66f3c71560d70857]::schema::strip_mcp_prefix(param_4,param_5);
  auVar8 = ::<str>::trim_matches::<<char>::is_whitespace>(auVar8._0_8_,auVar8._8_8_);
  lVar5 = auVar8._8_8_;
  auVar9 = ::<str>::trim_matches::<<char>::is_whitespace>(param_6,param_7);
  lVar6 = auVar9._8_8_;
  if (((lVar5 != 0) && (lVar6 != 0)) &&
     ((lVar5 != lVar6 || (iVar2 = (*(code *)PTR_bcmp_00799020)(), iVar2 != 0)))) {
    LOCK();
    bVar7 = *(int *)(param_1 + 8) == 0;
    if (bVar7) {
      *(int *)(param_1 + 8) = 1;
    }
    UNLOCK();
    if (!bVar7) {
      (*(code *)PTR_lock_contended_00798fe0)();
    }
    if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
      local_c8 = 0;
    }
    else {
      local_c8 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
      local_c8 = local_c8 ^ 1;
    }
    local_a0 = ::<str>::trim_matches::<<char>::is_whitespace>(param_2,param_3);
    local_70 = ::<str>::trim_matches::<<char>::is_whitespace>(auVar8._0_8_,lVar5);
    local_90 = local_a0;
    local_88 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
    local_80 = local_70;
    local_78 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
    (*(code *)PTR_format_inner_00799048)();
    insert_locked(param_1,param_1 + 0x10,local_48,auVar9._0_8_,lVar6,uVar3,(int)uVar4);
    ::<str>::trim_matches::<<char>::is_whitespace>(param_2,param_3);
    if (extraout_RDX != 0) {
      local_58 = ::<str>::trim_matches::<<char>::is_whitespace>(1,0);
      auVar8 = ::<str>::trim_matches::<<char>::is_whitespace>(auVar8._0_8_,lVar5);
      local_90 = local_58;
      local_88 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
      local_80 = local_a0;
      local_78 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
      local_a0 = auVar8;
      (*(code *)PTR_format_inner_00799048)();
      insert_locked(param_1,param_1 + 0x10,local_70,auVar9._0_8_,lVar6,uVar3,(int)uVar4);
    }
    if ((local_c8 == 0) &&
       ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) {
      cVar1 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
      if (cVar1 == '\0') {
        *(undefined1 *)(param_1 + 0xc) = 1;
      }
    }
    LOCK();
    iVar2 = *(int *)(param_1 + 8);
    *(int *)(param_1 + 8) = 0;
    UNLOCK();
    if (iVar2 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
  }
  return;
}


