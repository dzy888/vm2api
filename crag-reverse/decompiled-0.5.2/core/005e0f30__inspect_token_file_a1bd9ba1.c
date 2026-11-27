// 005e0f30 inspect_token_file

/* craggemini_core[66f3c71560d70857]::oauth::inspect_token_file */

ulonglong * __rustcall
craggemini_core[66f3c71560d70857]::oauth::inspect_token_file
          (ulonglong *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  char *pcVar5;
  char *pcVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong unaff_R13;
  ulonglong uVar9;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  ulonglong local_168;
  longlong local_160;
  longlong local_158;
  ulonglong uStack_150;
  int local_148;
  undefined4 uStack_144;
  byte bStack_140;
  undefined4 uStack_13f;
  undefined4 uStack_13b;
  undefined3 uStack_137;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  char local_128;
  undefined4 uStack_127;
  undefined4 uStack_123;
  undefined4 uStack_11f;
  undefined1 uStack_11b;
  undefined2 uStack_11a;
  undefined1 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  ulonglong local_108;
  undefined8 local_100;
  ulonglong local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  longlong local_e0;
  ulonglong uStack_d8;
  ulonglong local_d0;
  undefined8 uStack_c8;
  ulonglong local_b0;
  uint local_a8;
  uint local_a4;
  longlong local_90;
  
  uStack_11f = 0;
  uStack_11b = 0;
  local_128 = '\0';
  uStack_127 = 0xb6000208;
  uStack_123 = 0x1000001;
  (*(code *)PTR__open_00799768)(param_3,param_2);
  if (local_148 == 1) {
    if ((1 < ((uint)CONCAT41(uStack_13f,bStack_140) & 3) - 2) && ((bStack_140 & 3) != 0)) {
      uStack_d8 = CONCAT35((undefined3)uStack_13b,CONCAT41(uStack_13f,bStack_140)) + -1;
      local_e0 = CONCAT71(local_e0._1_7_,3);
      (*(code *)PTR_drop_00799040)();
    }
    *param_1 = 0xfffffffffffffffe;
    return param_1;
  }
  (*(code *)PTR_metadata_00799b30)();
  if ((int)local_e0 == 2) {
    if ((1 < ((uint)uStack_d8 & 3) - 2) && ((uStack_d8 & 3) != 0)) {
      lVar4 = uStack_d8 - 1;
      uStack_123._3_1_ = (undefined1)lVar4;
      uStack_11f = (undefined4)((ulonglong)lVar4 >> 8);
      uStack_11b = (undefined1)((ulonglong)lVar4 >> 0x28);
      uStack_11a = (undefined2)((ulonglong)lVar4 >> 0x30);
      local_128 = '\x03';
      (*(code *)PTR_drop_00799040)();
    }
  }
  else if ((local_a8 & 0xf000) == 0x8000) {
    uVar8 = (ulonglong)local_a4;
    uVar3 = (*(code *)PTR_geteuid_007992d8)();
    if ((((local_a8 & 0x3f) == 0) && (local_a4 == uVar3)) &&
       (local_b0 == 1 && 0xffffffffffffbfff < local_90 - 0x4001U)) {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar4 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar4 == 0) {
        (*(code *)PTR_handle_error_00798ff0)();
LAB_005e13fe:
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      local_160 = local_90;
      uStack_150 = 0;
      local_158 = lVar4;
      lVar4 = (*(code *)PTR_read_to_end_0079a060)();
      if (lVar4 == 1) {
        uVar10 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::io::error::Error>
                           (param_2,&local_160);
LAB_005e11e3:
        *param_1 = 0xfffffffffffffffe;
      }
      else {
        local_e0 = local_158;
        uStack_d8 = uStack_150;
        local_d0 = 0;
        uStack_c8 = 0;
        serde_json[dc3825464c436029]::de::from_trait::
        <serde_json[dc3825464c436029]::read::SliceRead,serde_json[dc3825464c436029]::value::Value>
                  (&local_128,&local_e0);
        if (local_128 == -1) {
          uVar10 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                   <core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,serde_json[dc3825464c436029]::error::Error>>
                             (&local_128);
          goto LAB_005e11e3;
        }
        uStack_13b = CONCAT13(uStack_118,CONCAT21(uStack_11a,uStack_11b));
        uStack_137 = (undefined3)((uint)_uStack_118 >> 8);
        uStack_134 = uStack_114;
        uStack_130 = uStack_110;
        uStack_12c = uStack_10c;
        uStack_144._1_3_ = (undefined3)uStack_123;
        uStack_144 = CONCAT31(uStack_144._1_3_,(char)((uint)uStack_127 >> 0x18));
        bStack_140 = (byte)((uint)uStack_123 >> 0x18);
        uStack_13f = uStack_11f;
        local_148 = CONCAT31((int3)uStack_127,local_128);
        pcVar5 = (char *)(*(code *)PTR_index_into_00799300)(uStack_127,&local_148);
        if ((pcVar5 == (char *)0x0) || (*pcVar5 != '\x05')) {
LAB_005e11c6:
          *param_1 = 0xfffffffffffffffe;
          uVar10 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                   <serde_json[dc3825464c436029]::value::Value>(&local_148);
        }
        else {
          pcVar6 = (char *)<alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                           ::get::<str>(pcVar5 + 8,&DAT_0019e703,0xc);
          if ((pcVar6 == (char *)0x0) ||
             ((*pcVar6 != '\x03' || (*(longlong *)(pcVar6 + 0x18) - 0x1001U < 0xfffffffffffff000))))
          goto LAB_005e11c6;
          local_e0 = *(longlong *)(pcVar6 + 0x10);
          uStack_d8 = *(longlong *)(pcVar6 + 0x18) + local_e0;
          cVar2 = <core[c0acaeba6ab4c2e0]::slice::iter::Iter<u8>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
                  ::try_fold::
                  <(),core[c0acaeba6ab4c2e0]::iter::adapters::copied::copy_try_fold<u8,(),core[c0acaeba6ab4c2e0]::ops::control_flow::ControlFlow<()>,core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::all::check<u8,craggemini_core[66f3c71560d70857]::oauth::inspect_token_file::_closure_0_>::_closure_0_>::_closure_0_,core[c0acaeba6ab4c2e0]::ops::control_flow::ControlFlow<()>>
                            ();
          if (cVar2 != '\0') goto LAB_005e11c6;
          pcVar6 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Da,&local_148);
          local_168 = 0xffffffffffffffff;
          uVar9 = local_b0;
          uVar10 = extraout_XMM0_Da_00;
          if (((pcVar6 != (char *)0x0) && (*pcVar6 == '\x03')) &&
             (unaff_R13 = *(ulonglong *)(pcVar6 + 0x18), 0xffffffffffffff01 < unaff_R13 - 0xff)) {
            uVar9 = *(ulonglong *)(pcVar6 + 0x10);
            uVar10 = <alloc[12e961f32105355]::raw_vec::RawVecInner>::try_allocate_in
                               (&local_e0,unaff_R13,0,1,1);
            local_168 = uStack_d8;
            if ((char)local_e0 != '\0') {
              (*(code *)PTR_handle_error_00798ff0)();
              goto LAB_005e13fe;
            }
            local_108 = local_d0;
            uVar10 = (*(code *)PTR_memcpy_00799008)(uVar10,unaff_R13);
          }
          pcVar6 = (char *)(*(code *)PTR_index_into_00799300)(uVar10,&local_148);
          uVar7 = 0xffffffffffffffff;
          if (((pcVar6 != (char *)0x0) && (*pcVar6 == '\x03')) &&
             (uVar8 = *(ulonglong *)(pcVar6 + 0x18), 0xffffffffffffff7f < uVar8 - 0x81)) {
            local_100 = *(undefined8 *)(pcVar6 + 0x10);
            uVar10 = <alloc[12e961f32105355]::raw_vec::RawVecInner>::try_allocate_in
                               (&local_e0,uVar8,0,1,1);
            uVar9 = local_d0;
            uVar7 = uStack_d8;
            if ((char)local_e0 != '\0') {
              (*(code *)PTR_handle_error_00798ff0)();
              goto LAB_005e13fe;
            }
            (*(code *)PTR_memcpy_00799008)(uVar10,uVar8);
          }
          lVar4 = <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                  ::get::<str>(pcVar5 + 8,&DAT_0019e733,6);
          if (lVar4 == 0) {
            local_f8 = 0xffffffffffffffff;
          }
          else {
            inspect_token_file::_closure_3_(&local_f8,lVar4);
          }
          param_1[8] = local_e8;
          param_1[6] = local_f8;
          param_1[7] = local_f0;
          *param_1 = local_168;
          param_1[1] = local_108;
          param_1[2] = unaff_R13;
          param_1[3] = uVar7;
          param_1[4] = uVar9;
          param_1[5] = uVar8;
          uVar10 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                   <serde_json[dc3825464c436029]::value::Value>(&local_148);
        }
      }
      if (local_160 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar10,1);
      }
      goto LAB_005e1082;
    }
  }
  *param_1 = 0xfffffffffffffffe;
LAB_005e1082:
  (*(code *)PTR_close_00799030)();
  return param_1;
}


