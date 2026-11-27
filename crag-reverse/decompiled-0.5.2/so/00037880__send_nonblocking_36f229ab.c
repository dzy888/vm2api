// 00037880 send_nonblocking

/* WARNING: Switch with 1 destination removed at 0x00037918 */
/* WARNING: Switch with 1 destination removed at 0x00070cc8 */
/* agy_bridge[64a9e9deac6c45ce]::send_nonblocking */

ulonglong __rustcall agy_bridge[64a9e9deac6c45ce]::send_nonblocking(undefined4 *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong local_60;
  longlong local_58;
  ulonglong local_50;
  undefined4 local_48;
  undefined4 local_44;
  longlong local_40;
  uint local_34;
  
  serde_json[dc3825464c436029]::ser::to_vec::<serde_json[dc3825464c436029]::value::Value>(&local_60)
  ;
  if (local_60 == 0xffffffffffffffff) {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
    plVar7 = (longlong *)(*(code *)PTR___rust_alloc_000c3a90)();
    if (plVar7 == (longlong *)0x0) {
      (*(code *)PTR_handle_alloc_error_000c3d10)();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    *plVar7 = local_58;
    lVar5 = (*(code *)PTR_custom_owner_from_box_000c3ee0)();
    return lVar5 + 1;
  }
  if (local_50 < 0x200001) {
    if (local_50 == local_60) {
      (*(code *)PTR_grow_one_000c3bf8)();
    }
    *(undefined1 *)(local_58 + local_50) = 10;
    local_50 = local_50 + 1;
    (*(code *)PTR_now_000c3c00)();
    local_34 = 5;
    lVar5 = (*(code *)PTR_add_000c3c08)(0,5,&PTR_s_adapter_lib_rs_000bfad0);
    puVar2 = PTR_write_000c3c10;
    if (local_50 != 0) {
      uVar4 = 0;
      do {
        uVar9 = local_50 - uVar4;
        lVar6 = (*(code *)puVar2)();
        if (lVar6 == 1) {
          uVar11 = (uint)uVar9 & 3;
          uVar10 = uVar9;
          switch(uVar11) {
          case 0:
            cVar3 = *(char *)(uVar9 + 0x10);
            break;
          case 1:
            cVar3 = *(char *)(uVar9 + 0x1f);
            break;
          case 2:
            lVar6 = (*(code *)PTR_get_os_functions_000c3c18)();
            cVar3 = (**(code **)(lVar6 + 8))();
            break;
          case 3:
            cVar3 = (char)(uVar9 >> 0x20);
          }
          if ((cVar3 != '#') && (cVar3 != '\r')) goto LAB_000378e2;
          uVar8 = (uint)uVar10;
          lVar6 = (*(code *)PTR_now_000c3c00)();
          if (lVar6 == lVar5) {
            if (uVar8 < local_34) {
LAB_00037a39:
              local_48 = *param_1;
              local_44 = 4;
              (*(code *)PTR_poll_000c3c20)();
              if ((1 < uVar11 - 2) && ((uVar9 & 3) != 0)) {
                local_40 = uVar9 - 1;
                local_48 = CONCAT31(local_48._1_3_,3);
                (*(code *)PTR_drop_000c3ae0)();
              }
              goto LAB_00037980;
            }
          }
          else if (lVar6 < lVar5) goto LAB_00037a39;
          uVar4 = (*(code *)PTR_<&str>_000c3b30)();
          if ((1 < uVar11 - 2) && ((uVar9 & 3) != 0)) {
            local_40 = uVar9 - 1;
            local_48 = CONCAT31(local_48._1_3_,3);
            (*(code *)PTR_drop_000c3ae0)();
          }
          goto LAB_000378df;
        }
        if (uVar9 == 0) {
          uVar4 = (*(code *)PTR_<&str>_000c3b30)();
          goto LAB_000378df;
        }
        uVar4 = uVar4 + uVar9;
LAB_00037980:
      } while (uVar4 < local_50);
    }
    if (local_60 != 0) {
      (*(code *)PTR___rust_dealloc_000c3aa0)();
    }
    uVar9 = 0;
  }
  else {
    uVar4 = (*(code *)PTR_<&str>_000c3b30)();
LAB_000378df:
    uVar9 = uVar4;
LAB_000378e2:
    if (local_60 != 0) {
      (*(code *)PTR___rust_dealloc_000c3aa0)();
    }
  }
  return uVar9;
}


