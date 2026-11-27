// 005dd370 inspect_session_error_db

/* craggemini_core[66f3c71560d70857]::acp_backend::inspect_session_error_db */

longlong * __rustcall
craggemini_core[66f3c71560d70857]::acp_backend::inspect_session_error_db(longlong *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  undefined8 local_148;
  ulonglong local_140;
  undefined8 local_138;
  ulonglong local_130;
  ulonglong local_128;
  undefined8 *local_120;
  undefined1 local_118;
  longlong local_110;
  undefined8 *local_108;
  undefined *local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  ulonglong local_b8;
  undefined8 local_58;
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  conversation_db_path(&local_108);
  if (local_108 == (undefined8 *)0xffffffffffffffff) {
    *param_1 = -1;
    return param_1;
  }
  local_120 = local_108;
  uVar10 = CONCAT44(uStack_f4,local_f8);
  local_130 = (ulonglong)local_100;
  auVar12 = open_sqlite_readonly(local_100,uVar10);
  lVar6 = auVar12._0_8_;
  if (lVar6 != 0) {
    local_148 = 0;
    iVar3 = (**(code **)(lVar6 + 0x10))(&local_148,0xffffffff,0);
    if (local_148 != 0 && iVar3 == 0) {
      iVar3 = (**(code **)(lVar6 + 0x18))(0,0x4000);
      if (((((iVar3 == 0) && (iVar3 = (**(code **)(lVar6 + 0x18))(), iVar3 == 0)) &&
           (iVar3 = (**(code **)(lVar6 + 0x18))(), iVar3 == 0)) &&
          ((iVar3 = (**(code **)(lVar6 + 0x20))(), iVar3 == 100 &&
           (uVar4 = (**(code **)(lVar6 + 0x38))(), 0 < (int)uVar4)))) &&
         (lVar5 = (**(code **)(lVar6 + 0x30))(), lVar5 != 0)) {
        uVar11 = 0x4000;
        if (uVar4 < 0x4000) {
          uVar11 = uVar4;
        }
        local_50 = lVar5;
        <alloc[12e961f32105355]::raw_vec::RawVecInner>::try_allocate_in(&local_108,uVar11,0,1,1);
        local_128 = (ulonglong)local_100;
        if ((int)local_108 == 1) {
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_005ddb3e;
        }
        local_58 = CONCAT44(uStack_f4,local_f8);
        (*(code *)PTR_memcpy_00799008)();
        (**(code **)(lVar6 + 0x40))();
        if (auVar12._8_8_ != 0) {
          (**(code **)(lVar6 + 0x48))();
        }
        extract_error_text_from_step_payload(param_1,local_58,uVar11);
        lVar6 = *param_1;
        (*(code *)PTR___rust_dealloc_00798fc8)();
        if (lVar6 != -1) goto LAB_005dd876;
        goto LAB_005dd560;
      }
      (**(code **)(lVar6 + 0x40))();
    }
    if (auVar12._8_8_ != 0) {
      (**(code **)(lVar6 + 0x48))();
    }
  }
LAB_005dd560:
  if (DAT_0079c478 != 0) {
    <std[6c98fd8553dbae28]::sync::once_lock::OnceLock<core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::acp_backend::Sqlite3Api>>>
    ::initialize::
    <<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::acp_backend::Sqlite3Api>>>::get_or_init<craggemini_core[66f3c71560d70857]::acp_backend::load_sqlite3_api>::_closure_0_,_>
              (&SQLITE3_API);
  }
  if (SQLITE3_API != 0) {
    *param_1 = -1;
    goto LAB_005dd876;
  }
  local_148 = local_130;
  local_108 = &local_148;
  local_100 = PTR_fmt_00799420;
  local_140 = uVar10;
  (*(code *)PTR_format_inner_00799048)();
  local_108 = (undefined8 *)0x1b600000000;
  local_100._1_7_ = (uint7)((ulonglong)local_100 >> 8) & 0xffff0000000000;
  local_100 = (undefined *)CONCAT71(local_100._1_7_,1);
  (*(code *)PTR__open_00799768)(local_38,local_40);
  if ((int)local_148 == 1) {
    if ((1 < ((uint)local_140 & 3) - 2) && ((local_140 & 3) != 0)) {
      local_100 = (undefined *)(local_140 - 1);
      local_108 = (undefined8 *)CONCAT71(local_108._1_7_,3);
      (*(code *)PTR_drop_00799040)();
    }
    goto LAB_005dd716;
  }
  uVar2 = local_148._4_4_;
  (*(code *)PTR_metadata_00799b30)();
  uVar8 = local_b8;
  if ((int)local_108 == 2) {
    if ((1 < ((uint)local_100 & 3) - 2) && (((ulonglong)local_100 & 3) != 0)) {
      local_140 = (longlong)local_100 - 1;
      local_148 = CONCAT71(local_148._1_7_,3);
      (*(code *)PTR_drop_00799040)();
    }
LAB_005dd70c:
    (*(code *)PTR_close_00799030)();
LAB_005dd716:
    local_108 = (undefined8 *)0x1b600000000;
    local_100._1_7_ = (uint7)((ulonglong)local_100 >> 8) & 0xffff0000000000;
    local_100 = (undefined *)CONCAT71(local_100._1_7_,1);
    (*(code *)PTR__open_00799768)(uVar10,local_130);
    if ((char)local_148 == '\0') {
      uVar2 = local_148._4_4_;
      (*(code *)PTR_metadata_00799b30)();
      if ((int)local_108 == 2) {
        if ((1 < ((uint)local_100 & 3) - 2) && (((ulonglong)local_100 & 3) != 0)) {
          local_140 = (longlong)local_100 - 1;
          local_148 = CONCAT71(local_148._1_7_,3);
          (*(code *)PTR_drop_00799040)();
        }
      }
      else if (local_b8 != 0) {
        uVar10 = 0;
        if (0x7ffff < local_b8) {
          uVar10 = local_b8 - 0x80000;
        }
        if ((0x7ffff >= local_b8 || local_b8 - 0x80000 == 0) ||
           (uVar8 = uVar10, lVar6 = (*(code *)PTR_seek_0079a058)(), lVar6 != 1)) {
          uVar10 = local_b8 - uVar10;
          if ((longlong)uVar10 < 0) {
LAB_005dd8ba:
            (*(code *)PTR_handle_error_00798ff0)();
LAB_005ddb3e:
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          if (uVar10 == 0) {
            uVar8 = 1;
          }
          else {
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            uVar8 = (*(code *)PTR___rust_alloc_00799000)();
            if (uVar8 == 0) goto LAB_005dd8ba;
          }
          local_138 = 0;
          local_f8 = uVar2;
          local_108 = (undefined8 *)0x80000;
          local_100 = (undefined *)0x80000;
          local_148 = uVar10;
          local_140 = uVar8;
          auVar12 = std[6c98fd8553dbae28]::io::default_read_to_end::
                    <core[c0acaeba6ab4c2e0]::io::util::Take<std[6c98fd8553dbae28]::fs::File>>
                              (&local_108,&local_148,0);
          if ((auVar12._0_8_ & 1) == 0) {
            (*(code *)PTR_close_00799030)();
            uVar8 = local_148;
            if (local_148 != 0xffffffffffffffff) {
              extract_error_text_from_step_payload(param_1,local_140,local_138);
              if (*param_1 != -1) goto LAB_005ddadf;
              if (uVar8 != 0) {
                (*(code *)PTR___rust_dealloc_00798fc8)();
              }
            }
          }
          else {
            if ((1 < (auVar12._8_4_ & 3) - 2) && ((auVar12._8_8_ & 3) != 0)) {
              local_110 = auVar12._8_8_ - 1;
              local_118 = 3;
              (*(code *)PTR_drop_00799040)();
            }
            (*(code *)PTR_close_00799030)();
            if (local_148 != 0) {
              (*(code *)PTR___rust_dealloc_00798fc8)();
            }
          }
          goto LAB_005dd854;
        }
        if ((1 < ((uint)uVar8 & 3) - 2) && ((uVar8 & 3) != 0)) {
          local_100 = (undefined *)(uVar8 - 1);
          local_108 = (undefined8 *)CONCAT71(local_108._1_7_,3);
          (*(code *)PTR_drop_00799040)();
        }
      }
      (*(code *)PTR_close_00799030)();
    }
    else if ((1 < ((uint)local_140 & 3) - 2) && ((local_140 & 3) != 0)) {
      local_100 = (undefined *)(local_140 - 1);
      local_108 = (undefined8 *)CONCAT71(local_108._1_7_,3);
      (*(code *)PTR_drop_00799040)();
    }
LAB_005dd854:
    *param_1 = -1;
  }
  else {
    if (local_b8 == 0) goto LAB_005dd70c;
    uVar7 = 0;
    if (0x7ffff < local_b8) {
      uVar7 = local_b8 - 0x80000;
    }
    if ((0x7ffff < local_b8 && local_b8 - 0x80000 != 0) &&
       (uVar9 = uVar7, lVar6 = (*(code *)PTR_seek_0079a058)(), lVar6 == 1)) {
      if ((1 < ((uint)uVar9 & 3) - 2) && ((uVar9 & 3) != 0)) {
        local_100 = (undefined *)(uVar9 - 1);
        local_108 = (undefined8 *)CONCAT71(local_108._1_7_,3);
        (*(code *)PTR_drop_00799040)();
      }
      goto LAB_005dd70c;
    }
    uVar8 = uVar8 - uVar7;
    if ((longlong)uVar8 < 0) goto LAB_005dd8ba;
    if (uVar8 == 0) {
      uVar7 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      uVar7 = (*(code *)PTR___rust_alloc_00799000)();
      if (uVar7 == 0) goto LAB_005dd8ba;
    }
    local_138 = 0;
    local_f8 = uVar2;
    local_108 = (undefined8 *)0x80000;
    local_100 = (undefined *)0x80000;
    local_148 = uVar8;
    local_140 = uVar7;
    local_128 = uVar7;
    auVar12 = std[6c98fd8553dbae28]::io::default_read_to_end::
              <core[c0acaeba6ab4c2e0]::io::util::Take<std[6c98fd8553dbae28]::fs::File>>
                        (&local_108,&local_148,0);
    if (auVar12._0_8_ == 1) {
      if ((1 < (auVar12._8_4_ & 3) - 2) && ((auVar12._8_8_ & 3) != 0)) {
        local_110 = auVar12._8_8_ - 1;
        local_118 = 3;
        (*(code *)PTR_drop_00799040)();
      }
      (*(code *)PTR_close_00799030)();
      if (local_148 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      goto LAB_005dd716;
    }
    (*(code *)PTR_close_00799030)();
    uVar8 = local_148;
    if (local_148 == 0xffffffffffffffff) goto LAB_005dd716;
    extract_error_text_from_step_payload(param_1,local_140,local_138);
    if (*param_1 == -1) {
      if (uVar8 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      goto LAB_005dd716;
    }
LAB_005ddadf:
    if (uVar8 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
  if (local_48 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
LAB_005dd876:
  if (local_120 != (undefined8 *)0x0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  return param_1;
}


