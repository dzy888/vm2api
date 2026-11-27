// 005e17e0 prepare_agy_oauth_home

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* craggemini_core[66f3c71560d70857]::oauth::prepare_agy_oauth_home */

longlong __rustcall
craggemini_core[66f3c71560d70857]::oauth::prepare_agy_oauth_home
          (undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 local_114;
  longlong local_110;
  undefined8 local_108;
  undefined8 local_100;
  int local_f8;
  undefined4 local_f4;
  longlong local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  ulonglong local_d8;
  longlong local_d0;
  undefined4 *local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined4 *local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined4 *local_98;
  undefined8 local_90;
  longlong local_88;
  undefined4 *local_80;
  undefined8 local_78;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar7 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar7 == (undefined4 *)0x0) {
    (*(code *)PTR_handle_error_00798ff0)();
  }
  else {
    *(undefined4 *)((longlong)puVar7 + 3) = 0x696e696d;
    *puVar7 = 0x6d65672e;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar8 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
    uVar5 = _UNK_0019ea09;
    uVar4 = _UNK_0019ea05;
    uVar13 = _UNK_0019ea01;
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = _DAT_0019e9fd;
      puVar8[1] = uVar13;
      puVar8[2] = uVar4;
      puVar8[3] = uVar5;
      *(undefined8 *)((longlong)puVar8 + 0xf) = 0x696c632d79746976;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar9 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar9 == (undefined4 *)0x0) {
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_005e1ee2;
      }
      *(undefined4 *)((longlong)puVar9 + 3) = 0x6769666e;
      *puVar9 = 0x6e6f632e;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      local_80 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
      if (local_80 == (undefined4 *)0x0) {
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_005e1ee2;
      }
      *(undefined2 *)(local_80 + 1) = 0x6568;
      *local_80 = 0x6361632e;
      local_d0 = 7;
      local_c0 = 7;
      local_b8 = 0x17;
      local_a8 = 0x17;
      local_a0 = 7;
      local_90 = 7;
      local_d8 = 4;
      local_88 = 6;
      local_78 = 6;
      local_e0 = 1;
      local_c8 = puVar7;
      local_b0 = puVar8;
      local_98 = puVar9;
      uVar13 = (*(code *)PTR__join_00799210)(puVar7,param_2,7);
      uVar13 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar13,1);
      local_f8 = 0x1ff;
      local_f4 = CONCAT31(local_f4._1_3_,1);
      lVar10 = (*(code *)PTR__create_00799410)(uVar13,local_100);
      uVar13 = extraout_XMM0_Da;
      if ((lVar10 != 0) ||
         (lVar10 = (*(code *)PTR_set_permissions_007992e8)(extraout_XMM0_Da,0x1c0),
         uVar13 = extraout_XMM0_Da_00, lVar10 != 0)) {
        iVar11 = 1;
LAB_005e19ce:
        bVar3 = false;
        bVar2 = false;
joined_r0x005e19d8:
        if (local_110 != 0) {
          uVar13 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar13,1);
          bVar2 = bVar3;
        }
        puVar6 = PTR___rust_dealloc_00798fc8;
        if (bVar2) {
          return lVar10;
        }
        lVar12 = 0;
        do {
          if (*(longlong *)((longlong)&local_d0 + lVar12 + (ulonglong)(uint)(iVar11 << 3) * 3) != 0)
          {
            uVar13 = (*(code *)puVar6)(uVar13,1);
          }
          lVar12 = lVar12 + 0x18;
        } while ((ulonglong)(uint)(iVar11 << 3) * 3 + -0x60 + lVar12 != 0);
        return lVar10;
      }
      if (local_110 != 0) {
        uVar13 = (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Da_00,1);
      }
      lVar10 = local_b8;
      local_e0 = 2;
      if (local_b8 == -1) {
        lVar10 = 2;
        iVar11 = 2;
LAB_005e1b27:
        puVar6 = PTR___rust_dealloc_00798fc8;
        lVar12 = 0;
        do {
          if (*(longlong *)((longlong)&local_d0 + lVar12 + lVar10 * 0x18) != 0) {
            uVar13 = (*(code *)puVar6)(uVar13,1);
          }
          lVar12 = lVar12 + 0x18;
        } while ((ulonglong)(uint)(iVar11 << 3) * 3 != lVar12);
      }
      else {
        uVar13 = (*(code *)PTR__join_00799210)(local_b0,param_2,local_a8);
        if (lVar10 != 0) {
          uVar13 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar13,1);
        }
        local_f8 = 0x1ff;
        local_f4 = CONCAT31(local_f4._1_3_,1);
        lVar10 = (*(code *)PTR__create_00799410)(uVar13,local_100);
        uVar13 = extraout_XMM0_Da_01;
        if ((lVar10 != 0) ||
           (lVar10 = (*(code *)PTR_set_permissions_007992e8)(extraout_XMM0_Da_01,0x1c0),
           uVar13 = extraout_XMM0_Da_02, lVar10 != 0)) {
          iVar11 = 2;
          goto LAB_005e19ce;
        }
        if (local_110 != 0) {
          uVar13 = (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Da_02,1);
        }
        lVar10 = local_a0;
        local_e0 = 3;
        if (local_a0 == -1) {
          iVar11 = 1;
          lVar10 = 3;
          goto LAB_005e1b27;
        }
        uVar13 = (*(code *)PTR__join_00799210)(local_98,param_2,local_90);
        if (lVar10 != 0) {
          uVar13 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar13,1);
        }
        local_f8 = 0x1ff;
        local_f4 = CONCAT31(local_f4._1_3_,1);
        lVar10 = (*(code *)PTR__create_00799410)(uVar13,local_100);
        uVar13 = extraout_XMM0_Da_03;
        if ((lVar10 != 0) ||
           (lVar10 = (*(code *)PTR_set_permissions_007992e8)(extraout_XMM0_Da_03,0x1c0),
           uVar13 = extraout_XMM0_Da_04, lVar10 != 0)) {
          iVar11 = 3;
          goto LAB_005e19ce;
        }
        if (local_110 != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Da_04,1);
        }
        lVar10 = local_88;
        local_e0 = 4;
        if (local_88 != -1) {
          uVar13 = (*(code *)PTR__join_00799210)(local_80,param_2,local_78);
          if (lVar10 != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar13,1);
          }
          local_f8 = 0x1ff;
          local_f4 = CONCAT31(local_f4._1_3_,1);
          local_e8 = local_100;
          lVar10 = (*(code *)PTR__create_00799410)();
          bVar3 = true;
          bVar2 = true;
          uVar13 = extraout_XMM0_Da_05;
          if ((lVar10 != 0) ||
             (lVar10 = (*(code *)PTR_set_permissions_007992e8)(extraout_XMM0_Da_05,0x1c0),
             uVar13 = extraout_XMM0_Da_06, lVar10 != 0)) {
            iVar11 = 4;
            goto joined_r0x005e19d8;
          }
          if (local_110 != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Da_06,1);
          }
        }
      }
      uVar13 = (*(code *)PTR__join_00799210)(&DAT_0019ea14,param_2,0x25);
      uVar13 = (*(code *)PTR_metadata_00799308)(uVar13,local_100);
      if ((int)local_e0 == 2) {
        if ((1 < ((uint)local_d8 & 3) - 2) && ((local_d8 & 3) != 0)) {
          local_d8 = local_d8 - 1;
          local_e0 = CONCAT71(local_e0._1_7_,3);
          (*(code *)PTR_drop_00799040)();
        }
        local_d8 = CONCAT26((short)(local_d8 >> 0x30),0x10000000100);
        local_e0 = 0x18000020000;
        uVar13 = (*(code *)PTR__open_00799768)(local_100,local_108);
        if (local_f8 == 1) {
          lVar10 = local_f0;
        }
        else {
          local_114 = local_f4;
          lVar10 = <std[6c98fd8553dbae28]::fs::File_as_std[6c98fd8553dbae28]::io::Write>::write_all
                             (&local_114,&DAT_0019ea39,0x31);
          if ((lVar10 == 0) && (lVar10 = (*(code *)PTR_sync_data_00799770)(), lVar10 == 0)) {
            uVar13 = (*(code *)PTR_close_00799030)();
            goto LAB_005e1e7e;
          }
          uVar13 = (*(code *)PTR_close_00799030)();
        }
        if (local_110 != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar13,1);
        }
      }
      else {
LAB_005e1e7e:
        if (local_110 != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar13,1);
        }
        lVar10 = 0;
      }
      return lVar10;
    }
  }
  (*(code *)PTR_handle_error_00798ff0)();
LAB_005e1ee2:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


