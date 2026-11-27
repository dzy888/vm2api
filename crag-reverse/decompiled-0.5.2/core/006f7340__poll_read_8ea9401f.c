// 006f7340 poll_read

/* <tokio[d7d91d38da47d894]::fs::file::File as
   tokio[d7d91d38da47d894]::io::async_read::AsyncRead>::poll_read */

undefined1  [16] __rustcall
<tokio[d7d91d38da47d894]::fs::file::File_as_tokio[d7d91d38da47d894]::io::async_read::AsyncRead>::
poll_read(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined1 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined **ppuVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar16;
  undefined1 auVar17 [16];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  undefined8 *local_70;
  int local_68;
  undefined4 uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  uint local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_70 = param_1 + 8;
LAB_006f737c:
  while (lVar7 = param_1[6], lVar7 == -2) {
    <tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<(tokio[d7d91d38da47d894]::fs::file::Operation,tokio[d7d91d38da47d894]::io::blocking::Buf)>as_core[c0acaeba6ab4c2e0]::future::future::Future>
    ::poll(&local_a8,param_1 + 7,param_2);
    uVar15 = local_78;
    uVar13 = uStack_80;
    uVar8 = local_88;
    uVar6 = uStack_90;
    uVar9 = local_98;
    uVar12 = uStack_a0;
    if ((int)local_a8 == -2) {
      uVar8 = 1;
      uVar9 = 0xfffffffffffffffe;
      goto LAB_006f7975;
    }
    local_38 = local_78;
    uVar14 = (uint)local_98;
    local_48 = (undefined4)local_88;
    uStack_44 = local_88._4_4_;
    uStack_40 = (undefined4)uStack_80;
    uStack_3c = uStack_80._4_4_;
    local_58 = (uint)local_98;
    uStack_54 = local_98._4_4_;
    uStack_50 = (undefined4)uStack_90;
    uStack_4c = uStack_90._4_4_;
    local_68 = (int)local_a8;
    uStack_64 = local_a8._4_4_;
    uStack_60 = (uint)uStack_a0;
    uStack_5c = uStack_a0._4_4_;
    if (local_a8 == -1) {
      local_a8 = 0;
      uStack_a0 = 0;
      lVar7 = param_1[6];
      if (lVar7 == -2) {
        plVar2 = (longlong *)param_1[7];
        LOCK();
        lVar7 = *plVar2;
        if (lVar7 == 0xcc) {
          *plVar2 = 0x84;
        }
        UNLOCK();
        if (lVar7 != 0xcc) {
          (**(code **)(plVar2[2] + 0x20))();
        }
      }
      else if ((lVar7 != -1) && (lVar7 != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)(0,1);
      }
      param_1[6] = 0;
      param_1[7] = 1;
      *local_70 = local_a8;
      local_70[1] = uStack_a0;
      local_98 = CONCAT44(uStack_4c,uStack_50);
      local_a8 = CONCAT44(uStack_5c,uStack_60);
      uStack_a0 = CONCAT44(uStack_54,local_58);
      uVar9 = (*(code *)PTR_from_0079a940)();
LAB_006f7973:
      uVar8 = 0;
LAB_006f7975:
      auVar17._8_8_ = uVar9;
      auVar17._0_8_ = uVar8;
      return auVar17;
    }
    if (local_a8 == 1) {
      if (uStack_a0 == 0) {
        if (uStack_80 != local_78) {
          (*(code *)PTR_panic_00799338)(1,&PTR_s__vendor_tokio_1_54_1_src_fs_file_007947d0);
LAB_006f7b65:
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        lVar7 = param_1[6];
        if (lVar7 == -2) {
          plVar2 = (longlong *)param_1[7];
          LOCK();
          lVar7 = *plVar2;
          if (lVar7 == 0xcc) {
            *plVar2 = 0x84;
          }
          UNLOCK();
          if (lVar7 != 0xcc) {
            (**(code **)(plVar2[2] + 0x20))();
          }
        }
        else if ((lVar7 != -1) && (lVar7 != 0)) {
          (*(code *)PTR___rust_dealloc_00798fc8)(1,1);
        }
        param_1[6] = uVar6;
        param_1[7] = uVar8;
        param_1[8] = uVar13;
        param_1[9] = uVar13;
      }
      else {
        if (*(char *)(param_1 + 0xb) != -1) {
          (*(code *)PTR_panic_00799338)(1,&PTR_s__vendor_tokio_1_54_1_src_fs_file_007947e8);
          goto LAB_006f7b65;
        }
        uVar9 = uStack_a0 & 3;
        uVar14 = (uint)uStack_a0 & 3;
        uVar16 = 1;
        switch(uVar14) {
        case 0:
          *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(uStack_a0 + 0x10);
          lVar7 = param_1[6];
          if (lVar7 != -2) goto LAB_006f76b4;
          goto LAB_006f76e7;
        case 1:
          *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(uStack_a0 + 0x1f);
          lVar7 = param_1[6];
          break;
        case 2:
          lVar7 = (*(code *)PTR_get_os_functions_007992e0)();
          uVar4 = (**(code **)(lVar7 + 8))();
          *(undefined1 *)(param_1 + 0xb) = uVar4;
          lVar7 = param_1[6];
          uVar16 = extraout_XMM0_Da_00;
          break;
        case 3:
          *(char *)(param_1 + 0xb) = (char)(uStack_a0 >> 0x20);
          lVar7 = param_1[6];
        }
        if (lVar7 == -2) {
LAB_006f76e7:
          plVar2 = (longlong *)param_1[7];
          LOCK();
          lVar7 = *plVar2;
          if (lVar7 == 0xcc) {
            *plVar2 = 0x84;
          }
          UNLOCK();
          if (lVar7 != 0xcc) {
            (**(code **)(plVar2[2] + 0x20))();
          }
        }
        else {
LAB_006f76b4:
          if ((lVar7 != -1) && (lVar7 != 0)) {
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar16,1);
          }
        }
        param_1[6] = uVar6;
        param_1[7] = uVar8;
        param_1[8] = uVar13;
        param_1[9] = uVar15;
        if ((1 < uVar14 - 2) && (uVar9 != 0)) {
          uStack_a0 = uVar12 - 1;
          local_a8 = CONCAT71(local_a8._1_7_,3);
          (*(code *)PTR_drop_00799040)();
        }
      }
    }
    else {
      if (local_a8 != 2) {
        if ((uStack_a0 & 1) == 0) {
          uVar9 = *(ulonglong *)(param_3 + 8);
          uVar12 = *(ulonglong *)(param_3 + 0x10);
          uVar15 = uVar9 - uVar12;
          if (uStack_80 - local_78 <= uVar9 - uVar12) {
            uVar15 = uStack_80 - local_78;
          }
          if (local_78 <= uStack_80) {
            uVar5 = uVar15 + uVar12;
            ppuVar10 = &anon_880d723ff0f66ce4ced63274bf095def_21_llvm_12887403613343987975;
            if ((uVar5 < uVar12) || (uVar9 < uVar5)) goto LAB_006f7b56;
            uVar16 = (*(code *)PTR_memcpy_00799008)
                               (&anon_880d723ff0f66ce4ced63274bf095def_21_llvm_12887403613343987975,
                                uVar15);
            if (*(ulonglong *)(param_3 + 0x18) < uVar5) {
              *(ulonglong *)(param_3 + 0x18) = uVar5;
            }
            *(ulonglong *)(param_3 + 0x10) = uVar5;
            uVar15 = uVar15 + local_78;
            if (uVar15 == uVar13) {
              uVar15 = 0;
              uVar13 = 0;
            }
            lVar7 = param_1[6];
            if (lVar7 == -2) {
              plVar2 = (longlong *)param_1[7];
              LOCK();
              lVar7 = *plVar2;
              if (lVar7 == 0xcc) {
                *plVar2 = 0x84;
              }
              UNLOCK();
              if (lVar7 != 0xcc) {
                (**(code **)(plVar2[2] + 0x20))();
              }
            }
            else if ((lVar7 != -1) && (lVar7 != 0)) {
              (*(code *)PTR___rust_dealloc_00798fc8)(uVar16,1);
            }
            param_1[6] = uVar6;
            param_1[7] = uVar8;
            param_1[8] = uVar13;
            param_1[9] = uVar15;
            goto LAB_006f78bb;
          }
          ppuVar10 = &anon_880d723ff0f66ce4ced63274bf095def_20_llvm_12887403613343987975;
          uVar9 = uStack_80;
LAB_006f7b56:
          (*(code *)PTR_slice_index_fail_007993c8)(ppuVar10,uVar9,local_98);
        }
        else {
          if (uStack_80 == local_78) {
            lVar7 = param_1[6];
            if (lVar7 == -2) {
              plVar2 = (longlong *)param_1[7];
              LOCK();
              lVar7 = *plVar2;
              if (lVar7 == 0xcc) {
                *plVar2 = 0x84;
              }
              UNLOCK();
              if (lVar7 != 0xcc) {
                (**(code **)(plVar2[2] + 0x20))();
              }
            }
            else if ((lVar7 != -1) && (lVar7 != 0)) {
              (*(code *)PTR___rust_dealloc_00798fc8)((int)local_a8,1);
            }
            param_1[6] = uVar6;
            param_1[7] = uVar8;
            param_1[8] = uVar13;
            param_1[9] = uVar13;
            goto LAB_006f7973;
          }
          (*(code *)PTR_panic_00799338)
                    ((int)local_a8,&PTR_s__vendor_tokio_1_54_1_src_fs_file_007947b8);
        }
        goto LAB_006f7b65;
      }
      uVar16 = 2;
      if (uStack_80 != local_78) goto LAB_006f7ac1;
      lVar7 = param_1[6];
      if (lVar7 == -2) {
        plVar2 = (longlong *)param_1[7];
        LOCK();
        lVar7 = *plVar2;
        if (lVar7 == 0xcc) {
          *plVar2 = 0x84;
        }
        UNLOCK();
        if (lVar7 != 0xcc) {
          (**(code **)(plVar2[2] + 0x20))();
        }
      }
      else if ((lVar7 != -1) && (lVar7 != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)(2,1);
      }
      param_1[6] = uVar6;
      param_1[7] = uVar8;
      param_1[8] = uVar13;
      param_1[9] = uVar13;
      if (uVar12 == 1) {
        if ((1 < (uVar14 & 3) - 2) && ((uVar9 & 3) != 0)) {
          uStack_a0 = uVar9 - 1;
          local_a8 = CONCAT71(local_a8._1_7_,3);
          (*(code *)PTR_drop_00799040)();
        }
      }
      else {
        param_1[10] = uVar9;
      }
    }
  }
  param_1[6] = 0xffffffffffffffff;
  if (lVar7 == -1) {
    uVar16 = (*(code *)PTR_unwrap_failed_00799278)();
LAB_006f7ac1:
    (*(code *)PTR_panic_00799338)(uVar16,&PTR_s__vendor_tokio_1_54_1_src_fs_file_00794800);
    goto LAB_006f7b65;
  }
  uVar9 = param_1[7];
  uVar12 = param_1[8];
  uVar6 = param_1[9];
  uVar13 = *(ulonglong *)(param_3 + 8);
  uVar15 = *(ulonglong *)(param_3 + 0x10);
  uVar5 = uVar12 - uVar6;
  if (uVar5 == 0) {
    uVar6 = uVar13 - uVar15;
    if (uVar6 != 0) {
      plVar2 = (longlong *)*param_1;
      LOCK();
      lVar1 = *plVar2;
      *plVar2 = *plVar2 + 1;
      UNLOCK();
      if (*plVar2 == 0 || SCARRY8(lVar1,1) != *plVar2 < 0) goto LAB_006f7b65;
      local_88 = *param_1;
      uStack_80 = uVar6;
      if ((ulonglong)param_1[0xc] < uVar6) {
        uStack_80 = param_1[0xc];
      }
      local_a8 = lVar7;
      uStack_a0 = uVar9;
      local_98 = uVar12;
      uStack_90 = uVar12;
      uVar8 = tokio[d7d91d38da47d894]::runtime::blocking::pool::spawn_blocking::
              <<tokio[d7d91d38da47d894]::fs::file::Inner>::spawn_blocking_read::_closure_0_,(tokio[d7d91d38da47d894]::fs::file::Operation,tokio[d7d91d38da47d894]::io::blocking::Buf)>
                        (&local_a8,&PTR_s__vendor_tokio_1_54_1_src_fs_file_00794650);
      lVar7 = param_1[6];
      if (lVar7 == -2) {
        plVar2 = (longlong *)param_1[7];
        LOCK();
        lVar7 = *plVar2;
        if (lVar7 == 0xcc) {
          *plVar2 = 0x84;
        }
        UNLOCK();
        if (lVar7 != 0xcc) {
          (**(code **)(plVar2[2] + 0x20))();
        }
      }
      else if ((lVar7 != -1) && (lVar7 != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Da,1);
      }
      param_1[6] = 0xfffffffffffffffe;
      param_1[7] = uVar8;
      goto LAB_006f737c;
    }
    uVar11 = 0;
    uVar6 = uVar12;
LAB_006f7825:
    uVar5 = uVar11 + uVar15;
    ppuVar10 = &anon_880d723ff0f66ce4ced63274bf095def_21_llvm_12887403613343987975;
    if ((uVar15 <= uVar5) && (uVar5 <= uVar13)) {
      uVar16 = (*(code *)PTR_memcpy_00799008)
                         (&anon_880d723ff0f66ce4ced63274bf095def_21_llvm_12887403613343987975,uVar11
                         );
      if (*(ulonglong *)(param_3 + 0x18) < uVar5) {
        *(ulonglong *)(param_3 + 0x18) = uVar5;
      }
      *(ulonglong *)(param_3 + 0x10) = uVar5;
      uVar11 = uVar11 + uVar6;
      if (uVar11 == uVar12) {
        uVar12 = 0;
        uVar11 = 0;
      }
      if ((param_1[6] != -1) && (param_1[6] != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar16,1);
      }
      param_1[6] = lVar7;
      param_1[7] = uVar9;
      param_1[8] = uVar12;
      param_1[9] = uVar11;
LAB_006f78bb:
      uVar9 = 0;
      goto LAB_006f7973;
    }
  }
  else {
    uVar11 = uVar13 - uVar15;
    if (uVar5 <= uVar13 - uVar15) {
      uVar11 = uVar5;
    }
    if (uVar6 <= uVar12) goto LAB_006f7825;
    ppuVar10 = &anon_880d723ff0f66ce4ced63274bf095def_20_llvm_12887403613343987975;
    uVar13 = uVar12;
  }
  (*(code *)PTR_slice_index_fail_007993c8)(ppuVar10,uVar13);
  goto LAB_006f7b65;
}


